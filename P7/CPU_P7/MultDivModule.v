`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:52 12/03/2020 
// Design Name: 
// Module Name:    MultDivModule 
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
module MultDivModule(
    input wire [59:0] InstrType,
    input wire [31:0] D1,
    input wire [31:0] D2,
    input wire Start,
    input wire clk,
	input wire reset,
	input wire ErrSignal,
    output reg Busy,
    output reg [31:0] HI,
    output reg [31:0] LO
    );
	reg [63:0] result;
	wire [63:0] D1_Ext, D2_Ext;
	assign D1_Ext = {{32{D1[31]}}, D1};
	assign D2_Ext = {{32{D2[31]}}, D2};
	
	integer i, DelayTime;
	
	always@(posedge clk)
	begin
		if(reset)
		begin
			Busy <= 1'b0;
			HI <= 32'h0000_0000;
			LO <= 32'h0000_0000;
			i <= 32'h0000_0000;
			DelayTime <= 32'h0FFF_FFFF;
		end
		else if(Start && !ErrSignal)
		begin
			Busy <= 1'b1;
			if(`mult)
			begin
				result <= $signed(D1) * $signed(D2);
				DelayTime <= 5;
				i <= 1;
			end
			if(`multu)
			begin
				result <= D1 * D2;
				DelayTime <= 5;
				i <= 1;
			end
			else if(`div)
			begin
				result[31:0] <= $signed(D1) / $signed(D2);
				result[63:32] <= $signed(D1) % $signed(D2);
				DelayTime <= 10;
				i <= 1;
			end
			else if(`divu)
			begin
				result[31:0] <= D1 / D2;
				result[63:32] <= D1 % D2;
				DelayTime <= 10;
				i <= 1;
			end
		end
		else if(Busy)
		begin
			if(i == DelayTime)
			begin
				Busy <= 0;
				{HI, LO} <= result;
			end
			i <= i + 1;
		end
		else if(`mthi && !ErrSignal) HI <= D1;
		else if(`mtlo && !ErrSignal) LO <= D1;
		else
		begin
			HI <= HI;
			LO <= LO;
			i <= 32'h0000_0000;
			DelayTime <= 32'h0FFF_FFFF;
		end
	end
	
endmodule
