`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:34:42 11/24/2020 
// Design Name: 
// Module Name:    Ex 
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
module Ex(
    input wire [4:0] Rs_ID_to_EX,
    input wire [4:0] Rt_ID_to_EX,
    input wire [4:0] RegWriteAddr_ID_to_EX, //非指令中Rd，而是真实的需写入的GPR地址
    input wire [4:0] Shamt_ID_to_EX,
    input wire [32:0] imm32_ID_to_EX,
	input wire [59:0] InstrType_ID_to_EX,
	input wire [31:0] RsData_ID_to_EX,
	input wire [31:0] RtData_ID_to_EX,
	input wire [31:0] luiRes_ID_to_EX,
	input wire [31:0] PC_ID_to_EX,
	input wire clk,
    input wire reset,
	output reg [31:0] PC_EX_to_Mem,
	output reg [4:0] Rs_EX_to_Mem,
    output reg [4:0] Rt_EX_to_Mem,
    output reg [4:0] RegWriteAddr_EX_to_Mem,
	output reg [59:0] InstrType_EX_to_Mem,
	output reg [31:0] ALUOut_EX_to_Mem,
	output reg [31:0] DMWriteData_EX_to_Mem //待写入DM的数据
    );
	wire [59:0] InstrType;
	wire [31:0] ALUIn0, ALUIn1, ALURes_wire, ALUOut_wire,
	            ALUIn0_bypass, ALUIn1_bypass;
	wire ALUIn1_Src; //为0则取RtData，为1则取32位立即数
    wire [2:0] ALUOp;
	
	ALUOpDecoder ALUOpDecoder(
	.InstrType(InstrType),
    .ALUIn1Src(ALUIn1_Src),
    .ALUOp(ALUOp));
	
	//ALUIn0 若用于左移，则只有最后5位有效，这个功能还没写
	assign ALUIn0_bypass = RsData_ID_to_EX;
	assign ALUIn0 = ALUIn0_bypass;
	assign ALUIn1_bypass = RtData_ID_to_EX;
	assign ALUIn1 = ALUIn1_Src ? imm32_ID_to_EX : ALUIn1_bypass;
	ALU ALU(
	.In0(ALUIn0),
    .In1(ALUIn1),
	.ALUOp(ALUOp),
    .InstrType(InstrType),
    .Res(ALURes_wire));
	
	assign ALUOut_wire = (`lui) ? luiRes_ID_wo_EX : ALURes_wire;
	//lui在ID级提前单独处理，因此在这里直接引用其值
	
	always@(posedge clk)
	begin
		if(reset)
		begin
			Rs_EX_to_Mem <= 32'd0;
			Rt_EX_to_Mem <= 32'd0;
			RegWriteAddr_EX_to_Mem <= 32'd0;
			InstrType_EX_to_Mem <= `sll;
			ALUOut_EX_to_Mem <= 32'd0;
			DMWriteData_EX_to_Mem <= 32'd0;
			PC_EX_to_Mem <= 32'h0000_3000;
		end
		else
		begin
			Rs_EX_to_Mem <= Rs_ID_to_EX;
			Rt_EX_to_Mem <= Rt_ID_to_EX;
			RegWriteAddr_EX_to_Mem <= Rd_ID_to_EX; //写回地址
			InstrType_EX_to_Mem <= InstrType;
			ALUOut_EX_to_Mem <= ALUOut_wire;
			DMWriteData_EX_to_Mem <= ALUIn1_bypass; //ALUIn1原本接受的数据
			PC_EX_to_Mem <= PC_ID_to_EX;
		end
	end

endmodule
