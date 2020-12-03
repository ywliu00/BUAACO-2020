`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:45:21 09/16/2020
// Design Name:   id_fsm
// Module Name:   F:/Course/CO/Verilog/ID_FSM/id_fsm_tb.v
// Project Name:  ID_FSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_fsm_tb;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;

		#100;
		char <= 48;
		#10;
		char <= 49;
		#10;
		char <= 48;
		#10;
		char <= 49;
		#10;
		char <= 48;
		#10;
		char <= 97;
		#10;
		char <= 98;
		#10;
		char <= 67;
		#10;
		char <= 37;
		#10;
		char <= 49;
      /*#10;
		char <= 50;
		#10;
		char <= 51;
		#10;
		char <= 73;
		#10;
		char <= 57;
		#10;
		char <= 85;
		#10;
		char <= 32;*/
		// Add stimulus here

	end
   always #5 clk = ~clk;
endmodule

