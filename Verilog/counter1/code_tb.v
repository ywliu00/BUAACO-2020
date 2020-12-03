`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:06:00 09/16/2020
// Design Name:   code
// Module Name:   F:/Course/CO/Verilog/counter1/code_tb.v
// Project Name:  counter1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module code_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		Slt = 0;
		En = 1;

		// Wait 100 ns for global reset to finish
		#300;
		En = 0;
		#200
		En = 1;
		#10
		
		Reset = 0;
		Slt = 1;
		
		#250;
		En = 0;
		
		#250
		En = 1;
		Reset = 1;
        
		// Add stimulus here

	end
   
	always #5 Clk = ~Clk;
	
endmodule

