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

module  sha3_periph (

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
parameter       [14:0] BASE_ADDR   = 15'h0100;

// Decoder bit width (defines how many bits are considered for address decoding)
parameter              DEC_WD      =  7;

// Register addresses offset
parameter [DEC_WD-1:0] CNTRL1      = 'h0,
                       CNTRL2      = 'h2,
                       CNTRL3      = 'h4,
                      CNTRL4       = 'h6;


//============================================================================
// 2)  REGISTER DECODER
//============================================================================

// Local register selection
wire              reg_sel   =  per_en & (per_addr[13:DEC_WD-1]==BASE_ADDR[14:DEC_WD]);

// Register local address
wire [DEC_WD-1:0] reg_addr  =  {per_addr[DEC_WD-2:0], 1'b0};

// Read/Write probes
wire              reg_write =  |per_we & reg_sel;
wire              reg_read  = ~|per_we & reg_sel;


//============================================================================
// 3) REGISTERS
//============================================================================

// CNTRL1 Register
//-----------------   
reg  [7:0] cntrl1_1;
wire  [7:0] cntrl1_2;

assign cntrl1_2 [7:2] = 6'h0;

wire         cntrl1_wr = (reg_addr == CNTRL1) & reg_write;
wire  [15:0] cntrl1 = {cntrl1_2, cntrl1_1};

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl1_1 <=  8'h00;
  else if (cntrl1_wr) cntrl1_1 <=  per_din[7:0];

   
// CNTRL2 Register
//-----------------   
reg  [15:0] cntrl2;

wire        cntrl2_wr = (reg_addr == CNTRL2) & reg_write;

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl2 <=  16'h0000;
  else if (cntrl2_wr) cntrl2 <=  per_din;

   
// CNTRL3 Register
//-----------------   
reg  [15:0] cntrl3;

wire        cntrl3_wr = (reg_addr == CNTRL3) & reg_write;

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl3 <=  16'h0000;
  else if (cntrl3_wr) cntrl3 <=  per_din;

// CNTRL4 Register
//-----------------   
wire  [511:0] cntrl4;

reg ready = 1'h0;
reg count = 1'h0;

always @(mclk) begin
  if (cntrl1_1[3] & ~count) begin
    ready <= 1'h1;
    count <= 1'h1;
    // $display("%h", {cntrl2[7:0], cntrl2[15:8], cntrl3[7:0], cntrl3[15:8]});
  end

  if (cntrl1_1[3] & count) begin
    ready <= 1'h0;
    count <= 1'h1;
  end

  if (~cntrl1_1[3]) begin
    ready <= 1'h0;
    count <= 1'h0;
  end

end

// always @(posedge reg_sel) begin
//   $display("%h %h %h", reg_addr*2, per_addr*2, BASE_ADDR);
// end

// always @(posedge ((reg_addr >= CNTRL4) & reg_read) & mclk) begin
//   $display("%h %h %h", reg_addr, CNTRL4, reg_addr-CNTRL4);
// end

//e5cfabc15930fef7b0c57f6da8f128bc5e86c185a6a5039cad86fba23a05afabca2b3ae48e15ea0c702ea6bb320d6d476393c046687a26a60d8c030991da9ee2

// always @(cntrl4) begin
//   $display("%h", cntrl4);
// end

//============================================================================
// 3.5) SHA 256
//============================================================================

keccak uut (
    .clk(mclk),
    .reset(cntrl1_1[0] | puc_rst),
    .in({cntrl2[7:0], cntrl2[15:8], cntrl3[7:0], cntrl3[15:8]}),
    .in_ready(ready),
    .is_last(cntrl1_1[4]),
    .byte_num(cntrl1_1[2:1]),
    .buffer_full(cntrl1_2[0]),
    .out(cntrl4),
    .out_ready(cntrl1_2[1])
);

//============================================================================
// 4) DATA OUTPUT GENERATION
//============================================================================

// Data output mux
wire [15:0] cntrl1_rd  = cntrl1  & {16{(reg_addr == CNTRL1) & reg_read}};
wire [15:0] cntrl2_rd  = cntrl2  & {16{(reg_addr == CNTRL2) & reg_read}};
wire [15:0] cntrl3_rd  = cntrl3  & {16{(reg_addr == CNTRL3) & reg_read}};

wire [15:0]  cntrl4_rd  = cntrl4[(reg_addr - CNTRL4)*8 +: 16] & {16{(reg_addr >= CNTRL4) & reg_read}};

wire [15:0] per_dout   =  cntrl1_rd  |
                          cntrl2_rd  |
                          cntrl3_rd  |
                          cntrl4_rd;
endmodule
