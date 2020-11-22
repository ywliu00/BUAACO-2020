`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:16:17 10/25/2020 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
	 reg [31:0] C0;
	 assign C = C0;
	 always @(*)
	 begin
	 case(ALUOp)
		3'b000:C0 = A + B;
		3'b001:C0 = A - B;
		3'b010:C0 = A & B;
		3'b011:C0 = A | B;
		3'b100:C0 = (A >> B);
		3'b101:C0 = ($signed(A) >>> B);
	endcase
	end

endmodule
