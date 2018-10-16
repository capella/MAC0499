#ifndef SMART_H
#define SMART_H

#include "../hardware.h"
#include "../omsp_system.h"
#include <stdio.h>

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
