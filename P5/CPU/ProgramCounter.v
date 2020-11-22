`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:07:03 11/22/2020 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(
    input wire clk,
    input wire reset,
    input wire [31:0] NPC,
    output wire [31:0] PC
    );
	 reg [31:0] ProgCnt;
	 always@(posedge clk)
	 begin
		if(reset)
		begin
			ProgCnt <= 32'h0000_3000;
		end
		else
		begin
			ProgCnt <= NPC;
		end
	 end
	 
	 assign PC = ProgCnt;
	 
endmodule
