`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:13 11/24/2020 
// Design Name: 
// Module Name:    ALUOpDecoder 
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
module ALUOpDecoder(
    input wire [59:0] InstrType,
    output wire ALUIn1Src,
    output wire [3:0] ALUOp
    );
	wire load, store;
	assign load = `lw || `lb || `lbu || `lh || `lhu;
	assign store = `sw || `sh || `sb;
	assign ALUIn1Src = (`ori || load || store ||`addiu || `addi || `andi || `xori) ? 1 : 0;
	//为0则取RtData，为1则取32位立即数
	assign ALUOp = (`sll) ? `ALU_lshift :
	               (`ori || `OR) ? `ALU_or : 
				   (`subu || `sub) ? `ALU_sub : 
				   (`AND || `andi) ? `ALU_and :
				   (`XOR || `xori) ? `ALU_xor :
				   (`NOR) ? `ALU_nor :
				                          `ALU_add;

endmodule
