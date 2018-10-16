#include "../libs/omsp_system.h"
#include "../libs/hardware.h"
#include "../libs/cprintf/cprintf.h"
#include <stdlib.h>
#include <stdio.h>

char * flash_possition = (void *) 0xFADE;
char * key_possition = (void *) 0xFEE0;

void delay(unsigned int d) {
   while(d--) {
      __nop();
      __nop();
   }
}

#define SMART  __attribute__((__section__(".keyfunction"), noinline))
void SMART smart_read_key () {
    cprintf("C%d\n", *key_possition);
    delay(500);

    *key_possition = 42;

    cprintf("D%d\n", *key_possition);
    delay(500);
}

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;
    // cprintf("1");
    if (*flash_possition != 42) {
        // write in program memory
        *flash_possition = 42;
        cprintf("A%d\n", *flash_possition);
        delay(1000);
        // write smart key, cause reset
        *key_possition = 42;
        cprintf("B%d\n", *key_possition);
        delay(500);
    } else {
        // call smart to read first byte in key
        smart_read_key();
    }

}
