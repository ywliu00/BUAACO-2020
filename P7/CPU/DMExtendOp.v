`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:21:11 12/04/2020 
// Design Name: 
// Module Name:    DMExtendOp 
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
module DMExtendOp(
    input wire [59:0] InstrType,
    output wire [2:0] Op
    );
	
	assign Op = (`lb) ? 3'b010 : 
				(`lbu) ? 3'b001 :
				(`lh) ? 3'b100 : 
				(`lhu) ? 3'b011 : 
									3'b000;

endmodule
