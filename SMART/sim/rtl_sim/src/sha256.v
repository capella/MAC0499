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
      SW0 = 1'b1;
      
      repeat(10000) @(posedge mclk);
      $display("%h", dut.sha256_0.digest);

      $display("================== END SIMULATION ===============");
      $finish();

   end
