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
    output reg Busy,
    output reg [31:0] HI,
    output reg [31:0] LO
    );
	reg [63:0] result;
	
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
		else if(Start)
		begin
			Busy <= 1'b1;
			if(`mult || `multu)
			begin
				result <= D1 * D2;
				DelayTime <= 5;
				i <= 1;
			end
			else if(`div || `divu)
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
		else if(`mthi) HI <= D1;
		else if(`mtlo) LO <= D1;
		else
		begin
			HI <= HI;
			LO <= LO;
			i <= 32'h0000_0000;
			DelayTime <= 32'h0FFF_FFFF;
		end
	end
	
endmodule
