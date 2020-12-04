`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:58 11/22/2020 
// Design Name: 
// Module Name:    InstrDecoder 
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
module InstrDecoder(
    input wire [31:0] Instr,
    output wire [59:0] InstrType
    );
	 wire [5:0] OpCode, Func;
	 wire typeR;
	 
	 assign {OpCode, Func} = {Instr[31:26], Instr[5:0]};
	 assign typeR = & (!OpCode);
	 
	 assign InstrType = (typeR && Func == 6'b100001) ? `inst_addu :
	                    (typeR && Func == 6'b100011) ? `inst_subu :
                       (OpCode == 6'b001101) ? `inst_ori :
                       (OpCode == 6'b100011) ? `inst_lw :
                       (OpCode == 6'b101011) ? `inst_sw :
                       (OpCode == 6'b000100) ? `inst_beq :
                       (OpCode == 6'b001111) ? `inst_lui :
                       (OpCode == 6'b000010) ? `inst_j :
                       (OpCode == 6'b000011) ? `inst_jal :
                       (typeR && Func == 6'b001000) ? `inst_jr :
                       (typeR && Func == 6'b000000) ? `inst_sll : 
					   (OpCode == 6'b001001) ? `inst_addiu :
					   (typeR && Func == 6'b001001) ? `inst_jalr :
					   (OpCode == 6'b001000) ? `inst_addi :
					   (typeR && Func == 6'b011000) ? `inst_mult :
					   (typeR && Func == 6'b011001) ? `inst_multu :
					   (typeR && Func == 6'b011010) ? `inst_div :
					   (typeR && Func == 6'b011011) ? `inst_divu :
					   (typeR && Func == 6'b010000) ? `inst_mfhi :
					   (typeR && Func == 6'b010010) ? `inst_mflo :
					   (typeR && Func == 6'b010001) ? `inst_mthi :
					   (typeR && Func == 6'b010011) ? `inst_mtlo :
					   (OpCode == 6'b101001) ? `inst_sh :
					   (OpCode == 6'b101000) ? `inst_sb :
					   (OpCode == 6'b100000) ? `inst_lb :
					   (OpCode == 6'b100100) ? `inst_lbu :
					   (OpCode == 6'b100001) ? `inst_lh :
					   (OpCode == 6'b100101) ? `inst_lhu :
					   (typeR && Func == 6'b100000) ? `inst_add :
					   (typeR && Func == 6'b100010) ? `inst_sub :
					   (typeR && Func == 6'b100100) ? `inst_AND :
					   (OpCode == 6'b001100) ? `inst_andi :
					   (typeR && Func == 6'b100101) ? `inst_OR :
					   (typeR && Func == 6'b100110) ? `inst_XOR :
					   (OpCode == 6'b001110) ? `inst_xori :
					   (typeR && Func == 6'b100111) ? `inst_NOR :
					   (typeR && Func == 6'b000100) ? `inst_sllv :
					   (typeR && Func == 6'b000010) ? `inst_srl :
					   (typeR && Func == 6'b000110) ? `inst_srlv :
					   (typeR && Func == 6'b000011) ? `inst_sra :
					   (typeR && Func == 6'b000111) ? `inst_srav :
					   (typeR && Func == 6'b101010) ? `inst_slt :
					   (typeR && Func == 6'b101011) ? `inst_sltu :
					   (OpCode == 6'b001010) ? `inst_slti :
					   (OpCode == 6'b001011) ? `inst_sltiu :
					   (OpCode == 6'b000111) ? `inst_bgtz :
					   //bgez, blez, bltz, bne»¹Ã»Ð´
					   
					                                               `inst_err;

endmodule
