`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:35:34 12/11/2020 
// Design Name: 
// Module Name:    IOAddrDetect 
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
module IOAddrDetect(
    input wire [31:0] Addr,
	input wire Err,
    output wire IO_En
    );
	
	assign IO_En = (!Err) && ((Addr >= 32'h0000_7f00 && Addr <= 32'h0000_7f0b) || (Addr >= 32'h0000_7f10 && Addr <= 32'h0000_7f1b));
	
endmodule
