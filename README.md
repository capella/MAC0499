[![Build Status](http://casa.melvans.com:8090/job/MAC0499/badge/icon)](http://casa.melvans.com:8090/job/MAC0499/)

# MAC0499 - Reimplementing SMART

This repository contains all files used during the development of the undergraduate thesis  "Reimplementing SMART". The thesis can be read in the only pdf in the root of this repository.

### Running Tests

The first steps are installing the [ISE WebPACK Design Software](https://www.xilinx.com/products/design-tools/ise-design-suite/ise-webpack.html)
and the [GCC - Open Source Compiler for MSP Microcontrollers](http://www.ti.com/tool/msp430-gcc-opensource).
After that, create an environment variable point to MSP430 compiler and export them to the PATH the binaries of what you have installed.

```
export GCC_PATH="/home/capella/ti/msp430-gcc"
export PATH="$PATH:/home/capella/ti/msp430-gcc/bin"
export PATH="/opt/Xilinx/14.7/ISE_DS/ISE/bin/lin64/:$PATH"
```

Before running the tests, is essential to building the cores used by the project. An automation script was made for this:

```
cd SMART/sim/rtl_sim/run/ 
bash ./cores_build
```

And to run the test (inside SMART/sim/rtl_sim/run/): 

```
bash ./test
```

### Building and Uploading to the development board

To create the bitgen file:

```
cd SMART/synthesis/xilinx/
./0_create_bitstream.sh
```

To create the program memory:

```
./1_initialize_pmem.sh [software_name]
```

To initialize the program memory:

```
./2_generate_prom_file.sh [software_name]
```

To upload:

```
./3_usb_upload.py /dev/[device_port] bitstreams/final.bin
```

You can use the openmsp430-loader (available in the openmsp430- source) if you want to upload a temporary source to the microcontroller. In this step is essential to disable the SMART MAC modules.

