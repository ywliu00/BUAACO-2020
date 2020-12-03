`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:26:56 11/26/2020 
// Design Name: 
// Module Name:    StallUnit 
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
module StallUnit(
    input wire [4:0] RegRead0,
    input wire [2:0] T_useRead0,
    input wire [4:0] RegRead1,
    input wire [2:0] T_useRead1,
    input wire [4:0] RegWrite_EX,
    input wire [2:0] T_new_EX,
    input wire [4:0] RegWrite_Mem,
    input wire [2:0] T_new_Mem,
    output wire Stall
    );
	
	wire Stall0, Stall1,
	     Read0NotEqZero, Read1NotEqZero,
		 Stall0_EX, Stall1_EX,
		 Stall0_Mem, Stall1_Mem;
	
	assign Read0NotEqZero = RegRead0 != 5'd0;
	assign Read1NotEqZero = RegRead1 != 5'd0;
	assign Stall0_EX = (RegRead0 == RegWrite_EX) && (T_useRead0 < T_new_EX);
	assign Stall1_EX = (RegRead1 == RegWrite_EX) && (T_useRead1 < T_new_EX);
	assign Stall0_Mem = (RegRead0 == RegWrite_Mem) && (T_useRead0 < T_new_Mem);
	assign Stall1_Mem = (RegRead1 == RegWrite_Mem) && (T_useRead1 < T_new_Mem);
	
	assign Stall0 = Read0NotEqZero && (Stall0_EX || Stall0_Mem);
	assign Stall1 = Read1NotEqZero && (Stall1_EX || Stall1_Mem);
	
	assign Stall = Stall0 || Stall1;
	
endmodule
