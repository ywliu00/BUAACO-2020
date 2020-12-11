`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:39 12/10/2020 
// Design Name: 
// Module Name:    EPC_BD_Cal 
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
module CP0_Bridge(
    input wire [59:0] InstrType,
	input wire [59:0] WBInstrType,
    input wire [31:0] PCAddr,
	input wire [31:0] DataIn,
	input wire Err,
	input wire [4:0] ErrStat,
	input wire [7:2] HWInt,
	output wire ErrSignal,
	output wire [31:0] DataOut,
	// CPU交互

	input wire [31:0] SR_out,
	input wire [31:0] EPC_out,
	input wire [31:0] Cause_out,
	output wire CP0WriteEn,
	output wire [31:0] SR,
	output wire [31:0] EPC,
	output wire [31:0] Cause
	// CP0交互
    );
	wire [4:0] ExcCode;
	wire [7:2] IP;
	wire WBJump, WBBranch;
	assign ErrSignal = Err | (| HWInt);
	
	assign ExcCode = Err ? ErrStat : 
					 (| HWInt) ? 5'd0 : 5'd31;
	assign IP = HWInt;
	assign Cause = {16'd0, IP, 3'd0, ExcCode, 2'd0};
	
	assign WBJump = WBInstrType == `inst_j || 
					WBInstrType == `inst_jal ||
					WBInstrType == `inst_jr ||
					WBInstrType == `inst_jalr ? 1 : 0;
	assign WBBranch = WBInstrType == `inst_beq ||
					  WBInstrType == `inst_bgez ||
					  WBInstrType == `inst_bgtz ||
					  WBInstrType == `inst_blez ||
					  WBInstrType == `inst_bltz ||
					  WBInstrType == `inst_bne ? 1 : 0;
	assign EPC = (WBJump || WBBranch) ? PCAddr - 32'd4 : PCAddr;
	// 是否在延迟槽内
	
endmodule
