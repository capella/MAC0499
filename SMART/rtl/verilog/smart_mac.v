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
    //=========
    output                  in_safe_area,       // On on safe area
    output                  reset,              // High to reset device
    output           [15:0] mem_dout,           // Memory data output

    // INPUTs
    //=========
    input [SIZE_MEM_ADDR:0] mem_addr,           // Memory adress
    input                   mclk,               // Memory clock
    input            [15:0] mem_din,            // Memory data input
    input            [15:0] ins_addr,           // Instruction pointer adress
    input                   disable_debug       // Disable protection on HIGH
);

// PARAMETERs
//=========
parameter SIZE_MEM_ADDR = 15;          // size of mem_addr

parameter LOW_SAFE = 200;              // Low address safe code
parameter HIGH_SAFE = 200;             // High address safe code

parameter [15:0]LOW_CODE = 200;              // Low adress code
parameter [15:0]HIGH_CODE = 200;             // High address code

//=============================================================================
// LOGIC
//=============================================================================
reg   inside_code;
reg   to_be_reset;

wire addr_in_safe = (mem_addr <= HIGH_SAFE) & (mem_addr >= LOW_SAFE);
wire pc_in_code = (ins_addr <= HIGH_CODE) & (ins_addr >= LOW_CODE);

assign safe_reset = addr_in_safe & ~inside_code;

assign reset = to_be_reset & ~disable_debug;

assign mem_dout = reset ? 16'b0 : mem_din;
assign in_safe_area = inside_code;

always @ (posedge mclk) begin
    if (ins_addr == LOW_CODE)
        inside_code <= 1'b1;
    else if (~pc_in_code)
        inside_code <= 1'b0;
    to_be_reset <= safe_reset;
end

endmodule // smart_mac
