//----------------------------------------------------------------------------
// MIT License
// 
// Copyright (c) 2018 Gabriel Capella
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//----------------------------------------------------------------------------
//
// This source code is part of my final undergraduate thesis.
// For any suggestion, doubt or comment send an email to
// gabriel@capella.pro
//
//----------------------------------------------------------------------------
//
// *File Name: smart_mac.v
//
// *Module Description: SMART Memory Access Control
//
//----------------------------------------------------------------------------
module  smart_mac (
    // OUTPUTs
    output                  in_safe_area,       // On on safe area
    output                  reset,              // High to reset device
    output           [15:0] mem_dout,           // Memory data output

    // INPUTs
    input [SIZE_MEM_ADDR:0] mem_addr,           // Memory adress
    input                   mclk,               // Memory clock
    input            [15:0] mem_din,            // Memory data input
    input            [15:0] ins_addr,           // Instruction pointer adress
    input                   disable_debug       // Disable protection on HIGH
);

// PARAMETERs
//============================================================================
parameter SIZE_MEM_ADDR = 15;                   // size of mem_addr

parameter LOW_SAFE      = 200;                  // Low address safe code
parameter HIGH_SAFE     = 200;                  // High address safe code

parameter LOW_CODE      = 200;                  // Low adress code
parameter HIGH_CODE     = 200;                  // High address code

// LOGIC
//============================================================================
reg   inside_code = 1'b0;
reg   to_be_reset = 1'b0;

wire addr_in_safe = (mem_addr <= HIGH_SAFE) & (mem_addr >= LOW_SAFE);
wire pc_in_code = (ins_addr <= HIGH_CODE) & (ins_addr >= LOW_CODE);

assign safe_reset = addr_in_safe & ~inside_code;

assign reset = to_be_reset & ~disable_debug;

assign mem_dout = reset ? 16'b0 : mem_din;
assign in_safe_area = inside_code;

always @ (posedge mclk) begin
    if (ins_addr == LOW_CODE)   inside_code <= 1'b1;
    else if (~pc_in_code)       inside_code <= 1'b0;
    to_be_reset <= safe_reset;
end

endmodule
