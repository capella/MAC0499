`timescale 1ns / 100ps

`include "smart_mac.v"

module  tb_smart_mac(

    // OUTPUTs
    in_safe_area,                   // On on safe area
    reset,                          // High to reset device
    mem_dout,                       // Memory data output
);


// OUTPUTs
//=========
output                  in_safe_area;
output                  reset;
output           [15:0] mem_dout;

// Clock & Reset
reg                      CLK_100MHz;
reg                [4:0] mem_addr;
reg               [15:0] mem_din;
reg               [15:0] ins_addr;
reg                      disable_debug = 1'b0;


// PROTECT KEY
smart_mac #(
    .SIZE_MEM_ADDR(4),

    .LOW_SAFE(8),
    .HIGH_SAFE(16),

    .LOW_CODE(24),
    .HIGH_CODE(32)
)  smart1 (
    .reset(reset),
    .mem_dout(mem_dout),
    .mem_addr(mem_addr),
    .mclk(CLK_100MHz),
    .mem_din(mem_din),
    .ins_addr(ins_addr),
    .disable_debug(disable_debug),
    .in_safe_area(in_safe_area)
);

//
// Generate Clock & Reset
//------------------------------
initial
  begin
     CLK_100MHz = 1'b0;
     forever #25 CLK_100MHz <= ~CLK_100MHz; // 20 MHz
  end

initial // Timeout
    begin
        mem_addr = 4'd0;
        mem_din = 16'hffff;
        ins_addr = 16'd0;

        $dumpfile("test.vcd");
        $dumpvars(0, tb_smart_mac);
        #200;
        $finish;
    end

initial // Timeout
    begin
        #27;
        mem_addr = 16'd8;
        #22;
        mem_addr = 16'd0;
        #44;
        mem_addr = 16'd8;
        #30;
        mem_addr = 16'd0;
    end


endmodule
