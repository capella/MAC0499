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
// *File Name: openMSP430_fpga.v
//
// *Module Description: Manage all connection need to run the openMSP430 in an
//                      FPGA.
//
//----------------------------------------------------------------------------
`include "openMSP430_defines.v"
`include "display_hex_byte.v"

module openMSP430_fpga (

    // Clock Sources
    input     CLK_100MHz,

    // Slide Switches
    input     SW7,
    input     SW6,
    input     SW5,
    input     SW4,
    input     SW3,
    input     SW2,
    input     SW1,
    input     SW0,

    // Push Button Switches
    input     BTN3,
    input     BTN2,
    input     BTN1,
    input     BTN0,

    // LEDs
    output    LED7,
    output    LED6,
    output    LED5,
    output    LED4,
    output    LED3,
    output    LED2,
    output    LED1,
    output    LED0,

    // RS-232 Port
    input     UART_RXD,
    output    UART_TXD,

    // P7
    output    IO_P7_7,
    output    IO_P7_6,
    output    IO_P7_5,
    output    IO_P7_4,
    output    IO_P7_3,
    output    IO_P7_2,
    output    IO_P7_1,
    output    IO_P7_0,

    // RS-232 Port
    input     UART_RXD,
    output    UART_TXD,

    // P6
    input     IO_P6_1,
    output    IO_P6_2,

    // SevenSegment
    output [7:0] SevenSegment,
    output [2:0] SevenSegmentEnable

);

//=============================================================================
// 1)  INTERNAL WIRES/REGISTERS/PARAMETERS DECLARATION
//=============================================================================

// openMSP430 output buses
wire        [13:0] per_addr;
wire        [15:0] per_din;
wire         [1:0] per_we;
wire [`DMEM_MSB:0] dmem_addr;
wire        [15:0] dmem_din;
wire         [1:0] dmem_wen;
wire [`PMEM_MSB:0] pmem_addr;
wire        [15:0] pmem_din;
wire         [1:0] pmem_wen;

// openMSP430 input buses
wire        [13:0] irq_bus;
wire        [15:0] per_dout;
wire        [15:0] dmem_dout;
wire        [15:0] pmem_dout;

// GPIO
wire         [7:0] din;
wire         [7:0] dout;
wire         [7:0] dout_en;

// Timer A
wire        [15:0] per_dout_tA;


// Simple UART
wire               irq_uart_rx;
wire               irq_uart_tx;
wire        [15:0] per_dout_uart;
wire               hw_uart_txd;
wire               hw_uart_rxd;

// Simple UART2
wire               irq_uart2_rx;
wire               irq_uart2_tx;
wire        [15:0] per_dout_uart2;

// Others
wire               reset_pin;

// SMART
wire smart1_reset;
wire smart2_reset;

wire [15:0] smart_mem_din;
wire [15:0] smart_mem_dout;
wire [15:0] pc;

// GPIO
wire         [7:0] p3_dout;
wire         [7:0] p3_dout_en;
wire         [7:0] p3_sel;
wire        [15:0] per_dout_dio;

//=============================================================================
// 2)  CLOCK GENERATION
//=============================================================================

clock clk (
    .CLK_IN     (CLK_100MHz),
    .CLK_OUT    (clk_sys),
    .RESET      (~reset_pin),

    .LOCKED     (dcm_locked)
);

//=============================================================================
// 3)  RESET GENERATION & FPGA STARTUP
//=============================================================================


// Reset input buffer
IBUF   ibuf_reset_n   (.O(reset_pin), .I(BTN3));

// Top level reset generation
wire smart_reset;

// Release the reset only, if the DCM is locked
assign  reset_n = reset_pin & dcm_locked & ~smart_reset;

// //Include the startup device
// wire  gsr_tb;
// wire  gts_tb;
// STARTUP_SPARTAN6 xstartup (.CLK(clk_sys), .GSR(gsr_tb), .GTS(gts_tb));

//=============================================================================
// 4)  OPENMSP430
//=============================================================================

openMSP430 openMSP430_0 (

// OUTPUTs
    .aclk              (),             // ASIC ONLY: ACLK
    .aclk_en           (),             // FPGA ONLY: ACLK enable
    .dbg_freeze        (),             // Freeze peripherals
    .dbg_i2c_sda_out   (),             // Debug interface: I2C SDA OUT
    .dbg_uart_txd      (dbg_uart_txd), // Debug interface: UART TXD
    .dco_enable        (),             // ASIC ONLY: Fast oscillator enable
    .dco_wkup          (),             // ASIC ONLY: Fast oscillator wake-up (asynchronous)
    .dmem_addr         (dmem_addr),    // Data Memory address
    .dmem_cen          (dmem_cen),     // Data Memory chip enable (low active)
    .dmem_din          (dmem_din),     // Data Memory data input
    .dmem_wen          (dmem_wen),     // Data Memory write enable (low active)
    .irq_acc           (),             // Interrupt request accepted (one-hot signal)
    .lfxt_enable       (),             // ASIC ONLY: Low frequency oscillator enable
    .lfxt_wkup         (),             // ASIC ONLY: Low frequency oscillator wake-up (asynchronous)
    .mclk              (mclk),         // Main system clock
    .dma_dout          (),             // Direct Memory Access data output
    .dma_ready         (),             // Direct Memory Access is complete
    .dma_resp          (),             // Direct Memory Access response (0:Okay / 1:Error)
    .per_addr          (per_addr),     // Peripheral address
    .per_din           (per_din),      // Peripheral data input
    .per_we            (per_we),       // Peripheral write enable (high active)
    .per_en            (per_en),       // Peripheral enable (high active)
    .pmem_addr         (pmem_addr),    // Program Memory address
    .pmem_cen          (pmem_cen),     // Program Memory chip enable (low active)
    .pmem_din          (pmem_din),     // Program Memory data input (optional)
    .pmem_wen          (pmem_wen),     // Program Memory write enable (low active) (optional)
    .puc_rst           (puc_rst),      // Main system reset
    .smclk             (),             // ASIC ONLY: SMCLK
    .smclk_en          (smclk_en),     // FPGA ONLY: SMCLK enable
    .pc          (pc),

// INPUTs
    .cpu_en            (SW6),         // Enable CPU code execution (asynchronous and non-glitchy)
    .dbg_en            (SW7),         // Debug interface enable (asynchronous and non-glitchy)
    .dbg_i2c_addr      (7'h00),        // Debug interface: I2C Address
    .dbg_i2c_broadcast (7'h00),        // Debug interface: I2C Broadcast Address (for multicore systems)
    .dbg_i2c_scl       (1'b1),         // Debug interface: I2C SCL
    .dbg_i2c_sda_in    (1'b1),         // Debug interface: I2C SDA IN
    .dbg_uart_rxd      (dbg_uart_rxd), // Debug interface: UART RXD (asynchronous)
    .dco_clk           (clk_sys),      // Fast oscillator (fast clock)
    .dmem_dout         (dmem_dout),    // Data Memory data output
    .irq               (irq_bus),      // Maskable interrupts
    .lfxt_clk          (1'b0),         // Low frequency oscillator (typ 32kHz)
    .dma_addr          (15'h0000),     // Direct Memory Access address
    .dma_din           (16'h0000),     // Direct Memory Access data input
    .dma_en            (1'b0),         // Direct Memory Access enable (high active)
    .dma_priority      (1'b0),         // Direct Memory Access priority (0:low / 1:high)
    .dma_we            (2'b00),        // Direct Memory Access write byte enable (high active)
    .dma_wkup          (1'b0),         // ASIC ONLY: DMA Sub-System Wake-up (asynchronous and non-glitchy)
    .nmi               (nmi),          // Non-maskable interrupt (asynchronous)
    .per_dout          (per_dout),     // Peripheral data output
    .pmem_dout         (pmem_dout),    // Program Memory data output
    .reset_n           (reset_n),      // Reset Pin (low active, asynchronous and non-glitchy)
    .scan_enable       (1'b0),         // ASIC ONLY: Scan enable (active during scan shifting)
    .scan_mode         (1'b0),         // ASIC ONLY: Scan mode
    .wkup              (1'b0)          // ASIC ONLY: System Wake-up (asynchronous and non-glitchy)
);

//=============================================================================
// 5)  OPENMSP430 PERIPHERALS
//=============================================================================

//
// Simple full duplex UART (8N1 protocol)
//----------------------------------------

omsp_uart #(.BASE_ADDR(15'h0080)) uart_0 (

// OUTPUTs
    .irq_uart_rx  (irq_uart_rx),   // UART receive interrupt
    .irq_uart_tx  (irq_uart_tx),   // UART transmit interrupt
    .per_dout     (per_dout_uart), // Peripheral data output
    .uart_txd     (hw_uart_txd),   // UART Data Transmit (TXD)

// INPUTs
    .mclk         (mclk),          // Main system clock
    .per_addr     (per_addr),      // Peripheral address
    .per_din      (per_din),       // Peripheral data input
    .per_en       (per_en),        // Peripheral enable (high active)
    .per_we       (per_we),        // Peripheral write enable (high active)
    .puc_rst      (puc_rst),       // Main system reset
    .smclk_en     (smclk_en),      // SMCLK enable (from CPU)
    .uart_rxd     (hw_uart_rxd)    // UART Data Receive (RXD)
);

omsp_uart #(.BASE_ADDR(15'h0090)) uart_2 (

// OUTPUTs
    .irq_uart_rx  (irq_uart2_rx),   // UART receive interrupt
    .irq_uart_tx  (irq_uart2_tx),   // UART transmit interrupt
    .per_dout     (per_dout_uart2), // Peripheral data output
    .uart_txd     (IO_P6_2),   // UART Data Transmit (TXD)

// INPUTs
    .mclk         (mclk),          // Main system clock
    .per_addr     (per_addr),      // Peripheral address
    .per_din      (per_din),       // Peripheral data input
    .per_en       (per_en),        // Peripheral enable (high active)
    .per_we       (per_we),        // Peripheral write enable (high active)
    .puc_rst      (puc_rst),       // Main system reset
    .smclk_en     (smclk_en),      // SMCLK enable (from CPU)
    .uart_rxd     (IO_P6_1) // UART Data Receive (RXD)
);

//
// Sha256 Module
//----------------------------------------

wire        [15:0] per_sha;


sha2_periph #(.BASE_ADDR(15'h001E)) sha256_0 (

// OUTPUTs
    .per_dout     (per_sha), // Peripheral data output

// INPUTs
    .mclk         (mclk),          // Main system clock
    .per_addr     (per_addr),      // Peripheral address
    .per_din      (per_din),       // Peripheral data input
    .per_en       (per_en),        // Peripheral enable (high active)
    .per_we       (per_we),        // Peripheral write enable (high active)
    .puc_rst      (puc_rst)       // Main system reset
);

//
// Digital I/O
//-------------------------------

omsp_gpio #(.P1_EN(0),
            .P2_EN(0),
            .P3_EN(1),
            .P4_EN(0),
            .P5_EN(0),
            .P6_EN(0)) gpio_0 (

// OUTPUTs
    .irq_port1    (),              // Port 1 interrupt
    .irq_port2    (),              // Port 2 interrupt
    .p1_dout      (),              // Port 1 data output
    .p1_dout_en   (),              // Port 1 data output enable
    .p1_sel       (),              // Port 1 function select
    .p2_dout      (),              // Port 2 data output
    .p2_dout_en   (),              // Port 2 data output enable
    .p2_sel       (),              // Port 2 function select
    .p3_dout      (p3_dout),       // Port 3 data output
    .p3_dout_en   (p3_dout_en),    // Port 3 data output enable
    .p3_sel       (p3_sel),        // Port 3 function select
    .p4_dout      (),              // Port 4 data output
    .p4_dout_en   (),              // Port 4 data output enable
    .p4_sel       (),              // Port 4 function select
    .p5_dout      (),              // Port 5 data output
    .p5_dout_en   (),              // Port 5 data output enable
    .p5_sel       (),              // Port 5 function select
    .p6_dout      (),              // Port 6 data output
    .p6_dout_en   (),              // Port 6 data output enable
    .p6_sel       (),              // Port 6 function select
    .per_dout     (per_dout_dio),  // Peripheral data output

// INPUTs
    .mclk         (mclk),          // Main system clock
    .p1_din       (8'h00),         // Port 1 data input
    .p2_din       (8'h00),         // Port 2 data input
    .p3_din       (8'h00),         // Port 3 data input
    .p4_din       (8'h00),         // Port 4 data input
    .p5_din       (8'h00),         // Port 5 data input
    .p6_din       (8'h00),         // Port 6 data input
    .per_addr     (per_addr),      // Peripheral address
    .per_din      (per_din),       // Peripheral data input
    .per_en       (per_en),        // Peripheral enable (high active)
    .per_we       (per_we),        // Peripheral write enable (high active)
    .puc_rst      (puc_rst)        // Main system reset
);
//
// Combine peripheral data buses
//-------------------------------

assign per_dout = per_sha |
                  per_dout_uart |
                  per_dout_uart2 |
                  per_dout_dio;

//
// Assign interrupts
//-------------------------------

assign nmi        =  1'b0;
assign irq_bus    = {1'b0,         // Vector 13  (0xFFFA)
                     1'b0,         // Vector 12  (0xFFF8)
                     1'b0,         // Vector 11  (0xFFF6)
                     1'b0,         // Vector 10  (0xFFF4) - Watchdog -
                     irq_uart2_rx, // Vector  9  (0xFFF2)
                     irq_uart2_tx, // Vector  8  (0xFFF0)
                     irq_uart_rx,  // Vector  7  (0xFFEE)
                     irq_uart_tx,  // Vector  6  (0xFFEC)
                     1'b0,         // Vector  5  (0xFFEA)
                     1'b0,         // Vector  4  (0xFFE8)
                     1'b0,          // Vector  3  (0xFFE6)
                     1'b0,          // Vector  2  (0xFFE4)
                     1'b0,         // Vector  1  (0xFFE2)
                     1'b0};        // Vector  0  (0xFFE0)

//=============================================================================
// 5.5)  SMART
//=============================================================================

// PROTECT SMART CODE
smart_mac #(
    .SIZE_MEM_ADDR(`PMEM_MSB),

    .LOW_SAFE((`PMEM_SIZE-`SMART_SIZE-`SMART_KEY_SIZE)/2-`IRQ_NR+2),
    .HIGH_SAFE((`PMEM_SIZE-`SMART_KEY_SIZE)/2-`IRQ_NR-1),

    .LOW_CODE(65536-(`IRQ_NR*2+`SMART_KEY_SIZE+`SMART_SIZE)),
    .HIGH_CODE(65536-(`IRQ_NR*2+`SMART_KEY_SIZE))
) smart2 (
    .reset(smart2_reset),
    .mem_dout(pmem_dout),
    .mem_addr(pmem_addr),
    .mclk(mclk),
    .mem_din(smart_mem_dout),
    .ins_addr(pc),
    .disable_debug(SW4),
    .in_safe_area()
);

// PROTECT KEY
smart_mac #(
    .SIZE_MEM_ADDR(`PMEM_MSB),

    .LOW_SAFE((`PMEM_SIZE-`SMART_KEY_SIZE)/2-`IRQ_NR),
    .HIGH_SAFE((`PMEM_SIZE)/2-`IRQ_NR-1),

    .LOW_CODE(65536-(`IRQ_NR*2+`SMART_KEY_SIZE+`SMART_SIZE)),
    .HIGH_CODE(65536-(`IRQ_NR*2+`SMART_KEY_SIZE))
)  smart1 (
    .reset(smart1_reset),
    .mem_dout(smart_mem_dout),
    .mem_addr(pmem_addr),
    .mclk(mclk),
    .mem_din(smart_mem_din),
    .ins_addr(pc),
    .disable_debug(SW5),
    .in_safe_area()
);

//=============================================================================
// 6)  PROGRAM AND DATA MEMORIES
//=============================================================================

spartan6_pmem pmem_main  (
    .clka(mclk),
    .ena(~pmem_cen),
    .wea(~pmem_wen),
    .addra({1'b0, pmem_addr}),
    .dina(pmem_din),
    .douta(smart_mem_din)
);

spartan6_dmem dmem (
    .clka(mclk),
    .ena(~dmem_cen),
    .wea(~dmem_wen),
    .addra({1'b0, dmem_addr}),
    .dina(dmem_din),
    .douta(dmem_dout)
);

//=============================================================================
// 7)  I/O CELLS
//=============================================================================

// RS-232 Port
//----------------------
// P1.1 (TX) and P2.2 (RX)

// Mux the RS-232 port between:
//   - the debug interface.
//   - the simple hardware UART
//
// The mux is controlled with the SW0/SW1 switches:
//        0 = debug interface
//        1 = simple hardware uart
wire sdi_select  = (din[0] == 1'b0);
wire uart_select = (din[0] == 1'b1);

wire   uart_txd_out = uart_select ? hw_uart_txd    : dbg_uart_txd;

wire   uart_rxd_in;
assign hw_uart_rxd  = uart_select ? uart_rxd_in : 1'b1;
assign dbg_uart_rxd = sdi_select  ? uart_rxd_in : 1'b1;

IBUF  UART_RXD_PIN   (.O(uart_rxd_in),                 .I(UART_RXD));
OBUF  UART_TXD_PIN   (.I(uart_txd_out),                .O(UART_TXD));


// Slide Switches (Port 1 inputs)
//--------------------------------
// IBUF  SW7_PIN        (.O(din[7]),                   .I(SW7));
// IBUF  SW6_PIN        (.O(din[6]),                   .I(SW6));
// IBUF  SW5_PIN        (.O(din[5]),                   .I(SW5));
// IBUF  SW4_PIN        (.O(din[4]),                   .I(SW4));
IBUF  SW3_PIN        (.O(din[3]),                   .I(SW3));
IBUF  SW2_PIN        (.O(din[2]),                   .I(SW2));
IBUF  SW1_PIN        (.O(din[1]),                   .I(SW1));
IBUF  SW0_PIN        (.O(din[0]),                   .I(SW0));

// LEDs (Port 1 outputs)
//-----------------------
OBUF  IO_P7_7_PIN       (.I(p3_dout[7] & p3_dout_en[7]),  .O(IO_P7_7));
OBUF  IO_P7_6_PIN       (.I(p3_dout[6] & p3_dout_en[6]),  .O(IO_P7_6));
OBUF  IO_P7_5_PIN       (.I(p3_dout[5] & p3_dout_en[5]),  .O(IO_P7_5));
OBUF  IO_P7_4_PIN       (.I(p3_dout[4] & p3_dout_en[4]),  .O(IO_P7_4));
OBUF  IO_P7_3_PIN       (.I(p3_dout[3] & p3_dout_en[3]),  .O(IO_P7_3));
OBUF  IO_P7_2_PIN       (.I(p3_dout[2] & p3_dout_en[2]),  .O(IO_P7_2));
OBUF  IO_P7_1_PIN       (.I(p3_dout[1] & p3_dout_en[1]),  .O(IO_P7_1));
OBUF  IO_P7_0_PIN       (.I(p3_dout[0] & p3_dout_en[0]),  .O(IO_P7_0));

OBUF  LED5_PIN       (.I(~hw_uart_txd),  .O(LED5));
OBUF  LED4_PIN       (.I(~dbg_uart_txd),  .O(LED4));

OBUF  LED7_PIN       (.I(~hw_uart_rxd),  .O(LED7));
OBUF  LED6_PIN       (.I(~dbg_uart_rxd),  .O(LED6));

OBUF  LED3_PIN       (.I(pmem_addr[4]),  .O(LED3));
OBUF  LED2_PIN       (.I(pmem_addr[5]),  .O(LED2));
OBUF  LED1_PIN       (.I(pmem_addr[6]),  .O(LED1));
OBUF  LED0_PIN       (.I(pmem_addr[7]),  .O(LED0));

// Push Button Switches
//----------------------
IBUF  BTN2_PIN       (.O(),                            .I(BTN2));
IBUF  BTN1_PIN       (.O(),                            .I(BTN1));
IBUF  BTN0_PIN       (.O(),                            .I(BTN0));

assign smart_reset =  smart1_reset || smart2_reset;
// wire smart_reset2 =  smart1_reset || smart2_reset;

// omsp_sync_cell sync_cell_puc1 (
//     .data_out  (smart_reset),
//     .data_in   (smart_reset2),
//     .clk       (mclk),
//     .rst       (puc_rst)
// );

// reg [12:0] reset_adress = 13'b0;

// always @(posedge smart_reset) begin
//     reset_adress <= pmem_addr;
// end

// display_hex_byte #(
//     .refresh_rate(1000/5),
//     // .refresh_rate(1/5),
//     .sys_clk_freq(100000000/5)
// )
// hex_display(
//     .clk(clk_sys),
//     .hex_byte(din[2]? reset_adress:pmem_addr),
//     .segments(SevenSegment),
//     .segments_enable(SevenSegmentEnable)
// );

assign LED7 = smart2_reset;
assign LED6 = smart1_reset;

endmodule // openMSP430_fpga

