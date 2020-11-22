`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:31 11/15/2020 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input wire [4:0] RAddr0,
    input wire [4:0] RAddr1,
    input wire [4:0] WAddr,
    input wire [31:0] WriteData,
	 input wire [31:0] PC,
    input wire RegWrite,
    input wire clk,
    input wire reset,
    output  wire [31:0] RData0,
    output  wire [31:0] RData1
    );
	 
	 reg [31:0] reg32 [0:31];
	 
	 integer i;
	 
	 always@(posedge clk)
	 begin
		if(reset)
		begin
			for(i = 0;i < 32;i = i + 1)
			begin
				reg32[i] <= 32'h0000_0000;
			end
		end
		else
		begin
			if(RegWrite)
			begin
				$display("@%h: $%d <= %h",PC, WAddr, WriteData);
				if(WAddr > 0)
				begin
					reg32[WAddr] <= WriteData;
				end
			end
		end
		
		//RData0 <= reg32[RAddr0];
		//RData1 <= reg32[RAddr1];
	 end
	 //assign {RData0, RData1} = {reg32[RAddr0], reg32[RAddr1]};
	 assign RData0 = RegWrite && WAddr && (WAddr == RAddr0) ? WriteData : reg32[RAddr0];
	 assign RData1 = RegWrite && WAddr && (WAddr == RAddr1) ? WriteData : reg32[RAddr1];
	 
endmodule
