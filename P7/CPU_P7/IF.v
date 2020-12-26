`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:58:52 11/22/2020 
// Design Name: 
// Module Name:    IF 
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
module IF(
    input wire [31:0] branch_addr32,
    input wire [31:0] jump_addr32,
    input wire branch,
    input wire jump,
	input wire Stall,
	input wire clk,
	input wire reset,
	input wire ErrSignal,
	input wire eretEn,
	input wire [31:0] EPCData,
    output reg [31:0] PC_4,
	output reg [31:0] Instr,
	output reg [31:0] PC,
	output reg [4:0] ErrStat_IF_to_ID,
	output reg Err_IF_to_ID
    );
	 wire [31:0] PC_wire, NextPC_wire, PC_4_wire, 
	             Instr_wire, OpAddr_wire;
	wire [4:0] ErrStat_wire;
	wire Err_wire;
    assign OpAddr_wire = (PC_wire - 32'h0000_3000) >> 2;
	 
	NPC NPC(
	.PC(PC_wire),
    .branch(branch),
	.Stall(Stall),
    .jump(jump),
    .branch_addr(branch_addr32),
    .jump_addr(jump_addr32),
    .NextPC(NextPC_wire),
	.PC_4(PC_4_wire),
	.ErrSignal(ErrSignal),
	.eretEn(eretEn),
	.EPCData(EPCData));   //PC永远存的是下一条指令地址，因此Stall时NPC输出当前PC只即可
	 
	ProgramCounter PCnt(
	.clk(clk),
    .reset(reset),
    .NPC(NextPC_wire),
    .PC(PC_wire));
	 
	IM IM(
	.OpAddr(OpAddr_wire),
    .Instr(Instr_wire));
	
	////////////////////// Error Detect ///////////////
	assign Err_wire = (PC_wire[1:0] != 2'b00 || PC_wire > 32'h0000_4ffc || PC_wire < 32'h0000_3000) ? 1 : 0;
	assign ErrStat_wire = Err_wire ? `AdEL : 5'd31;
	/////////////////////////////////////////////////
	 
	 always@(posedge clk)
	 begin
		if(reset || ErrSignal || eretEn)
		begin
			PC_4 <= ErrSignal ? 32'h0000_4184: eretEn ? EPCData + 32'd4 : 32'h0000_3004;
			Instr = 32'h0000_0000;
			PC <= ErrSignal ? 32'h0000_4180 : eretEn ? EPCData : 32'h0000_3000;
			ErrStat_IF_to_ID <= 5'd31;
			Err_IF_to_ID <= 0;
		end
		else if(Stall)
		begin
			PC_4 <= PC_4;
			Instr <= Instr;
			PC <= PC;        //冻结IF/ID寄存器
			ErrStat_IF_to_ID <= 5'd31;
			Err_IF_to_ID <= 0;
		end
		else
		begin
			PC_4 <= PC_4_wire;
			Instr <= Err_wire ? 32'h0000_0000 : Instr_wire; //出错就清成nop
			PC <= {PC_wire[31:2], 2'b0};
			ErrStat_IF_to_ID <= ErrStat_wire;
			Err_IF_to_ID <= Err_wire;
		end
	 end

endmodule
