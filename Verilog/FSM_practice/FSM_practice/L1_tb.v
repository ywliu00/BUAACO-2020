`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:41:08 10/30/2020
// Design Name:   Lemmings1
// Module Name:   F:/Course/CO/Verilog/FSM_practice/FSM_practice/L1_tb.v
// Project Name:  FSM_practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Lemmings1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module L1_tb;

	// Inputs
	reg clk;
	reg areset;
	reg bump_left;
	reg bump_right;

	// Outputs
	wire walk_left;
	wire walk_right;

	// Instantiate the Unit Under Test (UUT)
	Lemmings1 uut (
		.clk(clk), 
		.areset(areset), 
		.bump_left(bump_left), 
		.bump_right(bump_right), 
		.walk_left(walk_left), 
		.walk_right(walk_right)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		areset = 0;
		bump_left = 0;
		bump_right = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

				areset = 1;
				bump_left = 1;
				bump_right = 1;
				#20;
				areset = 0;
		
		fork
			begin
				#80;
				bump_left = 0;
				#30;
				bump_left = 1;
				bump_right = 0;
			end
			begin
				#40
				areset = 1;
				#20
				areset = 0;
			end
		join
		
		

	end
	always #5 clk = ~clk;
      
endmodule

