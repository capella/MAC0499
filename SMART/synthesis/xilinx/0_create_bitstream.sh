#!/bin/tcsh
######################################################
#                                                    #
# Xilinx Synthesis, Place & Route script for LINUX   #
#                                                    #
######################################################

# Cleanup
rm -rf ./WORK
mkdir WORK
cd ./WORK
# cat ../../../sim/rtl_sim/src/submit.prj | awk '{print "`include \"" $3 "\""}' > openMSP430_fpga.prj

# Create links for RAM & ROM ngc files
cp ../../../rtl/verilog/coregen/spartan6_dmem.ngc .
cp ../../../rtl/verilog/coregen/spartan6_pmem.ngc .

# Create link to the Xilinx constraints file
cp ../scripts/openMSP430_fpga.ucf                .

# Create link to the TimerA include file
cp ../../../rtl/verilog/openmsp430/periph/omsp_timerA_defines.v    .
cp ../../../rtl/verilog/openmsp430/periph/omsp_timerA_undefines.v  .


# XFLOW
#---------------
xflow -p xc6slx9-csg324-2 -implement high_effort.opt            \
                      -config    bitgen.opt                 \
                      -synth     ../scripts/xst_verilog.opt \
                      ../scripts/openMSP430_fpga.prj

# MANUAL FLOW
#---------------

#xst      -intstyle xflow    -ifn ../openMSP430_fpga.xst

#ngdbuild -p xc6slx9-csg324-2 -uc  ../openMSP430_fpga.ucf openMSP430_fpga

#map -k 6 -detail -pr b openMSP430_fpga

#par -ol med -w openMSP430_fpga.ncd openMSP430_fpga

#trce -e -o openMSP430_fpga_err.twr openMSP430_fpga
#trce -v -o openMSP430_fpga_ver.twr openMSP430_fpga

#bitgen -w -g UserID:5555000 -g DonePipe:yes -g UnusedPin:Pullup openMSP430_fpga

#############################################
# bitgen -intstyle ise -w -g Binary:yes -g StartUpClk:CCLK openMSP430_fpga.ncd 


cd ..

# cp -f ./WORK/openMSP430_fpga.bin ./openMSP430_fpga.bin
