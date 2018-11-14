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
#include "../libs/smart/smart.h"
#include <stdlib.h>
#include <stdio.h>
#include "../libs/cprintf/cprintf.h"


#define BUFFER_SIZE         517

#define TAKE_HASH           0x10
#define SET_LED_ON          0x20
#define SET_LED_OFF         0x21
#define SET_RESET           0x30
#define GET_RESET_HASH      0x31

//----------------------------------------------------------------------------

unsigned int position = 0;
char buffer[BUFFER_SIZE];
char led_status;
const char hex[] = "0123456789abcdef";

int tty2_putc (int txdata);

//----------------------------------------------------------------------------
void send_hash () {
    unsigned int i, j, c;
    for (i = 0; i < 16; ++i) {
        c = ((unsigned int *)&SHA_OUTPUT)[15-i];
        for (j = 7; j >= 0; j--)
            tty2_putc(hex[ (c >> (j*4) ) & 0x0f]);
    }
}

void compute_and_send_hash (struct smart_input *input) {

    unsigned int i;
    unsigned char *n;
    n = (unsigned char *) input->n;
    char tmp;

    // fix nounce
    for (i = 0; i < 16; ++i) {
        tmp = n[i*4];
        n[i*4] = n[i*4+3];
        n[i*4+3] = tmp;

        tmp = n[i*4+1];
        n[i*4+1] = n[i*4+2];
        n[i*4+2] = tmp;
    }

    smart_hash (input);

    send_hash ();
}

//----------------------------------------------------------------------------
volatile char rxdata;

SET_UART_RX_INTERRUPT INT_uart_rx(void) {
    rxdata = UART_RXD;
    UART_STAT = UART_RX_PND;

    cprintf("%c", rxdata);
}

int tty2_putc (int txdata) {
    while (UART2_STAT & UART_TX_FULL);
    UART2_TXD = txdata;
    return 0;
}

volatile char rxdata2;

SET_UART2_RX_INTERRUPT INT_uart2_rx(void) {
    rxdata2 = UART2_RXD;
    UART2_STAT = UART_RX_PND;

    cprintf("%b", rxdata2);

    if (position >= BUFFER_SIZE)
        position = 0;

    buffer[position] = rxdata2;

    switch(buffer[0]) {
        case TAKE_HASH:
            break;
        case SET_LED_ON:
            break;
        case SET_LED_OFF:
            break;
        case SET_RESET:
            break;
        case GET_RESET_HASH:
            break;
        default:
            position = 0;
            return;
    }

    position++;
    if (position != BUFFER_SIZE) return;

    struct smart_input input;

    unsigned int addr = *((unsigned int *) &(buffer[1]));
    unsigned int size = *((unsigned int *) &(buffer[3]));

    input.str = (unsigned char *) addr;
    input.length = size;
    input.call = NULL;
    input.n = (unsigned long *) &(buffer[5]);

    switch(buffer[0]) {
        case TAKE_HASH:
            compute_and_send_hash(&input);
            break;
        case SET_LED_ON:
            led_status = 1;
            break;
        case SET_LED_OFF:
            led_status = 0;
            break;
        case SET_RESET:
            P3OUT = 0;
            // TODO
            break;
        case GET_RESET_HASH:
            send_hash ();
            break;
    }
    tty2_putc('\n');
}

//--------------------------------------------------//
// Main function with init an an endless loop that  //
// is synced with the interrupts trough the         //
// lowpower mode.                                   //
//--------------------------------------------------//
int main(void) {

    WDTCTL = WDTPW | WDTHOLD;           // Init watchdog timer

    UART_BAUD = BAUD;                   // Init UART
    UART_CTL  = UART_EN | UART_IEN_RX;

    UART2_BAUD = 4166;                   // Init UART 4800
    UART2_CTL  = UART_EN | UART_IEN_RX;

    enable_interrupts();

    led_status = 0;
    P3DIR  = 0xFF;

    while(1) {
        P3OUT = led_status+128;
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
        __nop();
    }
}
