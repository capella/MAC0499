#include "../libs/omsp_system.h"
#include "../libs/hardware.h"
#include "../libs/cprintf/cprintf.h"
#include "../libs/smart/smart.h"
#include <stdlib.h>
#include <stdio.h>

//--------------------------------------------------//
// Main function with init an an endless loop that  //
// is synced with the interrupts trough the         //
// lowpower mode.                                   //
//--------------------------------------------------//
int main(void) {

    unsigned char string[] = "The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog.";
    unsigned long nounce[64];
    struct smart_input input;

    input.str = string;
    input.length = 89;
    input.call = NULL;
    input.n = nounce;

    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    // sha256(string, 89);
    for (int i = 0; i < 64; ++i) {
        nounce[i] = 0x23001120;
    }

    smart_hash (&input);

    for (int i = 0; i < 16; ++i) {
        unsigned int c = ((unsigned int *)&SHA_OUTPUT)[15-i];
        cprintf("%w", c);
    }
    cprintf("\n");

    while(1) {
    }
}
