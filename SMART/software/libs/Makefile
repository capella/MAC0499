
# Compiler performance option (-Os / -O2 / -O3)
PORT_CFLAGS     = -O0

# Choose GCC toolchain prefix ('msp430' for MSPGCC / 'msp430-elf' for GCC RedHat/TI)
ifndef MSPGCC_PFX
MSPGCC_PFX      = msp430-elf
endif

# disable some warnings specific to the Dhrystone code
WARNINGS        =  -Wall

# Select flags depending on selected toolchain
ifeq ($(MSPGCC_PFX),msp430-elf)
INCDIR      =-I $(GCC_PATH)/include
CFLAGS		= -D PFX_MSP430_ELF $(INCDIR) $(PORT_CFLAGS) ${WARNINGS} -g -mcpu=msp430 -mhwmult=16bit
else
CFLAGS		= -D PFX_MSP430               $(PORT_CFLAGS) ${WARNINGS} -g -mcpu=430    -mmpy=16	-mivcnt=16
endif

# Toolchain executables
CC              = ${MSPGCC_PFX}-gcc
all: cprintf.o smart.o

#project dependencies
cprintf.o: cprintf/cprintf.c
	${CC} ${CFLAGS} -c -o $@ $^

smart.o: smart/smart.c
	${CC} ${CFLAGS} -c -o $@ $^

clean:
	rm -f *.o
