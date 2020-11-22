`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:05 11/16/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input wire [31:0] In0,
    input wire [31:0] In1,
    input wire [1:0] ALUOp,
    output reg Zero,
    output reg [31:0] Res
    );
	 always@(*)
	 begin
		case(ALUOp)
		2'b00: Res <= In0 + In1;
		2'b01: Res <= In0 - In1;
		2'b10: Res <= In0 | In1;
		endcase
		Zero <= (In0 - In1 == 0) ? 1 : 0;
	 end
endmodule
