`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:42:05 11/16/2020 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input wire [31:0] Addr,
    input wire [31:0] WData,
    input wire MemWrite,
    input wire clk,
    input wire reset,
	 input wire [31:0] PC,
    output wire [31:0] RData
    );
	 reg [31:0] DM_Unit[0:1023];
	 integer i;
	 wire [31:0] RealAddr;
	 assign RealAddr = {2'b0, Addr[31:2]};
	 
	 always@(posedge clk)
	 begin
		if(reset)
		begin
			for(i = 0;i < 1024;i = i + 1)
			begin
				DM_Unit[i] <= 32'h0000_0000;
			end
		end
		else if(MemWrite)
		begin
			$display("@%h: *%h <= %h", PC, Addr, WData);
			DM_Unit[RealAddr] <= WData;
		end
	 end
	 
	 assign RData = DM_Unit[RealAddr];

endmodule
