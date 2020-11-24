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
    output wire [31:0] Instr,
	 output wire [31:0] FirstInstr
    );
	 
	 reg [31:0] IM_Unit [0:1023];
	 
	 initial
	 begin
		$readmemh("code.txt",IM_Unit);
	 end
	 
	 assign Instr = IM_Unit[OpAddr];
	 assign FirstInstr = IM_Unit[0];
endmodule
