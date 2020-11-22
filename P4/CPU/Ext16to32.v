`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:30:19 11/16/2020 
// Design Name: 
// Module Name:    Ext16to32 
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
module Ext16to32(
    input wire [15:0] imm16,
    input wire Sign,
    output wire [31:0] imm32
    );
	 wire HighBit;
	 assign HighBit = Sign & imm16[15];
	 assign imm32 = {{16{HighBit}}, imm16};
endmodule
