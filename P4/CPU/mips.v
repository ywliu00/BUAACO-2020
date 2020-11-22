`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:13:06 11/14/2020 
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
`default_nettype none
module mips(
    input wire clk,
    input wire reset
    );
	 
	 //////////////   Control Signals  ////////////////
	 wire RegWrite, Branch,Jump,Jr,ALUSel,MemWrite,Sign,LShift,Zero;
	 wire [1:0] ALUOp, RegDst;
	 wire [2:0] RegWriteSel;  
	 
	 //////////////   Instruction Fetch Unit  ////////////////
	 wire [31:0] NextPC, PC, Instr;
	 wire [5:0] OpCode, Func;
	 wire [4:0] rs, rt, rd, Shamt;
	 wire [15:0] imm16;
	 wire [25:0] imm26;
	 IFU ifu(.NPC(NextPC),
            .reset(reset),
				.clk(clk),
				.PC(PC),
				.Instr(Instr),
				.OpCode(OpCode),
				.rs(rs),
				.rt(rt),
				.rd(rd),
				.Shamt(Shamt),
				.Func(Func),
				.imm16(imm16),
				.imm26(imm26));
	
	//////////////   General Register File  ////////////////
	wire[31:0] WData, RData0, RData1;
	wire[4:0] WriteAddress;
	assign WriteAddress = (RegDst == 2'b10) ? 5'd31 :
	                      (RegDst == 2'b01) ? rd :
								                          rt;
	assign WData = (RegWriteSel == 3'b011) ? PC_4 : 
	               (RegWriteSel == 3'b010) ? imm32_Shifted : 
						(RegWriteSel == 3'b001) ? MemReadData : 
						                                         ALURes;
	GRF grf(
	 .RAddr0(rs),
    .RAddr1(rt),
    .WAddr(WriteAddress),
    .WriteData(WData),
    .RegWrite(RegWrite),
    .clk(clk),
    .reset(reset),
    .RData0(RData0),
    .RData1(RData1),
	 .PC(PC));
	
	//////////////   Extender  ////////////////
	wire [31:0] imm32;
	Ext16to32 Extender(.imm16(imm16), .Sign(Sign), .imm32(imm32));
	
	//////////////   Left Shifter  ////////////////
	wire [31:0] Shifter_imm32, imm32_Shifted;
	wire [4:0] ShiftBits;
	assign {Shifter_imm32, ShiftBits} = (LShift == 1) ? {RData1, Shamt} : {imm32, 5'd16};
	LShifter Left_Shifter(.imm32(Shifter_imm32),
								 .ShiftBits(ShiftBits),
								 .Res(imm32_Shifted));
	
	//////////////   Arthemetic Logic Unit  ////////////////
	wire [31:0] ALU_InData1, ALURes;
	assign ALU_InData1 = ALUSel ? imm32 : RData1;
	ALU alu(.In0(RData0),
    .In1(ALU_InData1),
    .ALUOp(ALUOp),
    .Zero(Zero),
    .Res(ALURes));
	 
	 //////////////   Data Memory  ////////////////
	 wire [31:0] MemReadData;
	 DM DataMemory(.Addr(ALURes),
    .WData(RData1),
    .MemWrite(MemWrite),
    .clk(clk),
    .reset(reset),
    .RData(MemReadData),
	 .PC(PC));
	 
	 //////////////   NPC  ////////////////
	 wire BranchSIG;
	 wire [31:0] PC_4;
	 assign BranchSIG = Branch & Zero;
	 NPC npc(.PC(PC),
    .imm32(imm32),
    .imm26(imm26),
    .rsData(RData0),
    .branch(BranchSIG),
    .jump(Jump),
	 .jr(Jr),
    .NextPC(NextPC),
    .PC_4(PC_4));
	 
	 //////////////   Controller  ////////////////
	 Controller Ctrl_Unit(
	 .OpCode(OpCode),
	 .rt(rt),
    .Func(Func),
	 .RegWrite(RegWrite),
	 .ALUOp(ALUOp),
	 .Branch(Branch),
	 .Jump(Jump),
	 .Jr(Jr),
	 .RegDst(RegDst),
	 .ALUSel(ALUSel),
	 .MemWrite(MemWrite),
	 .Sign(Sign),
	 .RegWriteSel(RegWriteSel),
	 .LShift(LShift)
	 );

endmodule
