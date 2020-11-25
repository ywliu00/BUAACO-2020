`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:13 11/24/2020 
// Design Name: 
// Module Name:    ALUOpDecoder 
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
module ALUOpDecoder(
    input wire [59:0] InstrType,
    output wire ALUIn1Src,
    output wire [2:0] ALUOp
    );
	assign ALUIn1Src = (`ori||`lw||`sw) ? 1 : 0;
	//为0则取RtData，为1则取32位立即数
	assign ALUOp = (`sll) ? `ALU_lshift :
	               (`ori) ? `ALU_or : 
				   (`subu) ? `ALU_sub : `ALU_add;

endmodule
