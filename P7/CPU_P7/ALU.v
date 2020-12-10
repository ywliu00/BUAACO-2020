`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:05 11/16/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input wire [31:0] In0,
    input wire [31:0] In1,
	input wire [3:0] ALUOp,
	input wire SpecialSign,
    output wire [31:0] Res,
	output wire OverFlow
    );
	wire [4:0] ShiftBits;
	wire [32:0] In0HighExt, In1HighExt, Res33, In0SignedExt, In1SignedExt;
	assign ShiftBits = In0[4:0];
	assign In0HighExt = {SpecialSign & In0[31], In0};
	assign In1HighExt = {SpecialSign & In1[31], In1};
	
	assign In0SignedExt = {In0[31], In0};
	assign In1SignedExt = {In1[31], In1};
	
	assign Res33 = (ALUOp == `ALU_add) ? In0SignedExt + In0SignedExt :
				   (ALUOp == `ALU_sub) ? In0SignedExt - In0SignedExt : 33'h123456789;
				 
    assign Res = (ALUOp == `ALU_addu) ? In0 + In1 :
	             (ALUOp == `ALU_subu) ? In0 - In1 :
				 (ALUOp == `ALU_or) ? In0 | In1 :
				 (ALUOp == `ALU_lshift) ? In1 << ShiftBits : 
				 (ALUOp == `ALU_and) ? In0 & In1 : 
				 (ALUOp == `ALU_xor) ? In0 ^ In1 : 
				 (ALUOp == `ALU_nor) ? ~(In0 | In1) : 
				 (ALUOp == `ALU_rshiftL) ? In1 >> ShiftBits :
				 (ALUOp == `ALU_rshiftA) ? $signed(($signed(In1)) >>> ShiftBits) :
				 (ALUOp == `ALU_slt) ? ($signed(In0HighExt) < $signed(In1HighExt) ? 32'd1 : 32'd0) :
				 (ALUOp == `ALU_add) ? Res33[31:0] :
	             (ALUOp == `ALU_sub) ? Res33[31:0] :
															32'd0;
	 assign OverFlow = (ALUOp == `ALU_add || ALUOp == `ALU_sub) && (Res33[32] != Res33[31]) ? 1 : 0;
	 //always@(*)
	 //begin
	 
	//	case(ALUOp)
	//	2'b00: Res <= In0 + In1;
	//	2'b01: Res <= In0 - In1;
	//	2'b10: Res <= In0 | In1;
	//	endcase
	//	Zero <= (In0 - In1 == 0) ? 1 : 0;
	// end
endmodule
