`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:45:28 11/16/2020 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input wire [31:0] OpAddr,
    output wire [31:0] Instr
    );
	 
	 reg [31:0] IM_Unit [0:4095];
	 initial
	 begin
		$readmemh("code.txt",IM_Unit);
		$readmemh("code_handler.txt", IM_Unit, 1120, 2047);
	 end
	 
	 assign Instr = IM_Unit[OpAddr];
endmodule
