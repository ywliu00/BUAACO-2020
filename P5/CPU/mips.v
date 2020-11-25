`timescale 1ns / 1ps
`include "CPU_Param.v"
//	parameter ALU_add = 3'b000,
//			ALU_sub = 3'b001,
//			ALU_or = 3'b010,
//			ALU_lshift = 3'b011;
//
//	parameter inst_err = 60'd0,
//			inst_addu = 60'd1 << 0,
//			inst_subu = 60'd1 << 1,
//			inst_ori = 60'd1 << 2,
//			inst_lw = 60'd1 << 3,
//			inst_sw = 60'd1 << 4,
//			inst_beq = 60'd1 << 5,
//			inst_lui = 60'd1 << 6,
//			inst_j = 60'd1 << 7,
//			inst_jal = 60'd1 << 8,
//			inst_jr = 60'd1 << 9,
//			inst_sll = 60'd1 << 10;
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:54:50 11/22/2020 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input wire clk,
    input wire reset
    );
	
	////////////////////// IF //////////////////////
	wire [31:0] branch_addr32, jump_addr32, PC_4_IF_to_ID,
	            Instr_IF_to_ID, PC_IF_to_ID;
	wire branch, jump;
	IF IF(
    .branch_addr32(branch_addr32),
    .jump_addr32(jump_addr32),
    .branch(branch),
    .jump(jump),
	.clk(clk),
	.reset(reset),
	
    .PC_4(PC_4_IF_to_ID),
	.Instr(Instr_IF_to_ID),
	.PC(PC_IF_to_ID)
    );
	
	////////////////////// ID ////////////////////////////
	wire RegWriteEn;
	wire [4:0] ReadAddr0_ID_to_EX, ReadAddr1_ID_to_EX, RegWriteAddr_ID_to_EX, 
	           Shamt_ID_to_EX;
	wire [31:0] RegWriteData, RegWritePC, imm32_ID_to_EX, Data0_ID_to_EX,
	            Data1_ID_to_EX, luiRes_ID_to_EX, PC_ID_to_EX;
	wire [59:0] InstrType_ID_to_EX;
	ID ID(
    .Instr(Instr_IF_to_ID),
    .PC(PC_IF_to_ID),
    .PC_4(PC_4_IF_to_ID),
    .clk(clk),
    .reset(reset),
	.RegWrite(RegWriteEn),
	.WData(RegWriteData_Mem_to_WB),
	.WritePC(PC_Mem_to_WB),
	.RegWriteAddr_Mem_to_WB(RegWriteAddr_Mem_to_WB),
	
    .Rs_ID_to_EX(ReadAddr0_ID_to_EX),
    .Rt_ID_to_EX(ReadAddr1_ID_to_EX),
    .RegWriteAddr_ID_to_EX(RegWriteAddr_ID_to_EX), //非指令中Rd，而是真实的需写入的GPR地址
    .Shamt_ID_to_EX(Shamt_ID_to_EX),
    .imm32_ID_to_EX(imm32_ID_to_EX),
	.InstrType_ID_to_EX(InstrType_ID_to_EX),
	.RsData_ID_to_EX(Data0_ID_to_EX),
	.RtData_ID_to_EX(Data1_ID_to_EX),
    .luiRes_ID_to_EX(luiRes_ID_to_EX),
	.PC_ID_to_EX(PC_ID_to_EX),
	.branch(branch),
    .jump(jump),
    .branch_addr32(branch_addr32),
    .jump_addr32(jump_addr32)
    );
	 
	//////////////////// EX /////////////////////////////////
	wire [4:0] ReadAddr0_EX_to_Mem, ReadAddr1_EX_to_Mem, RegWriteAddr_EX_to_Mem;
	wire [31:0] PC_EX_to_Mem, DMWriteData_EX_to_Mem, ALUOut_EX_to_Mem;
	wire [59:0] InstrType_EX_to_Mem;
	EX EX(
    .Rs_ID_to_EX(ReadAddr0_ID_to_EX),
    .Rt_ID_to_EX(ReadAddr1_ID_to_EX),
    .RegWriteAddr_ID_to_EX(RegWriteAddr_ID_to_EX), //非指令中Rd，而是真实的需写入的GPR地址
    .Shamt_ID_to_EX(Shamt_ID_to_EX),
    .imm32_ID_to_EX(imm32_ID_to_EX),
	.InstrType_ID_to_EX(InstrType_ID_to_EX),
	.RsData_ID_to_EX(Data0_ID_to_EX),
	.RtData_ID_to_EX(Data1_ID_to_EX),
    .luiRes_ID_to_EX(luiRes_ID_to_EX),
	.PC_ID_to_EX(PC_ID_to_EX),
	.clk(clk),
    .reset(reset),
	
	.PC_EX_to_Mem(PC_EX_to_Mem),
	.Rs_EX_to_Mem(ReadAddr0_EX_to_Mem),
    .Rt_EX_to_Mem(ReadAddr1_EX_to_Mem),
    .RegWriteAddr_EX_to_Mem(RegWriteAddr_EX_to_Mem),
	.InstrType_EX_to_Mem(InstrType_EX_to_Mem),
	.ALUOut_EX_to_Mem(ALUOut_EX_to_Mem),
	.DMWriteData_EX_to_Mem(DMWriteData_EX_to_Mem) //待写入DM的数据
    );
	
	////////////////////// Mem ////////////////////////////
	wire [31:0] ALUOut_Mem_to_WB, DMRead_Mem_to_WB, PC_Mem_to_WB, RegWriteData_Mem_to_WB;
	wire [4:0] RegWriteAddr_Mem_to_WB;
	Mem Mem(
	.Rs_EX_to_Mem(ReadAddr0_EX_to_Mem),
    .Rt_EX_to_Mem(ReadAddr1_EX_to_Mem),
    .RegWriteAddr_EX_to_Mem(RegWriteAddr_EX_to_Mem),
	.InstrType_EX_to_Mem(InstrType_EX_to_Mem),
	.ALUOut_EX_to_Mem(ALUOut_EX_to_Mem),
	.DMWriteData_EX_to_Mem(DMWriteData_EX_to_Mem), //待写入DM的数据
	.PC_EX_to_Mem(PC_EX_to_Mem),
	.clk(clk),
    .reset(reset),
	
	.ALUOut_Mem_to_WB(ALUOut_Mem_to_WB),
	.DMRead_Mem_to_WB(DMRead_Mem_to_WB),
	.RegWriteData_Mem_to_WB(RegWriteData_Mem_to_WB),
	.RegWriteAddr_Mem_to_WB(RegWriteAddr_Mem_to_WB),
	.PC_Mem_to_WB(PC_Mem_to_WB),
	.RegWriteEn(RegWriteEn)
    );
endmodule
