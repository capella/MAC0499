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
#include "smart.h"

KEY = {
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68
};

void SMART smart_hash (SmartInput input) {
    disable_interrupts();

    unsigned char *str = input->str;
    unsigned int length = input->length;
    unsigned int length_by_4 = input->length;
    length_by_4 /= 2;
    length_by_4 /= 2;

    unsigned long size = (length + 64 * 4 * 2 + 4) * 8;
    unsigned int i = 0;
    char init = 1;

    unsigned long in;

    unsigned long addr_pos = (unsigned int) str;
    unsigned char p_apeend_addr = 0;

    // copy and hash key
    for (i = 0; i < 64; i++) {
        (&SHA_INPUT)[i%16] = smart_key[i];
        if ((i+1)%16 == 0)
            init = sha256_flush(init);
    }

    // copy and hash nounce
    for (i = 0; i < 64; i++) {
        (&SHA_INPUT)[i%16] = (input->n)[i];
        if ((i+1)%16 == 0)
            init = sha256_flush(init);
    }

    // copy and hash data
    i = 0;
    while (i <= length_by_4+4) {
        in = 0;
        for (unsigned int j = 0; j < 4; j++) {
            if (i*4+j < length) {
                ((unsigned char *) &in)[3-j] = str[i*4+j];
            } else if (i*4+j == length+4) {
                ((unsigned char *) &in)[3-j] = 0x80;
                break;
            } else if (i*4+j >= length && i*4+j < length+4) {
                // append adress
                unsigned char * k = (unsigned char *) &addr_pos;
                ((unsigned char *) &in)[3-j] = k[3-p_apeend_addr];
                p_apeend_addr++;
            }
        }

        (&SHA_INPUT)[15 - i%16] = in;
        i++;

        if (i%16 == 0) init = sha256_flush(init);
    }

    // set zeros
    for (unsigned int j = i%16; j < 15; j++) {
        (&SHA_INPUT)[15 - i%16] = 0;
        i++;
    }
    (&SHA_INPUT)[15 - i%16] = size;

    sha256_flush(init);

    if (input->call != NULL && input->call < &smart_hash)
        (input->call)();

    enable_interrupts();
}

char SMART sha256_flush (char init) {
    if (init) {
        init = 0;
        SHA_CONFIG = SHA_MODE | SHA_INIT | SHA_ON;
    } else {
        SHA_CONFIG = SHA_MODE | SHA_NEXT | SHA_ON;
    }

    SHA_CONFIG = SHA_MODE | SHA_ON;
    while (!(SHA_STATUS & (SHA_READY)));
    
    return init;
}

