`timescale 1ns / 1ps
`include "CPU_Param.h"
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
    output wire [31:0] OpCode
    );
	 
	 reg [31:0] IM_Unit [0:1023];
	 
	 initial
	 begin
		$readmemh("code.txt",IM_Unit);
	 end
	 
	 assign OpCode = IM_Unit[OpAddr];
endmodule
