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
    unsigned char *str = input->str;
    unsigned int length = input->length;

    unsigned long size = (length + 64 * 4 * 2) * 8;
    unsigned int i = 0;
    char init = 1;

    unsigned long in;

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
    while (i <= length/4) {
        in = 0;
        for (unsigned int j = 0; j < 4; j++) {
            if (i*4+j < length) {
                ((unsigned char *) &in)[3-j] = str[i*4+j];
            } else if (i*4+j == length) {
                ((unsigned char *) &in)[3-j] = 0x80;
                break;
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

    if (input->call != NULL)
        (input->call)();
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

