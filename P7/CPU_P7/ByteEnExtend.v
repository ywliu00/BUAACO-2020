`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:37:46 12/03/2020 
// Design Name: 
// Module Name:    ByteEnExtend 
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
module ByteEnExtend(
    input wire [59:0] InstrType,
    input wire [1:0] Addr2,
    output wire [3:0] BE
    );
	
	assign BE[3] = `sw || (`sh && Addr2[1]) || (`sb && Addr2[1] && Addr2[0]);
	assign BE[2] = `sw || (`sh && Addr2[1]) || (`sb && Addr2[1] && !Addr2[0]);
	assign BE[1] = `sw || (`sh && !Addr2[1]) || (`sb && !Addr2[1] && Addr2[0]);
	assign BE[0] = `sw || (`sh && !Addr2[1]) || (`sb && !Addr2[1] && !Addr2[0]);
	
endmodule
