`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:39 12/10/2020 
// Design Name: 
// Module Name:    CP0_Bridge 
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
module CP0_Bridge(
    input [59:0] InstrType,
    input [31:0] PCAddr,
	input Err,
	input Interrupt,
	input [4:0] ErrStat,
	output ErrSignal,
	output [31:0] EPC
    );


endmodule
