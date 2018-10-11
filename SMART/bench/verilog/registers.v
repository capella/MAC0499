// CPU registers
//======================

wire       [15:0] r0    = dut.openMSP430_0.execution_unit_0.register_file_0.r0;
wire       [15:0] r1    = dut.openMSP430_0.execution_unit_0.register_file_0.r1;
wire       [15:0] r2    = dut.openMSP430_0.execution_unit_0.register_file_0.r2;
wire       [15:0] r3    = dut.openMSP430_0.execution_unit_0.register_file_0.r3;
wire       [15:0] r4    = dut.openMSP430_0.execution_unit_0.register_file_0.r4;
wire       [15:0] r5    = dut.openMSP430_0.execution_unit_0.register_file_0.r5;
wire       [15:0] r6    = dut.openMSP430_0.execution_unit_0.register_file_0.r6;
wire       [15:0] r7    = dut.openMSP430_0.execution_unit_0.register_file_0.r7;
wire       [15:0] r8    = dut.openMSP430_0.execution_unit_0.register_file_0.r8;
wire       [15:0] r9    = dut.openMSP430_0.execution_unit_0.register_file_0.r9;
wire       [15:0] r10   = dut.openMSP430_0.execution_unit_0.register_file_0.r10;
wire       [15:0] r11   = dut.openMSP430_0.execution_unit_0.register_file_0.r11;
wire       [15:0] r12   = dut.openMSP430_0.execution_unit_0.register_file_0.r12;
wire       [15:0] r13   = dut.openMSP430_0.execution_unit_0.register_file_0.r13;
wire       [15:0] r14   = dut.openMSP430_0.execution_unit_0.register_file_0.r14;
wire       [15:0] r15   = dut.openMSP430_0.execution_unit_0.register_file_0.r15;

// Program Memory cells
//======================
reg   [15:0] pmem [0:`PMEM_SIZE-1];

// Interrupt vectors
wire  [15:0] irq_vect_15 = pmem[(1<<(`PMEM_MSB+1))-1];  // RESET Vector
wire  [15:0] irq_vect_14 = pmem[(1<<(`PMEM_MSB+1))-2];  // NMI
wire  [15:0] irq_vect_13 = pmem[(1<<(`PMEM_MSB+1))-3];  // IRQ 13
wire  [15:0] irq_vect_12 = pmem[(1<<(`PMEM_MSB+1))-4];  // IRQ 12
wire  [15:0] irq_vect_11 = pmem[(1<<(`PMEM_MSB+1))-5];  // IRQ 11
wire  [15:0] irq_vect_10 = pmem[(1<<(`PMEM_MSB+1))-6];  // IRQ 10
wire  [15:0] irq_vect_09 = pmem[(1<<(`PMEM_MSB+1))-7];  // IRQ  9
wire  [15:0] irq_vect_08 = pmem[(1<<(`PMEM_MSB+1))-8];  // IRQ  8
wire  [15:0] irq_vect_07 = pmem[(1<<(`PMEM_MSB+1))-9];  // IRQ  7
wire  [15:0] irq_vect_06 = pmem[(1<<(`PMEM_MSB+1))-10]; // IRQ  6
wire  [15:0] irq_vect_05 = pmem[(1<<(`PMEM_MSB+1))-11]; // IRQ  5
wire  [15:0] irq_vect_04 = pmem[(1<<(`PMEM_MSB+1))-12]; // IRQ  4
wire  [15:0] irq_vect_03 = pmem[(1<<(`PMEM_MSB+1))-13]; // IRQ  3
wire  [15:0] irq_vect_02 = pmem[(1<<(`PMEM_MSB+1))-14]; // IRQ  2
wire  [15:0] irq_vect_01 = pmem[(1<<(`PMEM_MSB+1))-15]; // IRQ  1
wire  [15:0] irq_vect_00 = pmem[(1<<(`PMEM_MSB+1))-16]; // IRQ  0


// Interrupt detection
wire              nmi_detect  = dut.openMSP430_0.frontend_0.nmi_pnd;
wire              irq_detect  = dut.openMSP430_0.frontend_0.irq_detect;

// Debug interface
wire              dbg_en      = dut.openMSP430_0.dbg_en;
wire              dbg_clk     = dut.openMSP430_0.clock_module_0.dbg_clk;
wire              dbg_rst     = dut.openMSP430_0.clock_module_0.dbg_rst;

// CPU internals
//======================

wire mclk     = dut.openMSP430_0.mclk;
wire puc_rst  = dut.openMSP430_0.puc_rst;
