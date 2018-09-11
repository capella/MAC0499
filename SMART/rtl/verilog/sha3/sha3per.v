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
parameter              DEC_WD      =  6;

// Register addresses offset
parameter [DEC_WD-1:0] CNTRL1      = 'h0,
                       CNTRL2      = 'h2,
                       CNTRL3      = 'h4,
                        CNTRL4_0       = 'h6,
                        CNTRL4_1       = 'h8,
                        CNTRL4_2       = 'h10,
                        CNTRL4_3       = 'h12,
                        CNTRL4_4       = 'h14,
                        CNTRL4_5       = 'h16,
                        CNTRL4_6       = 'h18,
                        CNTRL4_7       = 'h20,
                        CNTRL4_8       = 'h22,
                        CNTRL4_9       = 'h24,
                        CNTRL4_10       = 'h26,
                        CNTRL4_11       = 'h28,
                        CNTRL4_12       = 'h30,
                        CNTRL4_13       = 'h32,
                        CNTRL4_14       = 'h34,
                        CNTRL4_15       = 'h36,
                        CNTRL4_16       = 'h38,
                        CNTRL4_17       = 'h40,
                        CNTRL4_18       = 'h42,
                        CNTRL4_19       = 'h44,
                        CNTRL4_20       = 'h46,
                        CNTRL4_21       = 'h48,
                        CNTRL4_22       = 'h50,
                        CNTRL4_23       = 'h52,
                        CNTRL4_24       = 'h54,
                        CNTRL4_25       = 'h56,
                        CNTRL4_26       = 'h58,
                        CNTRL4_27       = 'h60,
                        CNTRL4_28       = 'h62,
                        CNTRL4_29       = 'h64,
                        CNTRL4_30       = 'h66,
                        CNTRL4_31       = 'h68;

// Register one-hot decoder utilities
parameter              DEC_SZ      =  (1 << DEC_WD);
parameter [DEC_SZ-1:0] BASE_REG    =  {{DEC_SZ-1{1'b0}}, 1'b1};

// Register one-hot decoder
parameter [DEC_SZ-1:0] CNTRL1_D    = (BASE_REG << CNTRL1), // configs/status
                       CNTRL2_D    = (BASE_REG << CNTRL2), // input1
                       CNTRL3_D    = (BASE_REG << CNTRL3), // input2
                      CNTRL4_0_D = (BASE_REG << CNTRL4_0),
                      CNTRL4_1_D = (BASE_REG << CNTRL4_1),
                      CNTRL4_2_D = (BASE_REG << CNTRL4_2),
                      CNTRL4_3_D = (BASE_REG << CNTRL4_3),
                      CNTRL4_4_D = (BASE_REG << CNTRL4_4),
                      CNTRL4_5_D = (BASE_REG << CNTRL4_5),
                      CNTRL4_6_D = (BASE_REG << CNTRL4_6),
                      CNTRL4_7_D = (BASE_REG << CNTRL4_7),
                      CNTRL4_8_D = (BASE_REG << CNTRL4_8),
                      CNTRL4_9_D = (BASE_REG << CNTRL4_9),
                      CNTRL4_10_D = (BASE_REG << CNTRL4_10),
                      CNTRL4_11_D = (BASE_REG << CNTRL4_11),
                      CNTRL4_12_D = (BASE_REG << CNTRL4_12),
                      CNTRL4_13_D = (BASE_REG << CNTRL4_13),
                      CNTRL4_14_D = (BASE_REG << CNTRL4_14),
                      CNTRL4_15_D = (BASE_REG << CNTRL4_15),
                      CNTRL4_16_D = (BASE_REG << CNTRL4_16),
                      CNTRL4_17_D = (BASE_REG << CNTRL4_17),
                      CNTRL4_18_D = (BASE_REG << CNTRL4_18),
                      CNTRL4_19_D = (BASE_REG << CNTRL4_19),
                      CNTRL4_20_D = (BASE_REG << CNTRL4_20),
                      CNTRL4_21_D = (BASE_REG << CNTRL4_21),
                      CNTRL4_22_D = (BASE_REG << CNTRL4_22),
                      CNTRL4_23_D = (BASE_REG << CNTRL4_23),
                      CNTRL4_24_D = (BASE_REG << CNTRL4_24),
                      CNTRL4_25_D = (BASE_REG << CNTRL4_25),
                      CNTRL4_26_D = (BASE_REG << CNTRL4_26),
                      CNTRL4_27_D = (BASE_REG << CNTRL4_27),
                      CNTRL4_28_D = (BASE_REG << CNTRL4_28),
                      CNTRL4_29_D = (BASE_REG << CNTRL4_29),
                      CNTRL4_30_D = (BASE_REG << CNTRL4_30),
                      CNTRL4_31_D = (BASE_REG << CNTRL4_31);


//============================================================================
// 2)  REGISTER DECODER
//============================================================================

// Local register selection
wire              reg_sel   =  per_en & (per_addr[13:DEC_WD-1]==BASE_ADDR[14:DEC_WD]);

// Register local address
wire [DEC_WD-1:0] reg_addr  =  {per_addr[DEC_WD-2:0], 1'b0};

// Register address decode
wire [DEC_SZ-1:0] reg_dec   =  (CNTRL1_D  &  {DEC_SZ{(reg_addr == CNTRL1 )}})  |
                               (CNTRL2_D  &  {DEC_SZ{(reg_addr == CNTRL2 )}})  |
                               (CNTRL3_D  &  {DEC_SZ{(reg_addr == CNTRL3 )}})  |
                              (CNTRL4_0_D  &  {DEC_SZ{(reg_addr == CNTRL4_0)}}) |
                              (CNTRL4_1_D  &  {DEC_SZ{(reg_addr == CNTRL4_1)}}) |
                              (CNTRL4_2_D  &  {DEC_SZ{(reg_addr == CNTRL4_2)}}) |
                              (CNTRL4_3_D  &  {DEC_SZ{(reg_addr == CNTRL4_3)}}) |
                              (CNTRL4_4_D  &  {DEC_SZ{(reg_addr == CNTRL4_4)}}) |
                              (CNTRL4_5_D  &  {DEC_SZ{(reg_addr == CNTRL4_5)}}) |
                              (CNTRL4_6_D  &  {DEC_SZ{(reg_addr == CNTRL4_6)}}) |
                              (CNTRL4_7_D  &  {DEC_SZ{(reg_addr == CNTRL4_7)}}) |
                              (CNTRL4_8_D  &  {DEC_SZ{(reg_addr == CNTRL4_8)}}) |
                              (CNTRL4_9_D  &  {DEC_SZ{(reg_addr == CNTRL4_9)}}) |
                              (CNTRL4_10_D  &  {DEC_SZ{(reg_addr == CNTRL4_10)}}) |
                              (CNTRL4_11_D  &  {DEC_SZ{(reg_addr == CNTRL4_11)}}) |
                              (CNTRL4_12_D  &  {DEC_SZ{(reg_addr == CNTRL4_12)}}) |
                              (CNTRL4_13_D  &  {DEC_SZ{(reg_addr == CNTRL4_13)}}) |
                              (CNTRL4_14_D  &  {DEC_SZ{(reg_addr == CNTRL4_14)}}) |
                              (CNTRL4_15_D  &  {DEC_SZ{(reg_addr == CNTRL4_15)}}) |
                              (CNTRL4_16_D  &  {DEC_SZ{(reg_addr == CNTRL4_16)}}) |
                              (CNTRL4_17_D  &  {DEC_SZ{(reg_addr == CNTRL4_17)}}) |
                              (CNTRL4_18_D  &  {DEC_SZ{(reg_addr == CNTRL4_18)}}) |
                              (CNTRL4_19_D  &  {DEC_SZ{(reg_addr == CNTRL4_19)}}) |
                              (CNTRL4_20_D  &  {DEC_SZ{(reg_addr == CNTRL4_20)}}) |
                              (CNTRL4_21_D  &  {DEC_SZ{(reg_addr == CNTRL4_21)}}) |
                              (CNTRL4_22_D  &  {DEC_SZ{(reg_addr == CNTRL4_22)}}) |
                              (CNTRL4_23_D  &  {DEC_SZ{(reg_addr == CNTRL4_23)}}) |
                              (CNTRL4_24_D  &  {DEC_SZ{(reg_addr == CNTRL4_24)}}) |
                              (CNTRL4_25_D  &  {DEC_SZ{(reg_addr == CNTRL4_25)}}) |
                              (CNTRL4_26_D  &  {DEC_SZ{(reg_addr == CNTRL4_26)}}) |
                              (CNTRL4_27_D  &  {DEC_SZ{(reg_addr == CNTRL4_27)}}) |
                              (CNTRL4_28_D  &  {DEC_SZ{(reg_addr == CNTRL4_28)}}) |
                              (CNTRL4_29_D  &  {DEC_SZ{(reg_addr == CNTRL4_29)}}) |
                              (CNTRL4_30_D  &  {DEC_SZ{(reg_addr == CNTRL4_30)}}) |
                              (CNTRL4_31_D  &  {DEC_SZ{(reg_addr == CNTRL4_31)}});
// Read/Write probes
wire              reg_write =  |per_we & reg_sel;
wire              reg_read  = ~|per_we & reg_sel;

// Read/Write vectors
wire [DEC_SZ-1:0] reg_wr    = reg_dec & {DEC_SZ{reg_write}};
wire [DEC_SZ-1:0] reg_rd    = reg_dec & {DEC_SZ{reg_read}};


//============================================================================
// 3) REGISTERS
//============================================================================

// CNTRL1 Register
//-----------------   
reg  [7:0] cntrl1_1;
wire  [7:0] cntrl1_2;

assign cntrl1_2 [7:2] = 6'h0;

wire         cntrl1_wr = reg_wr[CNTRL1];
wire  [15:0] cntrl1 = {cntrl1_2, cntrl1_1};

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl1_1 <=  8'h00;
  else if (cntrl1_wr) cntrl1_1 <=  per_din[7:0];

   
// CNTRL2 Register
//-----------------   
reg  [15:0] cntrl2;

wire        cntrl2_wr = reg_wr[CNTRL2];

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl2 <=  16'h0000;
  else if (cntrl2_wr) cntrl2 <=  per_din;

   
// CNTRL3 Register
//-----------------   
reg  [15:0] cntrl3;

wire        cntrl3_wr = reg_wr[CNTRL3];

always @ (posedge mclk or posedge puc_rst)
  if (puc_rst)        cntrl3 <=  16'h0000;
  else if (cntrl3_wr) cntrl3 <=  per_din;

// CNTRL4 Register
//-----------------   
wire  [511:0] cntrl4;

always @ (cntrl4)
  $display("%h", cntrl4);

always @ (posedge ready)
  $display("%s %h", {cntrl2[7:0], cntrl2[15:8], cntrl3[7:0], cntrl3[15:8]}, cntrl4);

always @ (cntrl1_2[1])
  $display("%d", cntrl1_2[1]);

reg ready = 1'h0;
reg count = 1'h0;

always @(posedge mclk) begin
  if (cntrl1_1[3] & ~ready & ~count) ready <= 1'h1;
  if (cntrl1_1[3] & ready & ~count) begin 
    ready <= 1'h0;
    count <= 1'h1;
  end
  if (~cntrl1_1[3] & ~ready & count) count <= 1'h0;
end


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
wire [15:0] cntrl1_rd  = cntrl1  & {16{reg_rd[CNTRL1]}};
wire [15:0] cntrl2_rd  = cntrl2  & {16{reg_rd[CNTRL2]}};
wire [15:0] cntrl3_rd  = cntrl3  & {16{reg_rd[CNTRL3]}};

wire [15:0]  cntrl4_0_rd  = cntrl4[15:0] & {16{reg_rd[CNTRL4_0]}};
wire [15:0]  cntrl4_1_rd  = cntrl4[31:16] & {16{reg_rd[CNTRL4_1]}};
wire [15:0]  cntrl4_2_rd  = cntrl4[47:32] & {16{reg_rd[CNTRL4_2]}};
wire [15:0]  cntrl4_3_rd  = cntrl4[63:48] & {16{reg_rd[CNTRL4_3]}};
wire [15:0]  cntrl4_4_rd  = cntrl4[79:64] & {16{reg_rd[CNTRL4_4]}};
wire [15:0]  cntrl4_5_rd  = cntrl4[95:80] & {16{reg_rd[CNTRL4_5]}};
wire [15:0]  cntrl4_6_rd  = cntrl4[111:96] & {16{reg_rd[CNTRL4_6]}};
wire [15:0]  cntrl4_7_rd  = cntrl4[127:112] & {16{reg_rd[CNTRL4_7]}};
wire [15:0]  cntrl4_8_rd  = cntrl4[143:128] & {16{reg_rd[CNTRL4_8]}};
wire [15:0]  cntrl4_9_rd  = cntrl4[159:144] & {16{reg_rd[CNTRL4_9]}};
wire [15:0]  cntrl4_10_rd  = cntrl4[175:160] & {16{reg_rd[CNTRL4_10]}};
wire [15:0]  cntrl4_11_rd  = cntrl4[191:176] & {16{reg_rd[CNTRL4_11]}};
wire [15:0]  cntrl4_12_rd  = cntrl4[207:192] & {16{reg_rd[CNTRL4_12]}};
wire [15:0]  cntrl4_13_rd  = cntrl4[223:208] & {16{reg_rd[CNTRL4_13]}};
wire [15:0]  cntrl4_14_rd  = cntrl4[239:224] & {16{reg_rd[CNTRL4_14]}};
wire [15:0]  cntrl4_15_rd  = cntrl4[255:240] & {16{reg_rd[CNTRL4_15]}};
wire [15:0]  cntrl4_16_rd  = cntrl4[271:256] & {16{reg_rd[CNTRL4_16]}};
wire [15:0]  cntrl4_17_rd  = cntrl4[287:272] & {16{reg_rd[CNTRL4_17]}};
wire [15:0]  cntrl4_18_rd  = cntrl4[303:288] & {16{reg_rd[CNTRL4_18]}};
wire [15:0]  cntrl4_19_rd  = cntrl4[319:304] & {16{reg_rd[CNTRL4_19]}};
wire [15:0]  cntrl4_20_rd  = cntrl4[335:320] & {16{reg_rd[CNTRL4_20]}};
wire [15:0]  cntrl4_21_rd  = cntrl4[351:336] & {16{reg_rd[CNTRL4_21]}};
wire [15:0]  cntrl4_22_rd  = cntrl4[367:352] & {16{reg_rd[CNTRL4_22]}};
wire [15:0]  cntrl4_23_rd  = cntrl4[383:368] & {16{reg_rd[CNTRL4_23]}};
wire [15:0]  cntrl4_24_rd  = cntrl4[399:384] & {16{reg_rd[CNTRL4_24]}};
wire [15:0]  cntrl4_25_rd  = cntrl4[415:400] & {16{reg_rd[CNTRL4_25]}};
wire [15:0]  cntrl4_26_rd  = cntrl4[431:416] & {16{reg_rd[CNTRL4_26]}};
wire [15:0]  cntrl4_27_rd  = cntrl4[447:432] & {16{reg_rd[CNTRL4_27]}};
wire [15:0]  cntrl4_28_rd  = cntrl4[463:448] & {16{reg_rd[CNTRL4_28]}};
wire [15:0]  cntrl4_29_rd  = cntrl4[479:464] & {16{reg_rd[CNTRL4_29]}};
wire [15:0]  cntrl4_30_rd  = cntrl4[495:480] & {16{reg_rd[CNTRL4_30]}};
wire [15:0]  cntrl4_31_rd  = cntrl4[511:496] & {16{reg_rd[CNTRL4_31]}};

wire [15:0] per_dout   =  cntrl1_rd  |
                          cntrl2_rd  |
                          cntrl3_rd  |
                          cntrl4_0_rd |
                          cntrl4_1_rd |
                          cntrl4_2_rd |
                          cntrl4_3_rd |
                          cntrl4_4_rd |
                          cntrl4_5_rd |
                          cntrl4_6_rd |
                          cntrl4_7_rd |
                          cntrl4_8_rd |
                          cntrl4_9_rd |
                          cntrl4_10_rd |
                          cntrl4_11_rd |
                          cntrl4_12_rd |
                          cntrl4_13_rd |
                          cntrl4_14_rd |
                          cntrl4_15_rd |
                          cntrl4_16_rd |
                          cntrl4_17_rd |
                          cntrl4_18_rd |
                          cntrl4_19_rd |
                          cntrl4_20_rd |
                          cntrl4_21_rd |
                          cntrl4_22_rd |
                          cntrl4_23_rd |
                          cntrl4_24_rd |
                          cntrl4_25_rd |
                          cntrl4_26_rd |
                          cntrl4_27_rd |
                          cntrl4_28_rd |
                          cntrl4_29_rd |
                          cntrl4_30_rd |
                          cntrl4_31_rd;
endmodule
