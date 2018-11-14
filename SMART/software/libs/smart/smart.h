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

#ifndef SMART_H
#define SMART_H

#include "../hardware.h"
#include "../omsp_system.h"

#define NULL 0
#define KEY_attr  __attribute__((__section__(".key")))
#define KEY unsigned long KEY_attr smart_key[64]

struct smart_input {
    unsigned char *str;         // initial memory position
    unsigned int length;        // size in bytes of memory to hash
    void (* call)();            // function call after smart
    unsigned long *n;           // nounce 256 bytes - 64 elements
};
typedef struct smart_input * SmartInput;

// smart_hash need to be first than other smart helper functions
#define SMART  __attribute__((__section__(".keyfunction"), noinline))
void SMART smart_hash (SmartInput input);
char SMART sha256_flush (char init);

#endif //SMART_H
