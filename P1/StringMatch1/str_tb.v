`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:42:49 10/27/2020
// Design Name:   string
// Module Name:   F:/Course/CO/P1/StringMatch1/str_tb.v
// Project Name:  StringMatch1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module str_tb;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	reg [999:0]teststr = "1+2+4*9+5+72*64=4+4+3+4*7*6*1*0*9+0*1+7";
	integer i = 0;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      while(teststr[999:992]==0) teststr = teststr << 8;
		// Add stimulus here
		for(i=0;i<200;i=i+1)
		begin
			in = teststr[999:992];
			#10;
			teststr = teststr << 8;
			if(i%9==0) clr = 1;
			else clr = 0;
		end
	end
	always #5 clk = ~clk;
      
endmodule

