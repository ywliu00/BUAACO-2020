`timescale 1ns / 1ps
`include "CPU_Param.v"
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
	wire Stall;
	
	///////////////////// Bypass Control Unit //////////////////////
	wire [4:0] RegWriteAddr_Mem_to_WB;
	wire [4:0] RAddr0_ID, RAddr0_EX, RAddr0_Mem,
	           RAddr1_ID, RAddr1_EX, RAddr1_Mem,
			   RegWriteAddr_ID, RegWriteAddr_EX, RegWriteAddr_Mem;
	wire [2:0] Tuse_RAddr0_ID, Tuse_RAddr0_EX, Tuse_RAddr0_Mem,
	           Tuse_RAddr1_ID, Tuse_RAddr1_EX, Tuse_RAddr1_Mem,
			   Tnew_WAddr_ID, Tnew_WAddr_EX, Tnew_WAddr_Mem;
	wire [1:0] RData0BypassCtrl, RData1BypassCtrl,
	           ALUIn0BypassCtrl, ALUIn1BypassCtrl;
	wire DMWriteDataBypassCtrl_EX, DMWriteDataBypassCtrl_Mem;
	
	BypassController BypassController(
	// ID级传来的数据
	.RAddr0_ID(RAddr0_ID),
	.RAddr1_ID(RAddr1_ID),
	.Tuse_RAddr0_ID(Tuse_RAddr0_ID),
	.Tuse_RAddr1_ID(Tuse_RAddr1_ID),
	// EX级传来的数据
	.RAddr0_EX(RAddr0_EX),
	.RAddr1_EX(RAddr1_EX),
	.RegWriteAddr_EX(RegWriteAddr_EX),
	.Tuse_RAddr0_EX(Tuse_RAddr0_EX),
	.Tuse_RAddr1_EX(Tuse_RAddr1_EX),
	.Tnew_WAddr_EX(Tnew_WAddr_EX),
	// Mem级传来的数据
	.RAddr0_Mem(RAddr0_Mem),
    .RAddr1_Mem(RAddr1_Mem),
    .RegWriteAddr_Mem(RegWriteAddr_Mem),
	.Tuse_RAddr0_Mem(Tuse_RAddr0_Mem),
	.Tuse_RAddr1_Mem(Tuse_RAddr1_Mem),
	.Tnew_WAddr_Mem(Tnew_WAddr_Mem),
	//WB级传来的数据
	.RegWriteAddr_WB(RegWriteAddr_Mem_to_WB),
	// 输出控制信号
	.RData0BypassCtrl(RData0BypassCtrl),
	.RData1BypassCtrl(RData1BypassCtrl),//ID级两个
	.ALUIn0BypassCtrl(ALUIn0BypassCtrl),
	.ALUIn1BypassCtrl(ALUIn1BypassCtrl),
	.DMWriteDataBypassCtrl_EX(DMWriteDataBypassCtrl_EX), //EX级三个
	.DMWriteDataBypassCtrl_Mem(DMWriteDataBypassCtrl_Mem) //Mem级一个
    );
	///////////////////// Stall Unit /////////////////////////
	wire MultBusy, MultTypeInstr;
	StallUnit StallUnit(
	.RegRead0(RAddr0_ID),
    .T_useRead0(Tuse_RAddr0_ID),
    .RegRead1(RAddr1_ID),
    .T_useRead1(Tuse_RAddr1_ID),
    .RegWrite_EX(RegWriteAddr_EX),
    .T_new_EX(Tnew_WAddr_EX),
    .RegWrite_Mem(RegWriteAddr_Mem),
    .T_new_Mem(Tnew_WAddr_Mem),
	.MultTypeInstr(MultTypeInstr),
	.MultBusy(MultBusy),
    .Stall(Stall));
	
	////////////////////// IF //////////////////////
	wire [31:0] branch_addr32, jump_addr32, PC_4_IF_to_ID,
	            Instr_IF_to_ID, PC_IF_to_ID;
	wire branch, jump;
	IF IF(
    .branch_addr32(branch_addr32),
    .jump_addr32(jump_addr32),
    .branch(branch),
    .jump(jump),
	.Stall(Stall),
	.clk(clk),
	.reset(reset),
	
    .PC_4(PC_4_IF_to_ID),
	.Instr(Instr_IF_to_ID),
	.PC(PC_IF_to_ID)
    );
	
	////////////////////// ID ////////////////////////////
	wire Start_ID_to_EX;//RegWriteEn;
	wire [2:0] Tuse_RAddr0_ID_to_EX, Tuse_RAddr1_ID_to_EX, Tnew_WAddr_ID_to_EX;
	wire [4:0] ReadAddr0_ID_to_EX, ReadAddr1_ID_to_EX, RegWriteAddr_ID_to_EX, 
	           Shamt_ID_to_EX;
	wire [31:0] RegWriteData, RegWritePC, imm32_ID_to_EX, Data0_ID_to_EX,
	            Data1_ID_to_EX, ResFromID_ID_to_EX, PC_ID_to_EX;
	wire [59:0] InstrType_ID_to_EX;
	ID ID(
    .Instr(Instr_IF_to_ID),
    .PC(PC_IF_to_ID),
    .PC_4(PC_4_IF_to_ID),
    .clk(clk),
    .reset(reset),
	.Stall(Stall),
	//.RegWrite(RegWriteEn),
	.WData(RegWriteData_Mem_to_WB),
	.WritePC(PC_Mem_to_WB),
	.RegWriteAddr_Mem_to_WB(RegWriteAddr_Mem_to_WB),
	
    .RAddr0_ID_to_EX(ReadAddr0_ID_to_EX),
    .RAddr1_ID_to_EX(ReadAddr1_ID_to_EX),
    .RegWriteAddr_ID_to_EX(RegWriteAddr_ID_to_EX), //非指令中Rd，而是真实的需写入的GPR地址
    .Shamt_ID_to_EX(Shamt_ID_to_EX),
    .imm32_ID_to_EX(imm32_ID_to_EX),
	.InstrType_ID_to_EX(InstrType_ID_to_EX),
	.RAddr0Data_ID_to_EX(Data0_ID_to_EX),
	.RAddr1Data_ID_to_EX(Data1_ID_to_EX),
    .ResFromID_ID_to_EX(ResFromID_ID_to_EX),
	.PC_ID_to_EX(PC_ID_to_EX),
	.Tuse_RAddr0_ID_to_EX(Tuse_RAddr0_ID_to_EX),
	.Tuse_RAddr1_ID_to_EX(Tuse_RAddr1_ID_to_EX),
	.Tnew_WAddr_ID_to_EX(Tnew_WAddr_ID_to_EX),
	.Start_ID_to_EX(Start_ID_to_EX),
	
	.branch(branch),
    .jump(jump),
    .branch_addr32(branch_addr32),
    .jump_addr32(jump_addr32),
	
	// 给阻塞和转发控制器的信息
	.RegRead0_ID(RAddr0_ID),
	.RegRead1_ID(RAddr1_ID),
	.Tuse_RAddr0_ID(Tuse_RAddr0_ID),
	.Tuse_RAddr1_ID(Tuse_RAddr1_ID),
	.MultTypeInstr(MultTypeInstr),
	
	//转发需求部分
	.bypass_ID(ResFromID_ID_to_EX), // 从ID/EX寄存器转发来的数据
	.bypass_EX(ALUOut_EX_to_Mem), // 从EX/Mem寄存器转发来的数据 注意转发只有一个数据源
	.RData0BypassCtrl(RData0BypassCtrl),
	.RData1BypassCtrl(RData1BypassCtrl)
    );
	 
	//////////////////// EX /////////////////////////////////
	wire [2:0] Tuse_RAddr0_EX_to_Mem, Tuse_RAddr1_EX_to_Mem, Tnew_WAddr_EX_to_Mem;
	wire [4:0] ReadAddr0_EX_to_Mem, ReadAddr1_EX_to_Mem, RegWriteAddr_EX_to_Mem;
	wire [31:0] PC_EX_to_Mem, DMWriteData_EX_to_Mem, ALUOut_EX_to_Mem;
	wire [59:0] InstrType_EX_to_Mem;
	EX EX(
    .RAddr0_ID_to_EX(ReadAddr0_ID_to_EX),
    .RAddr1_ID_to_EX(ReadAddr1_ID_to_EX),
    .RegWriteAddr_ID_to_EX(RegWriteAddr_ID_to_EX), //非指令中Rd，而是真实的需写入的GPR地址
    .Shamt_ID_to_EX(Shamt_ID_to_EX),
    .imm32_ID_to_EX(imm32_ID_to_EX),
	.InstrType_ID_to_EX(InstrType_ID_to_EX),
	.RAddr0Data_ID_to_EX(Data0_ID_to_EX),
	.RAddr1Data_ID_to_EX(Data1_ID_to_EX),
    .ResFromID_ID_to_EX(ResFromID_ID_to_EX),
	.PC_ID_to_EX(PC_ID_to_EX),
	.Tuse_RAddr0_ID_to_EX(Tuse_RAddr0_ID_to_EX),
	.Tuse_RAddr1_ID_to_EX(Tuse_RAddr1_ID_to_EX),
	.Tnew_WAddr_ID_to_EX(Tnew_WAddr_ID_to_EX),
	.Start_ID_to_EX(Start_ID_to_EX),
	.clk(clk),
    .reset(reset),
	
	.PC_EX_to_Mem(PC_EX_to_Mem),
	.RAddr0_EX_to_Mem(ReadAddr0_EX_to_Mem),
    .RAddr1_EX_to_Mem(ReadAddr1_EX_to_Mem),
    .RegWriteAddr_EX_to_Mem(RegWriteAddr_EX_to_Mem),
	.InstrType_EX_to_Mem(InstrType_EX_to_Mem),
	.ALUOut_EX_to_Mem(ALUOut_EX_to_Mem),
	.DMWriteData_EX_to_Mem(DMWriteData_EX_to_Mem), //待写入DM的数据
	.Tuse_RAddr0_EX_to_Mem(Tuse_RAddr0_EX_to_Mem),
	.Tuse_RAddr1_EX_to_Mem(Tuse_RAddr1_EX_to_Mem),
	.Tnew_WAddr_EX_to_Mem(Tnew_WAddr_EX_to_Mem),
	
	// 给冲突处理单元的数据
	.RAddr0_EX(RAddr0_EX),
	.RAddr1_EX(RAddr1_EX),
	.RegWriteAddr_EX(RegWriteAddr_EX),
	.Tuse_RAddr0_EX(Tuse_RAddr0_EX),
	.Tuse_RAddr1_EX(Tuse_RAddr1_EX),
	.Tnew_WAddr_EX(Tnew_WAddr_EX),
	.MultBusy(MultBusy),
	
	//转发需求部分
	.bypass_EX(ALUOut_EX_to_Mem),  //从EX/Mem转发来的
	.bypass_Mem(RegWriteData_Mem_to_WB), //从Mem/WB转发来的
	.ALUIn0BypassCtrl(ALUIn0BypassCtrl),
	.ALUIn1BypassCtrl(ALUIn1BypassCtrl),
	.DMWriteDataBypassCtrl(DMWriteDataBypassCtrl_EX)
    );
	
	////////////////////// Mem ////////////////////////////
	wire [2:0] Tuse_RAddr0_Mem_to_WB, Tuse_RAddr1_Mem_to_WB, Tnew_WAddr_Mem_to_WB;
	wire [31:0] PC_Mem_to_WB, RegWriteData_Mem_to_WB;
	//wire [4:0] RegWriteAddr_Mem_to_WB;
	Mem Mem(
	.RAddr0_EX_to_Mem(ReadAddr0_EX_to_Mem),
    .RAddr1_EX_to_Mem(ReadAddr1_EX_to_Mem),
    .RegWriteAddr_EX_to_Mem(RegWriteAddr_EX_to_Mem),
	.InstrType_EX_to_Mem(InstrType_EX_to_Mem),
	.ALUOut_EX_to_Mem(ALUOut_EX_to_Mem),
	.DMWriteData_EX_to_Mem(DMWriteData_EX_to_Mem), //待写入DM的数据
	.PC_EX_to_Mem(PC_EX_to_Mem),
	.Tuse_RAddr0_EX_to_Mem(Tuse_RAddr0_EX_to_Mem),
	.Tuse_RAddr1_EX_to_Mem(Tuse_RAddr1_EX_to_Mem),
	.Tnew_WAddr_EX_to_Mem(Tnew_WAddr_EX_to_Mem),
	.clk(clk),
    .reset(reset),
	
	.RegWriteData_Mem_to_WB(RegWriteData_Mem_to_WB),
	.RegWriteAddr_Mem_to_WB(RegWriteAddr_Mem_to_WB),
	.PC_Mem_to_WB(PC_Mem_to_WB),
	//.RegWriteEn(RegWriteEn),
	.Tuse_RAddr0_Mem_to_WB(Tuse_RAddr0_Mem_to_WB),
	.Tuse_RAddr1_Mem_to_WB(Tuse_RAddr1_Mem_to_WB),
	.Tnew_WAddr_Mem_to_WB(Tnew_WAddr_Mem_to_WB),
	
	// 冲突处理单元信号
	.RAddr0_Mem(RAddr0_Mem),
    .RAddr1_Mem(RAddr1_Mem),
    .RegWriteAddr_Mem(RegWriteAddr_Mem),
	.Tuse_RAddr0_Mem(Tuse_RAddr0_Mem),
	.Tuse_RAddr1_Mem(Tuse_RAddr1_Mem),
	.Tnew_WAddr_Mem(Tnew_WAddr_Mem),
	
	//转发需求部分
	.bypass_Mem(RegWriteData_Mem_to_WB), //从Mem/WB转发来的
	.DMWriteDataBypassCtrl(DMWriteDataBypassCtrl_Mem)
    );
endmodule
