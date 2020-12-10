`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:52 12/04/2020 
// Design Name: 
// Module Name:    BranchJudge 
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
module BranchJudge(
    input wire [31:0] In0,
    input wire [31:0] In1,
    input wire [59:0] InstrType,
    output wire Branch
    );
	wire Branch_beq, Branch_bgez, Branch_bgtz, 
		 Branch_blez, Branch_bltz, Branch_bne;
	
	assign Branch_beq = `beq && (In0 == In1);
	assign Branch_bgez = `bgez && (In0[31] == 1'd0);
	assign Branch_bgtz = `bgtz && (In0[31] == 1'd0 && In0 != 32'd0);
	assign Branch_blez = `blez && (In0[31] == 1'd1 || In0 == 32'd0);
	assign Branch_bltz = `bltz && (In0[31] == 1'd1);
	assign Branch_bne = `bne && (In0 != In1);
	
	assign Branch = Branch_beq || Branch_bgez || Branch_bgtz || 
		 Branch_blez || Branch_bltz || Branch_bne;
	
endmodule
