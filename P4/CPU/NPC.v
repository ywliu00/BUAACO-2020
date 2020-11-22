`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:53 11/16/2020 
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
    input wire [31:0] imm32,
    input wire [25:0] imm26,
    input wire [31:0] rsData,
    input wire branch,
    input wire jump,
	 input wire jr,
    output wire [31:0] NextPC,
    output wire [31:0] PC_4
    );
	 wire [31:0] PCPlus4, BranchNPC, imm32_LS2, JumpNPC;
	 wire [26:0] imm26_LS2;
	 
	 assign PCPlus4 = PC + 32'h0000_0004;
	 assign imm32_LS2 = imm32 << 2;
	 assign imm26_LS2 = imm26 << 2;
	 assign BranchNPC = imm32_LS2 + PCPlus4;
	 assign JumpNPC = {PCPlus4[31:28], imm26_LS2};
	 
	 assign PC_4 = PCPlus4;
	 assign NextPC =  jump  ? JumpNPC   :
						    jr   ? rsData    :
						  branch ? BranchNPC : 
						                        PCPlus4;
endmodule
