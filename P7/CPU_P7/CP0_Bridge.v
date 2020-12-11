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
    input wire [31:0] PCAddr,
	input wire [31:0] DataIn,
	input wire Err,
	input wire [4:0] ErrStat,
	input wire [7:2] HWInt,
	output wire ErrSignal,
	output wire [31:0] DataOut,
	// CPU½»»¥
	
	output wire CP0WriteEn,
	output wire [31:0] SR,
	output wire [31:0] EPC,
	output wire [31:0] Cause
	// CP0½»»¥
    );
	
	
	
endmodule
