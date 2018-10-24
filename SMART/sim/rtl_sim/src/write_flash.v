/*===========================================================================*/
/*                                 DIGITAL I/O                               */
/*---------------------------------------------------------------------------*/
/* Test the Digital I/O interface.                                           */
/*===========================================================================*/

`define VERY_LONG_TIMEOUT

// Data rate
parameter UART_FREQ   = 19200;
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
      repeat(780) @(posedge mclk);

      $display("================== END SIMULATION ===============");
      $finish();

   end


always @(posedge dut.smart1.reset) begin
   $display("\n%h %h SAFE (%h < %h) %b", dut.smart1.ins_addr, dut.smart1.mem_addr*2+65536-`PMEM_SIZE, dut.smart1.LOW_SAFE*2+65536-`PMEM_SIZE, dut.smart1.HIGH_SAFE*2+65536-`PMEM_SIZE, dut.smart1.to_be_reset);
   // $display("RESET SMART1");
end

always @(posedge (dut.openMSP430_0.pc == 'h0xFFFE)) begin
   $display("INIT");
end

always @ (e_state) begin
    $display ("%h) %s - %s - %s", inst_pc, inst_full, i_state, e_state);
end

