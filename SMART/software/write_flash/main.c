#include "../libs/omsp_system.h"
#include "../libs/hardware.h"
#include "../libs/cprintf/cprintf.h"
#include <stdlib.h>
#include <stdio.h>

char * flash_possition = (void *) 0xFADE;
char * key_possition = (void *) 0xFEE0;
char * normal_possition = (void *) 0x05F0;

void delay(unsigned int d) {
   while(d--) {
      __nop();
      __nop();
   }
}

#define SMART  __attribute__((__section__(".keyfunction"), noinline))
void SMART smart_read_key () {
    *key_possition = '#';
    cprintf("A%c\n", *key_possition);
    delay(100);
    cprintf("A%c\n", *key_possition);
    delay(100);
}

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    *key_possition = '#';
    cprintf("A%c\n", *key_possition);

    // *flash_possition = '#';
    // cprintf("C%c\n", *flash_possition);
    // delay(100);

    // if (*flash_possition == '#') {
    //     // write in program memory
    //     *normal_possition = '#';
    //     cprintf("C%c\n", *normal_possition);
    //     delay(100);
    // } else {
    //     // call smart to read first byte in key
    //     smart_read_key();

    //     // write in program memory
    //     *flash_possition = '#';
    //     cprintf("B%c\n", *flash_possition);
    //     delay(100);

    //     // write smart key, cause reset
    //     *key_possition = '#';
    //     cprintf("D%d\n", *key_possition);
    //     delay(100);
    // }

}
