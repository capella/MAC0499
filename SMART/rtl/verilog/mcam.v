//----------------------------------------------------------------------------
//
// *File Name: mcam.v
//
// *Module Description:
//                       Control memory access.
//
// *Author(s):
//              - Gabriel Capella    gabriel@capella.pro
//
//----------------------------------------------------------------------------
module  mcam (

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

//=============================================================================
// LOGIC
//=============================================================================
reg   allow_safe = 0;
reg   r = 0;

wire addr_in_safe = (mem_addr <= HIGH_SAFE) & (mem_addr >= LOW_SAFE);
wire pc_in_code = (ins_addr <= HIGH_CODE) & (ins_addr >= LOW_CODE);

assign reset = r & ~disable_debug ;
assign mem_dout = reset ? 16'b0 : mem_din;
assign in_safe_area = allow_safe;

always @ (posedge mclk) begin
    if (ins_addr == LOW_CODE) allow_safe <= 1'b1;
    else begin
        if (~pc_in_code) allow_safe <= 1'b0;
    end

    if (addr_in_safe & ~allow_safe) r <= 1'b1;
    else r <= 1'b0;
end

endmodule // mcam

