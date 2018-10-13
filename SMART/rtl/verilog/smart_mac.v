//----------------------------------------------------------------------------
//
// *File Name: smart_mac.v
//
// *Module Description:
//                       Control memory access.
//
// *Author(s):
//              - Gabriel Capella    gabriel@capella.pro
//
//----------------------------------------------------------------------------
module  smart_mac (

    // OUTPUTs
    in_safe_area,                   // On on safe area
    reset,                          // High to reset device
    mem_dout,                       // Memory data output

    // INPUTs
    mem_addr,                       // Memory adress
    mem_din,                        // Memory data input

    mclk,                           // Memory clock

    ins_addr,                       // Instruction pointer adress
    disable_debug                   // Disable protection on HIGH
);

// PARAMETERs
//=========
parameter SIZE_MEM_ADDR = 15;          // size of mem_addr

parameter LOW_SAFE = 200;              // Low address safe code
parameter HIGH_SAFE = 200;             // High address safe code

parameter LOW_CODE = 200;              // Low adress code
parameter HIGH_CODE = 200;             // High address code

// OUTPUTs
//=========
output                  in_safe_area;
output                  reset;
output           [15:0] mem_dout;

// INPUTs
//=========
input [SIZE_MEM_ADDR:0] mem_addr;
input                   mclk;
input            [15:0] mem_din;
input            [15:0] ins_addr;
input                   disable_debug;
input                   mem_cen;

//=============================================================================
// LOGIC
//=============================================================================
reg   inside_code = 0;
reg   to_be_reset = 0;

wire addr_in_safe = (mem_addr <= HIGH_SAFE) & (mem_addr >= LOW_SAFE);
wire pc_in_code = (ins_addr <= HIGH_CODE) & ( (ins_addr+1) > LOW_CODE);

assign safe_reset = addr_in_safe & ~inside_code;

assign reset = to_be_reset & ~disable_debug;

assign mem_dout = reset ? 16'b0 : mem_din;
assign in_safe_area = to_be_reset;

always @ (posedge mclk) begin
    if (ins_addr == LOW_CODE) begin
        inside_code <= 1'b1;
    end
    else begin
        if (~pc_in_code) inside_code <= 1'b0;
    end
    to_be_reset <= safe_reset;
end

endmodule // smart_mac
