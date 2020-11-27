`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:23 11/27/2020 
// Design Name: 
// Module Name:    BypassController 
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
module BypassController(
	// ID级传来的数据
	input wire [4:0] RAddr0_ID,
	input wire [4:0] RAddr1_ID,
	input wire [2:0] Tuse_RAddr0_ID,
	input wire [2:0] Tuse_RAddr1_ID,
	
	// EX级传来的数据
	input wire [4:0] RAddr0_EX,
	input wire [4:0] RAddr1_EX,
	input wire [4:0] RegWriteAddr_EX,
	input wire [2:0] Tuse_RAddr0_EX,
	input wire [2:0] Tuse_RAddr1_EX,
	input wire [2:0] Tnew_WAddr_EX,
	
	// Mem级传来的数据
	input wire [4:0] RAddr0_Mem,
    input wire [4:0] RAddr1_Mem,
    input wire [4:0] RegWriteAddr_Mem,
	input wire [2:0] Tuse_RAddr0_Mem,
	input wire [2:0] Tuse_RAddr1_Mem,
	input wire [2:0] Tnew_WAddr_Mem,
	
	//WB级传来的数据
	input wire [4:0] RegWriteAddr_WB,
	
	// 输出控制信号
	output wire [1:0] RData0BypassCtrl,
	output wire [1:0] RData1BypassCtrl,//ID级两个
	output wire [1:0] ALUIn0BypassCtrl,
	output wire [1:0] ALUIn1BypassCtrl,
	output wire DMWriteDataBypassCtrl_EX, //EX级三个
	output wire DMWriteDataBypassCtrl_Mem //Mem级一个
    );
	
	//////////////////// ID级RData0转发 /////////////////////
	wire RData0_fromEX, RData0_fromID;
	assign RData0_fromID = (RAddr0_ID != 0) && 
	                       (RAddr0_ID == RegWriteAddr_EX) && 
						   (Tuse_RAddr0_ID == 3'b000) &&
						   (Tnew_WAddr_EX == 3'b000);
	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign RData0_fromEX = (RAddr0_ID != 0) && 
	                       (RAddr0_ID == RegWriteAddr_Mem) && 
						   (Tuse_RAddr0_ID == 3'b000) &&
						   (Tnew_WAddr_Mem == 3'b000);
	assign RData0BypassCtrl = (RData0_fromID) ? `RData0_from_ID :
	                          (RData0_fromEX) ? `RData0_from_EX :
							                                      `RData0_from_RData0;
	// 由近及远搜索转发
	
	//////////////////// ID级RData1转发 /////////////////////
	wire RData1_fromID, RData1_fromEX;
	assign RData1_fromID = (RAddr1_ID != 0) && 
	                       (RAddr1_ID == RegWriteAddr_EX) && 
						   (Tuse_RAddr1_ID == 3'b000) &&
						   (Tnew_WAddr_EX == 3'b000);
	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign RData1_fromEX = (RAddr1_ID != 0) && 
	                       (RAddr1_ID == RegWriteAddr_Mem) && 
						   (Tuse_RAddr1_ID == 3'b000) &&
						   (Tnew_WAddr_Mem == 3'b000);
	assign RData1BypassCtrl = (RData1_fromID) ? `RData1_from_ID :
	                          (RData1_fromEX) ? `RData1_from_EX :
							                                      `RData1_from_RData1;
	// 由近及远搜索转发
	
	//////////////////// EX级ALUIn0转发 /////////////////////
	wire ALUIn0_fromEX, ALUIn0_fromMem;
	assign ALUIn0_fromEX = (RAddr0_EX != 0) && 
	                       (RAddr0_EX == RegWriteAddr_Mem) && 
						   (Tuse_RAddr0_EX == 3'b000) &&
						   (Tnew_WAddr_Mem == 3'b000);
	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign ALUIn0_fromMem = (RAddr0_EX != 0) && 
	                        (RAddr0_EX == RegWriteAddr_WB) && 
						    (Tuse_RAddr0_EX == 3'b000);
	//这里没有检查WB级的Tnew，因为WB级必然已经产生数据，不需要检查
	assign ALUIn0BypassCtrl = (ALUIn0_fromEX) ? `ALUIn0_from_EX :
	                          (ALUIn0_fromMem) ? `ALUIn0_from_Mem :
							                                      `ALUIn0_from_ALUIn0;
	// 由近及远搜索转发
	
	//////////////////// EX级ALUIn1转发 /////////////////////
	wire ALUIn1_fromEX, ALUIn1_fromMem;
	assign ALUIn1_fromEX = (RAddr1_EX != 0) && 
	                       (RAddr1_EX == RegWriteAddr_Mem) && 
						   (Tuse_RAddr1_EX == 3'b000) &&
						   (Tnew_WAddr_Mem == 3'b000);
	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign ALUIn1_fromMem = (RAddr1_EX != 0) && 
	                        (RAddr1_EX == RegWriteAddr_WB) && 
						    (Tuse_RAddr1_EX == 3'b000);
	//这里没有检查WB级的Tnew，因为WB级必然已经产生数据，不需要检查
	assign ALUIn1BypassCtrl = (ALUIn1_fromEX) ? `ALUIn1_from_EX :
	                          (ALUIn1_fromMem) ? `ALUIn1_from_Mem :
							                                      `ALUIn1_from_ALUIn1;
	// 由近及远搜索转发
	
	//////////////////// EX级DMWriteData转发 /////////////////////
	wire DMWriteData_EX_fromMem;

	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign DMWriteData_EX_fromMem = (RAddr1_EX != 0) && 
	                                (RAddr1_EX == RegWriteAddr_WB) && 
						            (Tuse_RAddr1_EX == 3'b000);
	//这里没有检查WB级的Tnew，因为WB级必然已经产生数据，不需要检查
	//注意store类指令需要读取的寄存器是Rt，即RAddr1_EX
	assign DMWriteDataBypassCtrl_EX = (DMWriteData_EX_fromMem) ? `DMWriteData_from_WB :
							                                     `DMWriteData_from_ALUIn1;
	// 由近及远搜索转发
	
	//////////////////// Mem级DMWriteData转发 /////////////////////
	wire DMWriteData_Mem_fromMem;

	//所读寄存器非0，所读寄存器与后续所写寄存器相同，Tuse为0（立即需要），Tnew为0（已经产生）
	assign DMWriteData_Mem_fromMem = (RAddr1_Mem != 0) && 
	                                 (RAddr1_Mem == RegWriteAddr_WB) && 
						             (Tuse_RAddr1_Mem == 3'b000);
	//这里没有检查WB级的Tnew，因为WB级必然已经产生数据，不需要检查
	//注意store类指令需要读取的寄存器是Rt，即RAddr1_Mem
	assign DMWriteDataBypassCtrl_Mem = (DMWriteData_Mem_fromMem) ? `DMWriteData_from_WB :
							                                       `DMWriteData_from_DMWD;
	// 由近及远搜索转发
	
endmodule
