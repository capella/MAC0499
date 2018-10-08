function load_c_defines () {
    incfile=../../../rtl/verilog/openmsp430/openMSP430_defines.v;

    # Make local copy of the openMSP403 configuration file
    # and prepare it for MSPGCC preprocessing
    cp  $incfile  ./pmem.h
    sed -ie 's/`ifdef/#ifdef/g'         ./pmem.h
    sed -ie 's/`else/#else/g'           ./pmem.h
    sed -ie 's/`endif/#endif/g'         ./pmem.h
    sed -ie 's/`define/#define/g'       ./pmem.h
    sed -ie 's/`include/\/\/#include/g' ./pmem.h
    sed -ie 's/`//g'                    ./pmem.h
    sed -ie "s/'//g"                    ./pmem.h

    # Use MSPGCC preprocessor to extract the Program, Data
    # and Peripheral memory sizes
    (
        export LD_LIBRARY_PATH=/opt/glibc-2.14/lib
        msp430-elf-gcc -E -P -x c ../bin/omsp_config.sh > pmem.sh
    )
    source pmem.sh
}