`timescale 1ns / 1ps
`include "CPU_Param.v"
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
	input wire [31:0] WritePC,
	input wire [3:0] ByteEn,
    output wire [31:0] RData
    );
	 reg [31:0] DM_Unit[0:4095];
	 integer i;
	 wire [31:0] RealAddr, WriteData;
	 wire [7:0] byte3, byte2, byte1, byte0;
	 assign RealAddr = {2'b0, Addr[31:2]};
	 assign RData = DM_Unit[RealAddr];
	 
	 assign byte3 = (& ByteEn) ? WData[31:24] :
					(& ByteEn[3:2]) && !ByteEn[1] ? WData[15:8] : 
					(ByteEn[3] && !ByteEn[2]) ? WData[7:0] : RData[31:24];
	 
	 assign byte2 = (& ByteEn) ? WData[23:16] :
					(& ByteEn[2]) && (!ByteEn[1]) ? WData[7:0] : RData[23:16];
	 
	 assign byte1 = (& ByteEn[1:0]) ? WData[15:8] : 
					(ByteEn[1] && !ByteEn[0]) ? WData[7:0] : RData[15:8];
	 
	 assign byte0 = (& ByteEn[0]) ? WData[7:0] : RData[7:0];
	 
	 assign WriteData = {byte3, byte2, byte1, byte0};
	 
	 always@(posedge clk)
	 begin
		if(reset)
		begin
			for(i = 0;i < 4096;i = i + 1)
			begin
				DM_Unit[i] <= 32'h0000_0000;
			end
		end
		else if(MemWrite)
		begin
			//$display("@%h: *%h <= %h", WritePC, RealAddr << 2, WriteData);
			$display("%d@%h: *%h <= %h", $time, WritePC, RealAddr << 2, WriteData);
			DM_Unit[RealAddr] <= WriteData;
		end
	 end
	 
endmodule
