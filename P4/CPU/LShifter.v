`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:44 11/17/2020 
// Design Name: 
// Module Name:    LShifter 
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
module LShifter(
    input wire [31:0] imm32,
    input wire [4:0] ShiftBits,
    input wire [31:0] Res
    );
	 
	 assign Res = imm32 << ShiftBits;

endmodule
