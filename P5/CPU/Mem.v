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
	input wire [4:0] Rs_EX_to_Mem,
    input wire [4:0] Rt_EX_to_Mem,
    input wire [4:0] RegWriteAddr_EX_to_Mem,
	input wire [59:0] InstrType_EX_to_Mem,
	input wire [31:0] ALUOut_EX_to_Mem,
	input wire [31:0] DMWriteData_EX_to_Mem, //待写入DM的数据
	input wire [31:0] PC_EX_to_Mem,
	input wire clk,
	input wire reset,
	
	output reg [31:0] ALUOut_Mem_to_WB,
	output reg [31:0] DMRead_Mem_to_WB,
	output reg [31:0] RegWriteData_Mem_to_WB,
	output reg [4:0] RegWriteAddr_Mem_to_WB,
	output reg [31:0] PC_Mem_to_WB,
	output reg RegWriteEn
    );
	wire [59:0] InstrType;
	wire [31:0] DMRead_wire, DMWriteData_bypass, RegWriteData_wire;
	wire DMWriteEn, RegWriteEn_wire;
	assign DMWriteData_bypass = DMWriteData_EX_to_Mem;
	assign InstrType = InstrType_EX_to_Mem;
	assign DMWriteEn = (`sw) ? 1 : 0;
	
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
	                          `jal || `sll) ? 1 : 0;
	
	always@(posedge clk)
	begin
		if(reset)
		begin
			ALUOut_Mem_to_WB <= 32'd0;
			DMRead_Mem_to_WB <= 32'd0;
			RegWriteAddr_Mem_to_WB <= 5'd0;
			PC_Mem_to_WB <= 32'h0000_3000;
			RegWriteData_Mem_to_WB <= 32'd0;
			RegWriteEn <= 1'b0;
		end
		else
		begin
			ALUOut_Mem_to_WB <= ALUOut_EX_to_Mem;
			DMRead_Mem_to_WB <= DMRead_wire;
			RegWriteAddr_Mem_to_WB <= RegWriteAddr_EX_to_Mem;
			PC_Mem_to_WB <= PC_EX_to_Mem;
			RegWriteData_Mem_to_WB <= RegWriteData_wire;
			RegWriteEn <= RegWriteEn_wire;
		end
	end

endmodule
