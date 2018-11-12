#include "../libs/omsp_system.h"
#include "../libs/hardware.h"

//--------------------------------------------------//
//                   Delay function                 //
//--------------------------------------------------//
void delay(unsigned int d) {
   while(d--) {
      __nop();
      __nop();
   }
}

int main(void) {
    char i;

    P3DIR  = 0xFF;                      // Port direction register
     
    for (i=0; i<8; i++) {
        P3OUT = (1<<i) ;
        delay(10);
    }

    while (1) {
    }
    delay(1000);
}
