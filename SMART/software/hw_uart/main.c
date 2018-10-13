#include "../libs/omsp_system.h"
#include "../libs/hardware.h"
#include "../libs/cprintf/cprintf.h"
#include <stdlib.h>
#include <stdio.h>

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
    int reading = 0;
    int pos = 0;
    char buf[40];
    int led = 0;
//    int *key;
//    key = (void *)0xfee0; 

    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer


    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    cprintf("> ");

    enable_interrupts();                  // Enable interrupts

    while (1) {                         //main loop, never ends...
        // cprintf("U");
        // delay(5000);
    }
}
