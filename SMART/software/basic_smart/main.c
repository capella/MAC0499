#include "omsp_system.h"
#include "hardware.h"
#include "cprintf.h"
#include <stdlib.h>
#include <stdio.h>

//--------------------------------------------------//
//                   Set Key                        //
//--------------------------------------------------//
#define KEY  __attribute__((__section__(".key")))
char KEY key[0x0100] = {
  42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69,
  0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19,
  0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99,
  0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9,
  0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09,
  0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
  0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
  0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89,
  0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29,
  0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
  0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79,
}; 


// #define SMART  __attribute__((__section__(".keyfunction"), noinline))

void copykey (unsigned long *tmp) {
    char *t = "The quick brown fox jumps over the lazy dog.";
    unsigned long result[16];
    unsigned long *tt;
    tt = (unsigned long *) t;

    // [is_last, in_ready, size[2], reset]
    SHA_CONFIG = 0b00001;
    SHA_CONFIG = 0b00000;

    // for (int i = 0; i < 11; ++i) {
    //     SHA_IN = tt[i];
    //     SHA_CONFIG = 0b01110;
    //     SHA_CONFIG = 0b00110;
    // }
    SHA_CONFIG = 0b10000;

    while (~(SHA_STATUS >> 1) & 0b1);

    // cprintf("%d ", SHA_OUT);
    // t = SHA_OUT;
    for (int i = 0; i < 16; ++i) {
        result[i] = ((unsigned long *)SHA_OUT)[i];
    }

    for (int i = 0; i < 16; ++i) {
        cprintf("%w ", result[i]);
    }
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
// void Port_1(void) {
//   rxdata = UART_RXD;
//   UART_STAT = UART_RX_PND;
//   cprintf(".");
// }


//--------------------------------------------------//
// Main function with init an an endless loop that  //
// is synced with the interrupts trough the         //
// lowpower mode.                                   //
//--------------------------------------------------//
int main(void) {
    // int reading = 0;
    // int pos = 0;
    // char buf[40];
    // int led = 0;
     // int *key;
     // key = (void *)0xfee0; 
    unsigned long calc[8];

    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    P3DIR  = 0xff;
    P3OUT  = 0xff;                      // Light LED during init

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;


    // delay(65535);

    P3OUT  = 0x00;                      // Switch off LED

    // cprintf("\r\n====== openMSP430 in action ======\r\n");   //say hello
    copykey(calc);

    // for (int i = 0; i < 8; ++i) {
    //  cprintf("%l ", calc[i]);
    // }
    while (1) cprintf(".");
}
