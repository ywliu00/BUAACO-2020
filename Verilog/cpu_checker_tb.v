`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:57:27 09/17/2020
// Design Name:   cpu_checker
// Module Name:   F:/Course/CO/Verilog/CPU_CHECKER/cpu_checker_tb.v
// Project Name:  CPU_CHECKER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_checker_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] char;

	// Outputs
	wire [1:0] format_type;

	// Instantiate the Unit Under Test (UUT)
	cpu_checker uut (
		.clk(clk), 
		.reset(reset), 
		.char(char), 
		.format_type(format_type)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		char = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#10
		char = "^";
		#10
		char = "2";
		#10
		char = "4";
		#10
		char = " ";
		#10
		char = "2";
		#10
		char = "@";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "3";
		#10
		char = "0";
		#10
		char = "f";
		#10
		char = "4";
		#10
		char = ":";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = "$";
		#10
		char = "3";
		#10
		char = "1";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = "<";
		#10
		char = "=";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = "1";
		#10
		char = "9";
		#10
		char = "2";
		#10
		char = "6";
		#10
		char = "0";
		#10
		char = "8";
		#10
		char = "1";
		#10
		char = "7";
		#10
		char = "#";
		#10
		char = " ";
		#10
		char = "^";
		#10
		char = "7";
		#10
		char = "8";
		#10
		char = "3";
		#10
		char = "6";
		#10
		char = "@";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "3";
		#10
		char = "0";
		#10
		char = "f";
		#10
		char = "4";
		#10
		char = ":";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = "*";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "0";
		#10
		char = "2";
		#10
		char = "f";
		#10
		char = "f";
		#10
		char = "c";
		#10
		char = "<";
		#10
		char = "=";
		#10
		char = "1";
		#10
		char = "9";
		#10
		char = "5";
		#10
		char = "2";
		#10
		char = "1";
		#10
		char = "0";
		#10
		char = "2";
		#10
		char = "5";
		#10
		char = "#";
		#10
		char = "0";
		#10
		char = " ";
		#10
		char = " ";
		/*
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		#10
		char = " ";
		
		*/
		
	end
	
	always #5 clk <= ~clk;
      
endmodule

