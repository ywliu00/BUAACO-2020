`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:15 09/11/2020 
// Design Name: 
// Module Name:    OrGate8Bits 
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
module OrGate8Bits(
    input [7:0]a;
	 input [7:0]b;
	 input [7:0]c;
	 output [7:0]result;
    );
	 
    assign result = a | b | c;

endmodule
