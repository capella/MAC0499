//----------------------------------------------------------------------------
// Copyright (C) 2001 Authors
//
// This source file may be used and distributed without restriction provided
// that this copyright statement is not removed from the file and that any
// derivative work contains the original copyright notice and the associated
// disclaimer.
//
// This source file is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This source is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
// License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this source; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
//----------------------------------------------------------------------------
// 
// *File Name: registers.v
// 
// *Module Description:
//                      Direct connections to internal registers & memory.
//
//
// *Author(s):
//              - Olivier Girard,    olgirard@gmail.com
//
//----------------------------------------------------------------------------
// $Rev: 143 $
// $LastChangedBy: olivier.girard $
// $LastChangedDate: 2012-05-09 22:20:03 +0200 (Wed, 09 May 2012) $
//----------------------------------------------------------------------------

// CPU registers
//======================

// wire       [15:0] r0    = dut.openMSP430_0.execution_unit_0.register_file_0.r0;
// wire       [15:0] r1    = dut.openMSP430_0.execution_unit_0.register_file_0.r1;
// wire       [15:0] r2    = dut.openMSP430_0.execution_unit_0.register_file_0.r2;
// wire       [15:0] r3    = dut.openMSP430_0.execution_unit_0.register_file_0.r3;
// wire       [15:0] r4    = dut.openMSP430_0.execution_unit_0.register_file_0.r4;
// wire       [15:0] r5    = dut.openMSP430_0.execution_unit_0.register_file_0.r5;
// wire       [15:0] r6    = dut.openMSP430_0.execution_unit_0.register_file_0.r6;
// wire       [15:0] r7    = dut.openMSP430_0.execution_unit_0.register_file_0.r7;
// wire       [15:0] r8    = dut.openMSP430_0.execution_unit_0.register_file_0.r8;
// wire       [15:0] r9    = dut.openMSP430_0.execution_unit_0.register_file_0.r9;
// wire       [15:0] r10   = dut.openMSP430_0.execution_unit_0.register_file_0.r10;
// wire       [15:0] r11   = dut.openMSP430_0.execution_unit_0.register_file_0.r11;
// wire       [15:0] r12   = dut.openMSP430_0.execution_unit_0.register_file_0.r12;
// wire       [15:0] r13   = dut.openMSP430_0.execution_unit_0.register_file_0.r13;
// wire       [15:0] r14   = dut.openMSP430_0.execution_unit_0.register_file_0.r14;
// wire       [15:0] r15   = dut.openMSP430_0.execution_unit_0.register_file_0.r15;


// Data Memory cells
//======================

// wire       [15:0] mem200 = dut.pmem.inst.memory[0];
// wire       [15:0] mem202 = dut.pmem.inst.memory[1];
// wire       [15:0] mem204 = dut.pmem.inst.memory[2];
// wire       [15:0] mem206 = dut.pmem.inst.memory[3];
// wire       [15:0] mem208 = dut.pmem.inst.memory[4];
// wire       [15:0] mem20A = dut.pmem.inst.memory[5];
// wire       [15:0] mem20C = dut.pmem.inst.memory[6];
// wire       [15:0] mem20E = dut.pmem.inst.memory[7];
// wire       [15:0] mem210 = dut.pmem.inst.memory[8];
// wire       [15:0] mem212 = dut.pmem.inst.memory[9];
// wire       [15:0] mem214 = dut.pmem.inst.memory[10];
// wire       [15:0] mem216 = dut.pmem.inst.memory[11];
// wire       [15:0] mem218 = dut.pmem.inst.memory[12];
// wire       [15:0] mem21A = dut.pmem.inst.memory[13];
// wire       [15:0] mem21C = dut.pmem.inst.memory[14];
// wire       [15:0] mem21E = dut.pmem.inst.memory[15];
// wire       [15:0] mem220 = dut.pmem.inst.memory[16];
// wire       [15:0] mem222 = dut.pmem.inst.memory[17];
// wire       [15:0] mem224 = dut.pmem.inst.memory[18];
// wire       [15:0] mem226 = dut.pmem.inst.memory[19];
// wire       [15:0] mem228 = dut.pmem.inst.memory[20];
// wire       [15:0] mem22A = dut.pmem.inst.memory[21];
// wire       [15:0] mem22C = dut.pmem.inst.memory[22];
// wire       [15:0] mem22E = dut.pmem.inst.memory[23];
// wire       [15:0] mem230 = dut.pmem.inst.memory[24];
// wire       [15:0] mem232 = dut.pmem.inst.memory[25];
// wire       [15:0] mem234 = dut.pmem.inst.memory[26];
// wire       [15:0] mem236 = dut.pmem.inst.memory[27];
// wire       [15:0] mem238 = dut.pmem.inst.memory[28];
// wire       [15:0] mem23A = dut.pmem.inst.memory[29];
// wire       [15:0] mem23C = dut.pmem.inst.memory[30];
// wire       [15:0] mem23E = dut.pmem.inst.memory[31];
// wire       [15:0] mem240 = dut.pmem.inst.memory[32];
// wire       [15:0] mem242 = dut.pmem.inst.memory[33];
// wire       [15:0] mem244 = dut.pmem.inst.memory[34];
// wire       [15:0] mem246 = dut.pmem.inst.memory[35];
// wire       [15:0] mem248 = dut.pmem.inst.memory[36];
// wire       [15:0] mem24A = dut.pmem.inst.memory[37];
// wire       [15:0] mem24C = dut.pmem.inst.memory[38];
// wire       [15:0] mem24E = dut.pmem.inst.memory[39];
// wire       [15:0] mem250 = dut.pmem.inst.memory[40];
// wire       [15:0] mem252 = dut.pmem.inst.memory[41];
// wire       [15:0] mem254 = dut.pmem.inst.memory[42];
// wire       [15:0] mem256 = dut.pmem.inst.memory[43];
// wire       [15:0] mem258 = dut.pmem.inst.memory[44];
// wire       [15:0] mem25A = dut.pmem.inst.memory[45];
// wire       [15:0] mem25C = dut.pmem.inst.memory[46];
// wire       [15:0] mem25E = dut.pmem.inst.memory[47];
// wire       [15:0] mem260 = dut.pmem.inst.memory[48];
// wire       [15:0] mem262 = dut.pmem.inst.memory[49];
// wire       [15:0] mem264 = dut.pmem.inst.memory[50];
// wire       [15:0] mem266 = dut.pmem.inst.memory[51];
// wire       [15:0] mem268 = dut.pmem.inst.memory[52];
// wire       [15:0] mem26A = dut.pmem.inst.memory[53];
// wire       [15:0] mem26C = dut.pmem.inst.memory[54];
// wire       [15:0] mem26E = dut.pmem.inst.memory[55];
// wire       [15:0] mem270 = dut.pmem.inst.memory[56];
// wire       [15:0] mem272 = dut.pmem.inst.memory[57];
// wire       [15:0] mem274 = dut.pmem.inst.memory[58];
// wire       [15:0] mem276 = dut.pmem.inst.memory[59];
// wire       [15:0] mem278 = dut.pmem.inst.memory[60];
// wire       [15:0] mem27A = dut.pmem.inst.memory[61];
// wire       [15:0] mem27C = dut.pmem.inst.memory[62];
// wire       [15:0] mem27E = dut.pmem.inst.memory[63];
// wire       [15:0] mem280 = dut.pmem.inst.memory[64];


// Program Memory cells
//======================
reg   [15:0] pmem [0:`PMEM_SIZE-1];

// // Interrupt vectors
// wire  [15:0] irq_vect_15 = pmem[(1<<(`PMEM_MSB+1))-1];  // RESET Vector
// wire  [15:0] irq_vect_14 = pmem[(1<<(`PMEM_MSB+1))-2];  // NMI
// wire  [15:0] irq_vect_13 = pmem[(1<<(`PMEM_MSB+1))-3];  // IRQ 13
// wire  [15:0] irq_vect_12 = pmem[(1<<(`PMEM_MSB+1))-4];  // IRQ 12
// wire  [15:0] irq_vect_11 = pmem[(1<<(`PMEM_MSB+1))-5];  // IRQ 11
// wire  [15:0] irq_vect_10 = pmem[(1<<(`PMEM_MSB+1))-6];  // IRQ 10
// wire  [15:0] irq_vect_09 = pmem[(1<<(`PMEM_MSB+1))-7];  // IRQ  9
// wire  [15:0] irq_vect_08 = pmem[(1<<(`PMEM_MSB+1))-8];  // IRQ  8
// wire  [15:0] irq_vect_07 = pmem[(1<<(`PMEM_MSB+1))-9];  // IRQ  7
// wire  [15:0] irq_vect_06 = pmem[(1<<(`PMEM_MSB+1))-10]; // IRQ  6
// wire  [15:0] irq_vect_05 = pmem[(1<<(`PMEM_MSB+1))-11]; // IRQ  5
// wire  [15:0] irq_vect_04 = pmem[(1<<(`PMEM_MSB+1))-12]; // IRQ  4
// wire  [15:0] irq_vect_03 = pmem[(1<<(`PMEM_MSB+1))-13]; // IRQ  3
// wire  [15:0] irq_vect_02 = pmem[(1<<(`PMEM_MSB+1))-14]; // IRQ  2
// wire  [15:0] irq_vect_01 = pmem[(1<<(`PMEM_MSB+1))-15]; // IRQ  1
// wire  [15:0] irq_vect_00 = pmem[(1<<(`PMEM_MSB+1))-16]; // IRQ  0


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
