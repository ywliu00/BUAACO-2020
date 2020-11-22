`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:00:54 11/22/2020 
// Design Name: 
// Module Name:    ID 
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
module ID(
    input wire [31:0] Instr,
    input wire [31:0] PC,
    input wire [31:0] PC_4,
    input wire clk,
    input wire reset,
    output reg [4:0] Rs_ID_to_EX,
    output reg [4:0] Rt_ID_to_EX,
    output reg [4:0] Rd_ID_to_EX,
    output reg [4:0] Shamt_ID_to_EX,
    output reg [32:0] imm32_ID_to_EX,
	 output reg [59:0] InstrType_ID_to_EX,
	 output reg [31:0] RsData_ID_to_EX,
	 output reg [31:0] RtData_ID_to_EX,
    output wire branch,
    output wire jump,
    output wire [31:0] branch_addr32,
    output wire [31:0] jump_addr32
    );
	wire [31:0] RsData_wire, RtData_wire, imm32_wire;
	wire [15:0] imm16_wire;
	wire [4:0] Rs_wire, Rt_wire, Rd_wire, Shamt_wire;
	wire sign;
	wire [59:0] InstrType;
	
	assign sign = (`ori) ? 0 : 1 ; //括号里放应该0扩展的指令！！！
	assign {Rs_wire, Rt_wire, Rd_wire, Shamt_wire} = Instr[25:6];
	assign imm16_wire = Instr[15:0];
	
	InstrDecoder InstrDecoder(
	.Instr(Instr),
   .InstrType(InstrType));
	
	Extender Extender(
	.imm16(imm16_wire),
   .sign(sign),
   .imm32(imm32_wire));
	
endmodule
