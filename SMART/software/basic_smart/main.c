#include "omsp_system.h"
#include "hardware.h"
#include "cprintf.h"
#include <stdlib.h>
#include <stdio.h>

struct smart_input {
  unsigned char *a;       // initial memory position
  unsigned int size;    // size in bytes of memory to hash
  void (* call)();          // function call after smart
  unsigned long *n;     // nounce
  unsigned int n_size;  // size of the nounce
};

typedef struct smart_input * SmartIN;

void printx () {
    cprintf("> ");
}
//--------------------------------------------------//
//                   Set Key                        //
//--------------------------------------------------//
#define KEY  __attribute__((__section__(".key")))
unsigned long KEY key[64] = {
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68
}; 


#define SMART  __attribute__((__section__(".keyfunction"), noinline))

void SMART makehash (SmartIN input) {
    unsigned long *tt;
    char remaning[4];

    unsigned char *a;
    unsigned int size;

    a = input->a;
    size = input->size;

    // [is_last, in_ready, size[2], reset]
    SHA_CONFIG = 0b00001;
    SHA_CONFIG = 0b00000;

    // Use key
    for (int i = 0; i < 64; ++i) {
        SHA_IN = key[i];
        SHA_CONFIG = 0b01000;
        SHA_CONFIG = 0b00000;
    }

    for (int i = 0; i < 4; ++i) {
        remaning[i] = 0;
    }

    // Nounce
    for (int i = 0; i < input->n_size; ++i) {
        SHA_IN = (input->n)[i];
        SHA_CONFIG = 0b01000;
        SHA_CONFIG = 0b00000;
    }

    // // Input info
    SHA_IN = (unsigned long)((unsigned int) a);
    SHA_CONFIG = 0b01000;
    SHA_CONFIG = 0b00000;
    SHA_IN = (unsigned long) size;
    SHA_CONFIG = 0b01000;
    SHA_CONFIG = 0b00000;

    // memory
    tt = (unsigned long *) input->a;
    for (int i = 0; size-i*4 >= 4; ++i) {
        SHA_IN = tt[i];
        SHA_CONFIG = 0b01000;
        SHA_CONFIG = 0b00000;
    }
    // last bytes memory
    for (int i = size - size%4; i < size; ++i) {
        remaning[i%4] = a[i];
    }

    SHA_IN = ((unsigned long *) remaning)[0];
    if (size%4 == 0) { 
        SHA_CONFIG = 0b11000;
    } else if (size%4 == 1) { 
        SHA_CONFIG = 0b11010;
    }  else if (size%4 == 2) { 
        SHA_CONFIG = 0b11100;
    } else if (size%4 == 3) { 
        SHA_CONFIG = 0b11110;
    }
    SHA_CONFIG = 0b00000;

    while (~(SHA_STATUS >> 1) & 0b1) { };

    if (input->call != NULL)
        (input->call)();
}


//--------------------------------------------------//
//                   Delay function                 //
//--------------------------------------------------//
void delay(unsigned int d) {
   while(d--) {
      __nop();
      __nop();
   }
}

//--------------------------------------------------//
//                 tty_putc function                 //
//            (Send a byte to the UART)             //
//--------------------------------------------------//
int tty_putc (int txdata) {

  // Wait until the TX buffer is not full
  while (UART_STAT & UART_TX_FULL);

  // Write the output character
  UART_TXD = txdata;

  return 0;
}

//--------------------------------------------------//
//        UART RX interrupt service routine         //
//         (receive a byte from the UART)           //
//--------------------------------------------------//
volatile char rxdata;

// wakeup interrupt (8) INT_uart_rx(void) {
interrupt (8) INT_uart_rx(void) {
  // Read the received data
  rxdata = UART_RXD;

  // Clear the receive pending flag
  UART_STAT = UART_RX_PND;

  cprintf("%c", rxdata);
  // // Exit the low power mode
  // LPM0_EXIT;
}


//--------------------------------------------------//
// Main function with init an an endless loop that  //
// is synced with the interrupts trough the         //
// lowpower mode.                                   //
//--------------------------------------------------//
int main(void) {

    struct smart_input input;

    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    P3DIR  = 0xff;
    P3OUT  = 0xff;                      // Light LED during init

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    input.a = (void *) 0xFEE0;
    input.size = 0x100;
    input.call = printx;
    input.n = NULL;
    input.n_size = 0;

    makehash(&input);

    for (int i = 31; i >= 0; --i) {
        cprintf("%w", ((unsigned int *)&SHA_OUT)[i]);
    }
    while (1) cprintf(".");
}
