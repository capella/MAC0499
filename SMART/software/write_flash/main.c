//----------------------------------------------------------------------------
// MIT License
// 
// Copyright (c) 2018 Gabriel Capella
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//----------------------------------------------------------------------------
//
// This source code is part of my final undergraduate thesis.
// For any suggestion, doubt or comment send an email to
// gabriel@capella.pro
//
//----------------------------------------------------------------------------

//******************************
// THIS IS A TEST - NOT WORKING
//******************************

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
    // *key_possition = '#';
}

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    *flash_possition = '#';
    // cprintf("%c\n", *flash_possition);
    // smart_read_key ();

    while(1) {}
    // cprintf("A%c\n", *key_possition);

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
