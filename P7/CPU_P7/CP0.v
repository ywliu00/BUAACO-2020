`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:16 12/11/2020 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
	input wire clk,
	input wire reset,
	input wire WriteEn,
    input wire [31:0] SR_in,
    input wire [31:0] Cause,
    input wire [31:0] EPC_in,
    output wire [31:0] PRId,
	output wire [31:0] SR_out,
	output wire [31:0] EPC_out
    );


endmodule
