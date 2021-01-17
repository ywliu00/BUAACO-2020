`timescale 1ns / 1ps
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
	reg interrupt;
	wire [31:0] addr;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset),
		.interrupt(interrupt),
		.addr(addr)
	);
	
	reg flag;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		interrupt = 0;
		
		flag = 1;

		// Wait 100 ns for global reset to finish
		#90;
		reset = 1;
		#10;
		reset = 0;
        
		#170;
		interrupt = 1;
		#20;
		interrupt = 0;
		// Add stimulus here

	end
	
	always@(negedge clk)
	begin
		if((addr == 32'h0000_3058) )//&& flag)
		begin
			//interrupt <= 1;
			flag <= 0;
		end
		else if(addr == 32'h0000_418c)
		begin
			//interrupt <= 1;
		end
		else
		begin
			//interrupt <= 0;
		end
	end
	
	always #5 clk = ~clk;
      
endmodule

