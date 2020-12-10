`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:55 11/22/2020 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input wire [31:0] PC,
    input wire branch,
    input wire jump,
	input wire Stall,
    input wire [31:0] branch_addr,
    input wire [31:0] jump_addr,
    output wire [31:0] NextPC,
	output wire [31:0] PC_4
    );
	 assign PC_4 = PC + 31'd4;
	 assign NextPC = (Stall) ? PC :
					 (jump) ? jump_addr :
	                 (branch) ? branch_addr :
						  PC_4;

endmodule
