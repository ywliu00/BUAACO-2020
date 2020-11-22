`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:17 11/22/2020 
// Design Name: 
// Module Name:    Extender 
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
module Extender(
    input wire [15:0] imm16,
    input wire sign,
    output wire [31:0] imm32
    );
	 
	 assign imm32 = (sign) ? {{16{imm16[15]}}, imm16} : {16'b0, imm16};

endmodule
