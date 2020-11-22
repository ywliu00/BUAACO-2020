`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:56:44 11/16/2020 
// Design Name: 
// Module Name:    IFU 
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
`default_nettype none
module IFU(
    input wire[31:0] NPC,
    input wire reset,
    input wire clk,
    output wire [31:0] PC,
    output wire [31:0] Instr,
    output wire [5:0] OpCode,
    output  wire [4:0]rs,
    output wire [4:0] rt,
    output  wire [4:0]rd,
    output wire [4:0] Shamt,
    output  wire[5:0] Func,
    output wire [15:0] imm16,
    output  wire [25:0]imm26
    );
	 reg[31:0] PCounter;
	 wire[31:0] Str, RealAddr;
	 
	 always@(posedge clk)
	 begin
		if(reset)
			PCounter <= 32'h0000_3000;
		else
		begin
			PCounter <= NPC;
		end
	 end
	 
	 assign RealAddr = (PCounter - 32'h0000_3000) >> 2;
	 
	 IM InstrMem(.OpAddr(RealAddr),.OpCode(Str));
	 
	 assign PC = PCounter;
	 assign Instr = Str;
	 assign {OpCode,rs,rt,rd,Shamt,Func} = Str;
	 assign imm16 = Str[15:0];
	 assign imm26 = Str[25:0];

endmodule
