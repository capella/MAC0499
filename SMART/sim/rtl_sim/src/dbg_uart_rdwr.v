/*===========================================================================*/
/* Copyright (C) 2001 Authors                                                */
/*                                                                           */
/* This source file may be used and distributed without restriction provided */
/* that this copyright statement is not removed from the file and that any   */
/* derivative work contains the original copyright notice and the associated */
/* disclaimer.                                                               */
/*                                                                           */
/* This source file is free software; you can redistribute it and/or modify  */
/* it under the terms of the GNU Lesser General Public License as published  */
/* by the Free Software Foundation; either version 2.1 of the License, or    */
/* (at your option) any later version.                                       */
/*                                                                           */
/* This source is distributed in the hope that it will be useful, but WITHOUT*/
/* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or     */
/* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public       */
/* License for more details.                                                 */
/*                                                                           */
/* You should have received a copy of the GNU Lesser General Public License  */
/* along with this source; if not, write to the Free Software Foundation,    */
/* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA        */
/*                                                                           */
/*===========================================================================*/
/*                            DEBUG INTERFACE:  RD / WR                      */
/*---------------------------------------------------------------------------*/
/* Test the UART debug interface:                                            */
/*                        - Check RD/WR access to all adressable             */
/*        	            debug registers.                                 */
/*                                                                           */
/* Author(s):                                                                */
/*             - Olivier Girard,    olgirard@gmail.com                       */
/*                                                                           */
/*---------------------------------------------------------------------------*/
/* $Rev: 95 $                                                                */
/* $LastChangedBy: olivier.girard $                                          */
/* $LastChangedDate: 2011-02-24 21:37:57 +0100 (Thu, 24 Feb 2011) $          */
/*===========================================================================*/

// Register B/W and addresses
parameter           CPU_ID_LO    =  (8'h00 | 8'h00);
parameter           CPU_ID_HI    =  (8'h00 | 8'h01);
parameter           CPU_CTL      =  (8'h40 | 8'h02);
parameter           CPU_STAT     =  (8'h40 | 8'h03);
parameter           MEM_CTL      =  (8'h40 | 8'h04);
parameter           MEM_ADDR     =  (8'h00 | 8'h05);
parameter           MEM_DATA     =  (8'h00 | 8'h06);
parameter           MEM_CNT      =  (8'h00 | 8'h07);
parameter           BRK0_CTL     =  (8'h40 | 8'h08);
parameter           BRK0_STAT    =  (8'h40 | 8'h09);
parameter           BRK0_ADDR0   =  (8'h00 | 8'h0A);
parameter           BRK0_ADDR1   =  (8'h00 | 8'h0B);
parameter           BRK1_CTL     =  (8'h40 | 8'h0C);
parameter           BRK1_STAT    =  (8'h40 | 8'h0D);
parameter           BRK1_ADDR0   =  (8'h00 | 8'h0E);
parameter           BRK1_ADDR1   =  (8'h00 | 8'h0F);
parameter           BRK2_CTL     =  (8'h40 | 8'h10);
parameter           BRK2_STAT    =  (8'h40 | 8'h11);
parameter           BRK2_ADDR0   =  (8'h00 | 8'h12);
parameter           BRK2_ADDR1   =  (8'h00 | 8'h13);
parameter           BRK3_CTL     =  (8'h40 | 8'h14);
parameter           BRK3_STAT    =  (8'h40 | 8'h15);
parameter           BRK3_ADDR0   =  (8'h00 | 8'h16);
parameter           BRK3_ADDR1   =  (8'h00 | 8'h17);
parameter           CPU_NR       =  (8'h00 | 8'h18);

// Read / Write commands
parameter           DBG_WR       =   8'h80;
parameter           DBG_RD       =   8'h00;

// Synchronization value
parameter           DBG_SYNC     =   8'h80;


`define LONG_TIMEOUT


// Data rate
parameter UART_FREQ   = 115200;
integer   UART_PERIOD = 1000000000/UART_FREQ;


reg [7:0] rxbuf;
integer   rxcnt;

task uart_rx;
      begin
	 @(negedge UART_TXD);  
	 rxbuf = 0;      
	 #(UART_PERIOD*3/2);
	 for (rxcnt = 0; rxcnt < 8; rxcnt = rxcnt + 1)
	   begin
	      rxbuf = {UART_TXD, rxbuf[7:1]};
	      #(UART_PERIOD);
	   end
	 $write("%d", rxbuf);
	 $fflush();
      end
endtask

task uart_tx;
      input [7:0] txbuf;

      reg [9:0] txbuf_full;
      integer   txcnt;
      begin
	 UART_RXD = 1'b1;
	 txbuf_full = {1'b1, txbuf, 1'b0};
         #(UART_PERIOD);
	 for (txcnt = 0; txcnt < 10; txcnt = txcnt + 1)
	   begin
	      UART_RXD   =  txbuf_full[txcnt];
              #(UART_PERIOD);
	   end
      end
endtask

initial forever uart_rx;
   

initial
   begin
      repeat(5) @(posedge CLK_100MHz);
      $display("================= START SIMULATION ==============");


      UART_RXD = 1'b1;

      // Select hardware uart
      SW1 = 1'b0;
      SW0 = 1'b0;

      // Wait for welcome message to be received
      repeat(2500) @(posedge mclk);

      // Send something
      uart_tx({1'b0,1'b1});

      repeat(1000) @(posedge mclk);

      $display("================== END SIMULATION ===============");
      $finish();

   end