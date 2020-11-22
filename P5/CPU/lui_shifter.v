`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:37:27 11/22/2020 
// Design Name: 
// Module Name:    lui_shifter 
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
module lui_shifter(
    input wire [15:0] imm16,
    output wire [31:0] imm32
    );
	 assign imm32 = {imm16, 16'd0};
endmodule
