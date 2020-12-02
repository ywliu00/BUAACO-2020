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
module EX(
    input wire [4:0] RAddr0_ID_to_EX,
    input wire [4:0] RAddr1_ID_to_EX,
    input wire [4:0] RegWriteAddr_ID_to_EX, //非指令中Rd，而是真实的需写入的GPR地址
    input wire [4:0] Shamt_ID_to_EX,
    input wire [31:0] imm32_ID_to_EX,
	input wire [59:0] InstrType_ID_to_EX,
	input wire [31:0] RAddr0Data_ID_to_EX,
	input wire [31:0] RAddr1Data_ID_to_EX,
	input wire [31:0] ResFromID_ID_to_EX,
	input wire [31:0] PC_ID_to_EX,
	input wire [2:0] Tuse_RAddr0_ID_to_EX,
	input wire [2:0] Tuse_RAddr1_ID_to_EX,
	input wire [2:0] Tnew_WAddr_ID_to_EX,
	input wire [31:0] bypass_EX,  //从EX/Mem转发来的
	input wire [31:0] bypass_Mem, //从Mem/WB转发来的
	input wire [1:0] ALUIn0BypassCtrl,
	input wire [1:0] ALUIn1BypassCtrl,
	input wire DMWriteDataBypassCtrl, //三个转发控制信号
	input wire clk,
    input wire reset,
	
	output reg [31:0] PC_EX_to_Mem,
	output reg [4:0] RAddr0_EX_to_Mem,
    output reg [4:0] RAddr1_EX_to_Mem,
    output reg [4:0] RegWriteAddr_EX_to_Mem,
	output reg [59:0] InstrType_EX_to_Mem,
	output reg [31:0] ALUOut_EX_to_Mem,
	output reg [31:0] DMWriteData_EX_to_Mem, //待写入DM的数据
	output reg [2:0] Tuse_RAddr0_EX_to_Mem,
	output reg [2:0] Tuse_RAddr1_EX_to_Mem,
	output reg [2:0] Tnew_WAddr_EX_to_Mem,
	
	// 给冲突处理单元的数据
	output wire [4:0] RAddr0_EX,
	output wire [4:0] RAddr1_EX,
	output wire [4:0] RegWriteAddr_EX,
	output wire [2:0] Tuse_RAddr0_EX,
	output wire [2:0] Tuse_RAddr1_EX,
	output wire [2:0] Tnew_WAddr_EX
    );
	wire [59:0] InstrType;
	wire [31:0] ALUIn0, ALUIn1, ALURes_wire, ALUOut_wire,
	            ALUIn0_bypass, ALUIn1_bypass;
	wire ALUIn1_Src; //为0则取RtData，为1则取32位立即数
    wire [2:0] ALUOp, Tuse_RAddr0_wire, Tuse_RAddr1_wire, Tnew_WAddr_wire;
	
	assign InstrType = InstrType_ID_to_EX;
	assign Tuse_RAddr0_wire = (Tuse_RAddr0_ID_to_EX > 0) ? Tuse_RAddr0_ID_to_EX - 3'b001 : Tuse_RAddr0_ID_to_EX;
	assign Tuse_RAddr1_wire = (Tuse_RAddr1_ID_to_EX > 0) ? Tuse_RAddr1_ID_to_EX - 3'b001 : Tuse_RAddr1_ID_to_EX;
	assign Tnew_WAddr_wire = (Tnew_WAddr_ID_to_EX > 0) ? Tnew_WAddr_ID_to_EX - 3'b001 : Tnew_WAddr_ID_to_EX;
	
	ALUOpDecoder ALUOpDecoder(
	.InstrType(InstrType),
    .ALUIn1Src(ALUIn1_Src),
    .ALUOp(ALUOp));
	
	//ALUIn0 若用于左移，则只有最后5位有效，这个功能在ID写过了
	
	///////////////////// ALU入口寄存器值转发 /////////////////////////////
	assign ALUIn0 = RAddr0Data_ID_to_EX; //正常数据通路
	assign ALUIn0_bypass = (ALUIn0BypassCtrl == `ALUIn0_from_ALUIn0) ? ALUIn0 :
	                       (ALUIn0BypassCtrl == `ALUIn0_from_EX) ? bypass_EX :
						   (ALUIn0BypassCtrl == `ALUIn0_from_Mem) ? bypass_Mem :
	                                                                            32'h1234_ABCD; //Err Signal
	assign ALUIn1 = RAddr1Data_ID_to_EX; //正常数据通路
	assign ALUIn1_bypass = (ALUIn1BypassCtrl == `ALUIn1_from_ALUIn1) ? ALUIn1 :
	                       (ALUIn1BypassCtrl == `ALUIn1_from_EX) ? bypass_EX :
						   (ALUIn1BypassCtrl == `ALUIn1_from_Mem) ? bypass_Mem :
						                                                        32'h1234_ABCD; //Err Signal
	
	///////////////////// DM待写入数据转发 /////////////////////////////
	wire [31:0] DMWriteData_bypass;
	// assign DMWriteData_bypass = (DMWriteDataBypassCtrl == `DMWriteData_from_ALUIn1) ? ALUIn1 :
	//                             (DMWriteDataBypassCtrl == `DMWriteData_from_WB) ? bypass_Mem :
	// 							                                                               32'h1234_ABCD;
	assign DMWriteData_bypass = ALUIn1_bypass;
	
	//此次DM待写入数据暂不考虑使用前面已转发过的ALUIn1_bypass的数据，而是
	//重新从原始数据开始转发，保证两次转发之间的独立性
	
	//////////////////// ALU入口2的寄存器值与立即数的选择 //////////////////
	wire [31:0] ALUIn1_Data;
	assign ALUIn1_Data = (ALUIn1_Src) ? imm32_ID_to_EX : ALUIn1_bypass;
	///////////////////////////////////////////////////////
	ALU ALU(
	.In0(ALUIn0_bypass),
    .In1(ALUIn1_Data),
	.ALUOp(ALUOp),
    .Res(ALURes_wire));
	
	assign ALUOut_wire = (Tnew_WAddr_wire == 0 && RegWriteAddr_ID_to_EX != 5'd0) ? ResFromID_ID_to_EX : ALURes_wire;
	//若在ID级产生了结果，则Tnew为0，在这里并入数据通路
	
	/////////////////// 给冲突处理单元的数据 /////////////////////////
	assign RAddr0_EX = RAddr0_ID_to_EX;
	assign RAddr1_EX = RAddr1_ID_to_EX;
	assign RegWriteAddr_EX = RegWriteAddr_ID_to_EX;
	assign Tuse_RAddr0_EX = Tuse_RAddr0_wire;
	assign Tuse_RAddr1_EX = Tuse_RAddr1_wire;
	assign Tnew_WAddr_EX = Tnew_WAddr_wire;
	
	///////////////////// 流水线寄存器 ///////////////////////////////
	always@(posedge clk)
	begin
		if(reset)
		begin
			RAddr0_EX_to_Mem <= 32'd0;
			RAddr1_EX_to_Mem <= 32'd0;
			RegWriteAddr_EX_to_Mem <= 32'd0;
			InstrType_EX_to_Mem <= `inst_sll;
			ALUOut_EX_to_Mem <= 32'd0;
			DMWriteData_EX_to_Mem <= 32'd0;
			PC_EX_to_Mem <= 32'h0000_3000;
			Tuse_RAddr0_EX_to_Mem <= 3'b111;
			Tuse_RAddr1_EX_to_Mem <= 3'b111;
			Tnew_WAddr_EX_to_Mem <= 3'b000;
		end
		else
		begin
			RAddr0_EX_to_Mem <= RAddr0_ID_to_EX;
			RAddr1_EX_to_Mem <= RAddr1_ID_to_EX;
			RegWriteAddr_EX_to_Mem <= RegWriteAddr_ID_to_EX; //写回地址
			InstrType_EX_to_Mem <= InstrType;
			ALUOut_EX_to_Mem <= ALUOut_wire;
			DMWriteData_EX_to_Mem <= DMWriteData_bypass;
			PC_EX_to_Mem <= PC_ID_to_EX;
			Tuse_RAddr0_EX_to_Mem <= Tuse_RAddr0_wire;
			Tuse_RAddr1_EX_to_Mem <= Tuse_RAddr1_wire;
			Tnew_WAddr_EX_to_Mem <= Tnew_WAddr_wire;
		end
	end

endmodule
