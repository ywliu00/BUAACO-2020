`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:21 11/25/2020 
// Design Name: 
// Module Name:    Mem 
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
module Mem(
	input wire [4:0] RAddr0_EX_to_Mem,
    input wire [4:0] RAddr1_EX_to_Mem,
    input wire [4:0] RegWriteAddr_EX_to_Mem,
	input wire [59:0] InstrType_EX_to_Mem,
	input wire [31:0] ALUOut_EX_to_Mem,
	input wire [31:0] DMWriteData_EX_to_Mem, //待写入DM的数据
	input wire [31:0] PC_EX_to_Mem,
	input wire [2:0] Tuse_RAddr0_EX_to_Mem,
	input wire [2:0] Tuse_RAddr1_EX_to_Mem,
	input wire [2:0] Tnew_WAddr_EX_to_Mem,
	input wire clk,
	input wire reset,
	input wire [31:0] bypass_Mem, //从Mem/WB转发来的
	input wire DMWriteDataBypassCtrl,
	
	output reg [31:0] ALUOut_Mem_to_WB,
	output reg [4:0] RegWriteAddr_Mem_to_WB,
	output reg [31:0] PC_Mem_to_WB,
	//output reg RegWriteEn,
	output reg [2:0] Tuse_RAddr0_Mem_to_WB,
	output reg [2:0] Tuse_RAddr1_Mem_to_WB,
	output reg [2:0] Tnew_WAddr_Mem_to_WB,
	
	output reg [59:0] InstrType_Mem_to_WB,
	output reg [31:0] DMReadData_Mem_to_WB,
	output reg [2:0] DMExtOp_Mem_to_WB,
	output reg LoadInst_Mem_to_WB,
	
	// 冲突处理单元信号
	output wire [4:0] RAddr0_Mem,
    output wire [4:0] RAddr1_Mem,
    output wire [4:0] RegWriteAddr_Mem,
	output wire [2:0] Tuse_RAddr0_Mem,
	output wire [2:0] Tuse_RAddr1_Mem,
	output wire [2:0] Tnew_WAddr_Mem,
	
	// 异常处理信息
	input wire ErrSignal,
	input wire [4:0] ErrStat_EX_to_Mem,
	input wire Err_EX_to_Mem,
	input wire [31:0] CP0RData,
	output wire Err,
	output wire [4:0] ErrStat,
	output wire [31:0] CP0Addr,
	output wire [31:0] CP0WData,
	output wire eretEn,
	
	// 外部设备读写信息
	input wire [31:0] IO_RData,
	output wire [31:0] IO_WData,
	output wire [31:2] IO_Addr,
	output wire IO_En
    );
	wire [59:0] InstrType;
	wire [31:0] DMRead_wire, DMWriteData_bypass;
	wire [2:0] Tuse_RAddr0_wire, Tuse_RAddr1_wire, Tnew_WAddr_wire;
	wire DMWriteEn;//, RegWriteEn_wire;
	
	assign InstrType = InstrType_EX_to_Mem;
	assign DMWriteEn = (`sw || `sh || `sb) ? 1 : 0;
	assign Tuse_RAddr0_wire = (Tuse_RAddr0_EX_to_Mem > 0) ? Tuse_RAddr0_EX_to_Mem - 3'b001 : Tuse_RAddr0_EX_to_Mem;
	assign Tuse_RAddr1_wire = (Tuse_RAddr1_EX_to_Mem > 0) ? Tuse_RAddr1_EX_to_Mem - 3'b001 : Tuse_RAddr1_EX_to_Mem;
	assign Tnew_WAddr_wire = (Tnew_WAddr_EX_to_Mem > 0) ? Tnew_WAddr_EX_to_Mem - 3'b001 : Tnew_WAddr_EX_to_Mem;
	
	////////////////////// DM待写入数据从WB的转发 //////////////////////////
	
	assign DMWriteData_bypass = (DMWriteDataBypassCtrl == `DMWriteData_from_DMWD) ? DMWriteData_EX_to_Mem :
	                            (DMWriteDataBypassCtrl == `DMWriteData_from_WB) ? bypass_Mem :
								                                                               32'h1234_ABCD;
	
	///////////////////////// ByteEn信号 /////////////////////////////
	wire [1:0] Addr2;
	wire [3:0] ByteEn;
	assign Addr2 = ALUOut_EX_to_Mem[1:0];
	
	ByteEnExtend ByteEnModule(
    .InstrType(InstrType),
    .Addr2(Addr2),
    .BE(ByteEn));
	/////////////////////////////// DM /////////////////////////////////
	wire [3:0] ByteEnErr;
	assign ByteEnErr = ByteEn & ~{4{ErrSignal}};
	
	DM DM(
	.Addr(ALUOut_EX_to_Mem),
    .WData(DMWriteData_bypass),
    .MemWrite(DMWriteEn),//写使能信号
    .clk(clk),
    .reset(reset),
	.WritePC(PC_EX_to_Mem),
	.ByteEn(ByteEnErr),
    .RData(DMRead_wire));
	
	//assign ALUOut_wire = ALUOut_EX_to_Mem;
	//assign RegWriteEn_wire = (`addu || `subu || `ori || `lw || `lui ||
	//                          `jal || `sll || `addiu || `jalr ) ? 1 : 0;
	
	////////////////////////// I/O Detect //////////////////////
	IOAddrDetect IOAddrDetect(
    .Addr(ALUOut_EX_to_Mem),
	.Err(ErrSignal),
    .IO_En(IO_En)
    );
	assign IO_WData = DMWriteData_bypass;
	assign IO_Addr = ALUOut_EX_to_Mem[31:2];
	
	///////////////////// DM Ext Op ///////////////////
	wire [2:0] DMExtOp_wire;
	DMExtendOp DMExtOp(
	.InstrType(InstrType),
    .Op(DMExtOp_wire));
		
	///////////////// 冲突处理单元信号 /////////////////////
	assign RAddr0_Mem = RAddr0_EX_to_Mem;
    assign RAddr1_Mem = RAddr1_EX_to_Mem;
    assign RegWriteAddr_Mem = RegWriteAddr_EX_to_Mem;
	assign Tuse_RAddr0_Mem = Tuse_RAddr0_wire;
	assign Tuse_RAddr1_Mem = Tuse_RAddr1_wire;
	assign Tnew_WAddr_Mem = Tnew_WAddr_wire;
	
	////////////////// Error Detect ////////////////
	//wire Err;
	
	MemErrDect MemErrDet(
    .InstrType(InstrType),
    .Err_EX_to_Mem(Err_EX_to_Mem),
    .ErrStat_EX_to_Mem(ErrStat_EX_to_Mem),
    .MemRWAddr(ALUOut_EX_to_Mem),
    .Err(Err),
    .ErrStat(ErrStat));
	
	//////////////////// Coprocessor Data ////////////////////////
	wire [31:0] GRFWriteData;
	assign CP0Addr = DMWriteData_EX_to_Mem; 
	//从ID级一路传下来的Rd值（见AT模块）
	assign CP0WData = ALUOut_EX_to_Mem;
	//从ID级一路传下来的Rt值（见AT模块）
	assign GRFWriteData = (`mfc0) ? CP0RData : 
						  (IO_En) ? IO_RData : DMRead_wire;
	assign eretEn = `eret ? 1 : 0;
	////////////////流水线寄存器//////////////////
	always@(posedge clk)
	begin
		if(reset)
		begin
			RegWriteAddr_Mem_to_WB <= 5'd0;
			PC_Mem_to_WB <= 32'h0000_3000;
			ALUOut_Mem_to_WB <= 32'd0;
			//RegWriteEn <= 1'b0;
			Tuse_RAddr0_Mem_to_WB <= 3'b111;
			Tuse_RAddr1_Mem_to_WB <= 3'b111;
			Tnew_WAddr_Mem_to_WB <= 3'b000;
			InstrType_Mem_to_WB <= `inst_sll;
			DMReadData_Mem_to_WB <= 32'h1234_ABCD;
			DMExtOp_Mem_to_WB <= 3'b000;
			LoadInst_Mem_to_WB <= 1'b0;
		end
		else
		begin
			RegWriteAddr_Mem_to_WB <= RegWriteAddr_EX_to_Mem;
			PC_Mem_to_WB <= PC_EX_to_Mem;
			ALUOut_Mem_to_WB <= ALUOut_EX_to_Mem;
			//RegWriteEn <= RegWriteEn_wire;
			Tuse_RAddr0_Mem_to_WB <= Tuse_RAddr0_wire;
			Tuse_RAddr1_Mem_to_WB <= Tuse_RAddr1_wire;
			Tnew_WAddr_Mem_to_WB <= Tnew_WAddr_wire;
			InstrType_Mem_to_WB <= InstrType_EX_to_Mem;
			DMReadData_Mem_to_WB <= GRFWriteData;
			DMExtOp_Mem_to_WB <= DMExtOp_wire;
			LoadInst_Mem_to_WB <= `lw || `lh || `lb || `lbu || `lhu;
		end
	end

endmodule
