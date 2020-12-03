`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:24:22 09/11/2020 
// Design Name: 
// Module Name:    AndGate 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module AndGate(a, b, c);
	 input a, b;
	 output c;
	 
	 reg x;
	 
	 assign c = a & b;

endmodule
