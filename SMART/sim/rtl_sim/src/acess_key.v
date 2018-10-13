
initial
   begin
      $display("================= START SIMULATION ==============");

      repeat(30) @(posedge mclk);

      $display("================== END SIMULATION ===============");
      $finish();
   end

 always @(posedge dut.smart1.reset) begin
      $display("%h %h SAFE1 (%h < %h)", dut.smart1.ins_addr, dut.smart1.mem_addr*2+65536-`PMEM_SIZE, dut.smart1.LOW_SAFE*2+65536-`PMEM_SIZE, dut.smart1.HIGH_SAFE*2+65536-`PMEM_SIZE);
 end

  always @(posedge dut.smart2.reset) begin
      $display("%h %h SAFE2 (%h < %h)", dut.smart2.ins_addr, dut.smart2.mem_addr*2+65536-`PMEM_SIZE, dut.smart2.LOW_SAFE*2+65536-`PMEM_SIZE, dut.smart2.HIGH_SAFE*2+65536-`PMEM_SIZE);
 end


// always @ (e_state) begin
//     $display ("%h) %s - %s - %s", inst_pc, inst_full, i_state, e_state);
// end


// always @(posedge dut.reset_n) begin
// 	$display("RESET");
// end
