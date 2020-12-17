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
module CPU(
    input wire clk,
    input wire reset,
	output wire [31:2] PrAddr,
	input wire [31:0] PrRD,
	output wire [31:0] PrWD,
	output wire PrWE,
	input wire [7:2] HWInt,
	output wire [31:0] CurAddr
    );
	wire Stall, ErrSignal;
	
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
	wire [4:0] ErrStat_IF_to_ID;
	wire branch, jump, Err_IF_to_ID, eretEn;
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
	.PC(PC_IF_to_ID),
	
	.ErrSignal(ErrSignal),
	.ErrStat_IF_to_ID(ErrStat_IF_to_ID),
	.Err_IF_to_ID(Err_IF_to_ID),
	.eretEn(eretEn),
	.EPCData(Data_CP0_to_Mem)
    );
	
	////////////////////// ID ////////////////////////////
	wire Start_ID_to_EX, Err_ID_to_EX;//RegWriteEn;
	wire [2:0] Tuse_RAddr0_ID_to_EX, Tuse_RAddr1_ID_to_EX, Tnew_WAddr_ID_to_EX;
	wire [4:0] ReadAddr0_ID_to_EX, ReadAddr1_ID_to_EX, RegWriteAddr_ID_to_EX, 
	           Shamt_ID_to_EX, ErrStat_ID_to_EX, Rd_CP0Addr_ID_to_EX;
	wire [31:0] RegWriteData, RegWritePC, imm32_ID_to_EX, Data0_ID_to_EX,
	            Data1_ID_to_EX, ResFromID_ID_to_EX, PC_ID_to_EX,
				RegWriteData_Mem_to_WB;
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
	.Rd_CP0Addr_ID_to_EX(Rd_CP0Addr_ID_to_EX),
	
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
	.RData1BypassCtrl(RData1BypassCtrl),
	
	.ErrSignal(ErrSignal),
	.ErrStat_IF_to_ID(ErrStat_IF_to_ID),
	.Err_IF_to_ID(Err_IF_to_ID),
	.ErrStat_ID_to_EX(ErrStat_ID_to_EX),
	.Err_ID_to_EX(Err_ID_to_EX),
	.eretEn(eretEn)
    );
	 
	//////////////////// EX /////////////////////////////////
	wire Err_EX_to_Mem;
	wire [2:0] Tuse_RAddr0_EX_to_Mem, Tuse_RAddr1_EX_to_Mem, Tnew_WAddr_EX_to_Mem;
	wire [4:0] ReadAddr0_EX_to_Mem, ReadAddr1_EX_to_Mem, 
			   RegWriteAddr_EX_to_Mem, ErrStat_EX_to_Mem, Rd_CP0Addr_EX_to_Mem;
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
	.Rd_CP0Addr_ID_to_EX(Rd_CP0Addr_ID_to_EX),
	.eretEn(eretEn),
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
	.Rd_CP0Addr_EX_to_Mem(Rd_CP0Addr_EX_to_Mem),
	
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
	.DMWriteDataBypassCtrl(DMWriteDataBypassCtrl_EX),
	
	.ErrSignal(ErrSignal),
	.ErrStat_ID_to_EX(ErrStat_ID_to_EX),
	.Err_ID_to_EX(Err_ID_to_EX),
	.ErrStat_EX_to_Mem(ErrStat_EX_to_Mem),
	.Err_EX_to_Mem(Err_EX_to_Mem)
    );
	
	////////////////////// Mem ////////////////////////////
	wire LoadInst_Mem_to_WB, Err_Mem_to_C0;
	wire [2:0] Tuse_RAddr0_Mem_to_WB, Tuse_RAddr1_Mem_to_WB, 
				Tnew_WAddr_Mem_to_WB, DMExtOp_Mem_to_WB;
	wire [31:0] PC_Mem_to_WB, ALUOut_Mem_to_WB, DMReadData_Mem_to_WB, 
				DMDataExtended, Data_Mem_to_CP0, Data_CP0_to_Mem,
				CP0Addr_Mem_to_CP0;
	wire [59:0] InstrType_Mem_to_WB;
	wire [4:0] ErrStat_Mem_to_C0;
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
	.Rd_CP0Addr_EX_to_Mem(Rd_CP0Addr_EX_to_Mem),
	.clk(clk),
    .reset(reset),
	
	.InstrType_Mem_to_WB(InstrType_Mem_to_WB),
	.DMReadData_Mem_to_WB(DMReadData_Mem_to_WB),
	.DMExtOp_Mem_to_WB(DMExtOp_Mem_to_WB),
	.LoadInst_Mem_to_WB(LoadInst_Mem_to_WB),
	
	.ALUOut_Mem_to_WB(ALUOut_Mem_to_WB),
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
	.DMWriteDataBypassCtrl(DMWriteDataBypassCtrl_Mem),
	
	.ErrSignal(ErrSignal),
	.ErrStat_EX_to_Mem(ErrStat_EX_to_Mem),
	.Err_EX_to_Mem(Err_EX_to_Mem),
	.Err(Err_Mem_to_C0),
	.ErrStat(ErrStat_Mem_to_C0),
	.CP0RData(Data_CP0_to_Mem),
	.CP0Addr(CP0Addr_Mem_to_CP0),
	.CP0WData(Data_Mem_to_CP0),
	.eretEn(eretEn),
	
	.IO_RData(PrRD),//CPU从外部读
	.IO_WData(PrWD),//CPU向外部写
	.IO_Addr(PrAddr),// I/O地址
	.IO_En(PrWE)// I/O写使能（读无需使能）
    );
	
	DMOutExtend DMOutExt(
    .Addr2(ALUOut_Mem_to_WB[1:0]),
    .DataIn(DMReadData_Mem_to_WB),
    .Op(DMExtOp_Mem_to_WB),
    .DataOut(DMDataExtended)
    );
				
	assign RegWriteData_Mem_to_WB = LoadInst_Mem_to_WB ? DMDataExtended : ALUOut_Mem_to_WB;
	assign CurAddr = PC_EX_to_Mem;
	
	/////////////// Coprocessor 0 /////////////////////
	CP0 CP0(
	.clk(clk),
	.reset(reset),
    .InstrType(InstrType_EX_to_Mem),
	.WBInstrType(InstrType_Mem_to_WB),
    .PCAddr(PC_EX_to_Mem),
	.DataIn(Data_Mem_to_CP0),
	.CP0Addr(CP0Addr_Mem_to_CP0),
	.Err(Err_Mem_to_C0),
	.ErrStat(ErrStat_Mem_to_C0),
	.HWInt(HWInt),
	.ErrSignal(ErrSignal),
	.DataOut(Data_CP0_to_Mem)
    );
	
endmodule
