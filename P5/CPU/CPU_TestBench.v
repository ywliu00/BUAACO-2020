`timescale 1ns / 1ps
`include "CPU_Param.v"
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:51:45 11/17/2020
// Design Name:   mips
// Module Name:   F:/Course/CO/P4/CPU/CPU_TestBench.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_TestBench;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#90;
		reset = 1;
		#10;
		reset = 0;
        
		// Add stimulus here

	end
	always #5 clk = ~clk;
      
endmodule

