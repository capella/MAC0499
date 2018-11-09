#!/bin/bash

# This is a simple test script for smart_mac.v 
# It will only run in a macOS with Scansion installed.

cp -f ../SMART/rtl/verilog/smart_mac.v .
iverilog -o test.vvp test.v
vvp test.vvp -vcd test.vcd 
open -a Scansion test.vcd 
rm -f smart_mac.v test.vvp
