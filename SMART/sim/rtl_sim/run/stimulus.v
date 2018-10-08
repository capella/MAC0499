/*===========================================================================*/
/*                                 DIGITAL I/O                               */
/*---------------------------------------------------------------------------*/
/* Test the Digital I/O interface.                                           */
/*===========================================================================*/

`define VERY_LONG_TIMEOUT

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
	 $write("%s", rxbuf);
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
      SW1 = 1'b1;
      SW0 = 1'b0;

      // Wait for welcome message to be received
      repeat(12000) @(posedge mclk);

      // Send something
      uart_tx("B");
      uart_tx("o");
      uart_tx("n");
      uart_tx("j");
      uart_tx("o");
      uart_tx("u");
      uart_tx("r");
      uart_tx(" ");
      uart_tx(":");
      uart_tx("-");
      uart_tx(")");
      uart_tx("\n");
      repeat(10000) @(posedge mclk);

      $display("================== END SIMULATION ===============");
      $finish();

   end

 // always @(posedge dut.reset_n) begin
 //      $display("RESET");
 // end

 always @(posedge dut.smart1.reset) begin
      $display("%h %h SAFE (%h < %h)", dut.smart1.ins_addr, dut.smart1.mem_addr*2+65536-`PMEM_SIZE, dut.smart1.LOW_SAFE*2+65536-`PMEM_SIZE, dut.smart1.HIGH_SAFE*2+65536-`PMEM_SIZE);
      // $display("RESET SMART1");
 end


// always @ (e_state) begin
//     $display ("%h) %s - %s - %s", inst_pc, inst_full, i_state, e_state);
// end

// always @ (dut.smart1.mem_addr) begin
//     $display ("%d", dut.smart1.mem_addr);
// end

