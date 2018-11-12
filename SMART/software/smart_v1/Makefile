#----------------------------------------------------------------------------
# MIT License
# 
# Copyright (c) 2018 Gabriel Capella
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
#
#----------------------------------------------------------------------------
#
# This source code is part of my final undergraduate thesis.
# For any suggestion, doubt or comment send an email to
# gabriel@capella.pro
#
#----------------------------------------------------------------------------

# makfile configuration
NAME            = smart_v1
OBJECTS         = main.o ../libs/cprintf.o ../libs/smart.o

# Compiler performance option (-Os / -O2 / -O3)
PORT_CFLAGS     = -O0

# Choose GCC toolchain prefix ('msp430' for MSPGCC / 'msp430-elf' for GCC RedHat/TI)
ifndef MSPGCC_PFX
MSPGCC_PFX      = msp430-elf
endif

# disable some warnings specific to the Dhrystone code
WARNINGS        =  -Wall -pedantic

# Select flags depending on selected toolchain
ifeq ($(MSPGCC_PFX),msp430-elf)
INCDIR      =-I $(GCC_PATH)/include
CFLAGS		= -D PFX_MSP430_ELF $(INCDIR) $(PORT_CFLAGS) ${WARNINGS} -g -mcpu=msp430 -mhwmult=16bit
else
CFLAGS		= -D PFX_MSP430               $(PORT_CFLAGS) ${WARNINGS} -g -mcpu=430    -mmpy=16	-mivcnt=16
endif

# Toolchain executables
CC              = ${MSPGCC_PFX}-gcc
OBJCOPY		= ${MSPGCC_PFX}-objcopy
OBJDUMP         = ${MSPGCC_PFX}-objdump
OBJSIZE         = ${MSPGCC_PFX}-size


.PHONY: all FORCE clean download dist send

#all should be the first target. it's built when make is runwithout args
all: ${NAME}.elf ${NAME}.a43 ${NAME}.lst ${NAME}.size

#confgigure the next line if you want to use the serial download
download: download-uart

#additional rules for files
${NAME}.elf: ${OBJECTS}
	${CC} ${CFLAGS} -T ../libs/linker.${MSPGCC_PFX}.x -o $@ ${OBJECTS}

${NAME}.a43: ${NAME}.elf
	${OBJCOPY} -O ihex $^ $@

${NAME}.lst: ${NAME}.elf
	${OBJDUMP} -DS $^ >$@

${NAME}.size: ${NAME}.elf
	${OBJSIZE}  $^ >$@

clean:
	rm -f ${NAME}.elf ${NAME}.a43 ${NAME}.lst ${NAME}.size *.o
	rm -f ../libs/*.o

#backup archive
dist:
	tar czf dist.tgz *.c *.h *.txt makefile

send:
	../../../bibliotecas/descompactadas/openmsp430/trunk/tools/bin/openmsp430-loader.tcl -device /dev/ttyACM0 -adaptor uart_generic -speed 19200  smart.elf

#dummy target as dependecy if something has to be build everytime
FORCE:

#project dependencies
main.o: main.c ../libs/hardware.h

../libs/cprintf.o:
	$(MAKE) -C  ../libs

../libs/smart.o:
	$(MAKE) -C  ../libs
