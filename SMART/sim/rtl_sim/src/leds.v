/*===========================================================================*/
/*                                 DIGITAL I/O                               */
/*---------------------------------------------------------------------------*/
/* Test the Digital I/O interface.                                           */
/*===========================================================================*/
`define VERY_LONG_TIMEOUT
initial
   begin
      $display(" ===============================================");
      $display("|                 START SIMULATION              |");
      $display(" ===============================================");
      repeat(5) @(posedge CLK_100MHz);
      stimulus_done = 0;

      stimulus_done = 1;
   end

always @ (posedge LED1) begin
    $display ("LED1 ON");
end

always @ (negedge LED1) begin
    $display ("LED1 OFF");
end

always @ (posedge LED0) begin
    $display ("LED0 ON");
end

always @ (negedge LED0) begin
    $display ("LED0 OFF");
end
