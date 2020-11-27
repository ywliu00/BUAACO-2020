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
	
	output reg [31:0] RegWriteData_Mem_to_WB,
	output reg [4:0] RegWriteAddr_Mem_to_WB,
	output reg [31:0] PC_Mem_to_WB,
	output reg RegWriteEn,
	output reg [2:0] Tuse_RAddr0_Mem_to_WB,
	output reg [2:0] Tuse_RAddr1_Mem_to_WB,
	output reg [2:0] Tnew_WAddr_Mem_to_WB,
	
	// 冲突处理单元信号
	output wire [4:0] RAddr0_Mem,
    output wire [4:0] RAddr1_Mem,
    output wire [4:0] RegWriteAddr_Mem,
	output wire [2:0] Tuse_RAddr0_Mem,
	output wire [2:0] Tuse_RAddr1_Mem,
	output wire [2:0] Tnew_WAddr_Mem
    );
	wire [59:0] InstrType;
	wire [31:0] DMRead_wire, DMWriteData_bypass, RegWriteData_wire;
	wire [2:0] Tuse_RAddr0_wire, Tuse_RAddr1_wire, Tnew_WAddr_wire;
	wire DMWriteEn, RegWriteEn_wire;
	
	assign InstrType = InstrType_EX_to_Mem;
	assign DMWriteEn = (`sw) ? 1 : 0;
	assign Tuse_RAddr0_wire = (Tuse_RAddr0_EX_to_Mem > 0) ? Tuse_RAddr0_EX_to_Mem - 3'b001 : Tuse_RAddr0_EX_to_Mem;
	assign Tuse_RAddr1_wire = (Tuse_RAddr1_EX_to_Mem > 0) ? Tuse_RAddr1_EX_to_Mem - 3'b001 : Tuse_RAddr1_EX_to_Mem;
	assign Tnew_WAddr_wire = (Tnew_WAddr_EX_to_Mem > 0) ? Tnew_WAddr_EX_to_Mem - 3'b001 : Tnew_WAddr_EX_to_Mem;
	
	////////////////////// DM待写入数据从WB的转发 //////////////////////////
	
	assign DMWriteData_bypass = (DMWriteDataBypassCtrl == `DMWriteData_from_DMWD) ? DMWriteData_EX_to_Mem :
	                            (DMWriteDataBypassCtrl == `DMWriteData_from_WB) ? bypass_Mem :
								                                                               32'h1234_ABCD;
	
	////////////////////////////////////////////////////////////////////
	DM DM(
	.Addr(ALUOut_EX_to_Mem),
    .WData(DMWriteData_bypass),
    .MemWrite(DMWriteEn),//写使能信号
    .clk(clk),
    .reset(reset),
	.WritePC(PC_EX_to_Mem),
    .RData(DMRead_wire));
	
	assign RegWriteData_wire = (`lw) ? DMRead_wire : ALUOut_EX_to_Mem;
	assign RegWriteEn_wire = (`addu || `subu || `ori || `lw || `lui ||
	                          `jal || `sll || `addiu) ? 1 : 0;
							  
	///////////////// 冲突处理单元信号 /////////////////////
	assign RAddr0_Mem = RAddr0_EX_to_Mem;
    assign RAddr1_Mem = RAddr1_EX_to_Mem;
    assign RegWriteAddr_Mem = RegWriteAddr_EX_to_Mem;
	assign Tuse_RAddr0_Mem = Tuse_RAddr0_wire;
	assign Tuse_RAddr1_Mem = Tuse_RAddr1_wire;
	assign Tnew_WAddr_Mem = Tnew_WAddr_wire;
	
	////////////////流水线寄存器//////////////////
	always@(posedge clk)
	begin
		if(reset)
		begin
			RegWriteAddr_Mem_to_WB <= 5'd0;
			PC_Mem_to_WB <= 32'h0000_3000;
			RegWriteData_Mem_to_WB <= 32'd0;
			RegWriteEn <= 1'b0;
			Tuse_RAddr0_Mem_to_WB <= 3'b111;
			Tuse_RAddr1_Mem_to_WB <= 3'b111;
			Tnew_WAddr_Mem_to_WB <= 3'b000;
		end
		else
		begin
			RegWriteAddr_Mem_to_WB <= RegWriteAddr_EX_to_Mem;
			PC_Mem_to_WB <= PC_EX_to_Mem;
			RegWriteData_Mem_to_WB <= RegWriteData_wire;
			RegWriteEn <= RegWriteEn_wire;
			Tuse_RAddr0_Mem_to_WB <= Tuse_RAddr0_wire;
			Tuse_RAddr1_Mem_to_WB <= Tuse_RAddr1_wire;
			Tnew_WAddr_Mem_to_WB <= Tnew_WAddr_wire;
		end
	end

endmodule
