//----------------------------------------------------------------------------
// Copyright (C) 2018 , Gabriel Capella
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the authors nor the names of its contributors
//       may be used to endorse or promote products derived from this software
//       without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
// THE POSSIBILITY OF SUCH DAMAGE
//
//----------------------------------------------------------------------------

module  sha2_periph (

// OUTPUTs
    per_dout,                       // Peripheral data output

// INPUTs
    mclk,                           // Main system clock
    per_addr,                       // Peripheral address
    per_din,                        // Peripheral data input
    per_en,                         // Peripheral enable (high active)
    per_we,                         // Peripheral write enable (high active)
    puc_rst                         // Main system reset
);

// OUTPUTs
//=========
output       [15:0] per_dout;       // Peripheral data output

// INPUTs
//=========
input               mclk;           // Main system clock
input        [13:0] per_addr;       // Peripheral address
input        [15:0] per_din;        // Peripheral data input
input               per_en;         // Peripheral enable (high active)
input         [1:0] per_we;         // Peripheral write enable (high active)
input               puc_rst;        // Main system reset


//=============================================================================
// 1)  PARAMETER DECLARATION
//=============================================================================

// Register base address (must be aligned to decoder bit width)
parameter       [14:0] BASE_ADDR   = 15'h0010;

// Decoder bit width (defines how many bits are considered for address decoding)
parameter              DEC_WD      =  7;

// Register addresses offset
parameter [DEC_WD-1:0] CNTRL      = 'h0,
                       INPUT      = 'h2,
                       OUTPUT     = 'h42;


//============================================================================
// 2)  REGISTER DECODER
//============================================================================

// Local register selection
wire              reg_sel   =  per_en & (per_addr[13:DEC_WD-1]==BASE_ADDR[14:DEC_WD]);

// Register local address
wire [DEC_WD-1:0] reg_addr  =  {per_addr[DEC_WD-2:0], 1'b0} - BASE_ADDR;

// Read/Write probes
wire              reg_write =  |per_we & reg_sel;
wire              reg_read  = ~|per_we & reg_sel;


//============================================================================
// 3) REGISTERS
//============================================================================

// CNTRL Register
//-----------------   
reg  [7:0] cntrl_1 = 8'h00;
wire  [7:0] cntrl_2;

assign cntrl_2 [7:2] = 6'h0;

wire         cntrl_wr = (reg_addr == CNTRL) & reg_write;
wire  [15:0] cntrl = {cntrl_2, cntrl_1};

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)       cntrl_1 <=  8'h00;
  else if (cntrl_wr) begin
    // $display("> %b", per_din);
    cntrl_1 <=  per_din[7:0];
  end

// INPUT Register
//-----------------   
reg   [511:0] block = 512'b0;
wire  [255:0] digest;
 
wire in_block = (reg_addr >= INPUT) & (reg_addr < INPUT+'d64) & reg_write;

always @ (posedge mclk)
  if (~puc_rst & in_block) begin
    // $display("> %h %h", per_addr*2, reg_addr);
    block[(reg_addr - INPUT)*8 +: 16] <= per_din;
  end

//============================================================================
// 3.5) SHA 256
//============================================================================

sha256_core sha256_module (
    .clk            (mclk),
    .reset_n        (cntrl_1[0] | puc_rst),

    .init           (cntrl_1[1]),
    .next           (cntrl_1[2]),
    .mode           (cntrl_1[3]),

    .block          (block),

    .ready          (cntrl_2[0]),
    .digest         (digest),
    .digest_valid   (cntrl_2[1])
);

//============================================================================
// 4) DATA OUTPUT GENERATION
//============================================================================

// Data output mux
wire [15:0] cntrl_rd  = cntrl  & {16{(reg_addr == CNTRL) & reg_read}};

wire in_digest = (reg_addr >= OUTPUT) & (reg_addr < OUTPUT+'d32) & reg_read;

wire [15:0]  in_digest_rd  = digest[(reg_addr - OUTPUT)*8 +: 16] & {16{in_digest}};

wire [15:0] per_dout   =  cntrl_rd  |
                          in_digest_rd;
endmodule
