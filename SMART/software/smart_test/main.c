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
