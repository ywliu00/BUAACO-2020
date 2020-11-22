`timescale 1ns / 1ps
`include "CPU_Param.h"
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
    input wire [59:0] InstrType,
    output wire Zero,
    output wire [31:0] Res
    );
	 wire [2:0] ALUOp;
	 assign ALUOp = (`addu | `lw | `sw ) ? ALU_add :
	                (`subu) ? ALU_sub :
						 (`ori) ? ALU_or :
						 (`sll) ? ALU_lshift :
	                                               ALU_add;
    assign Res = (ALU_add) ? In0 + In1 :
	              (ALU_sub) ? In0 - In1 :
					  (ALU_or) ? In0 | In1 :
					  (ALU_lshift) ? In0 << In1 : 32'd0;
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
