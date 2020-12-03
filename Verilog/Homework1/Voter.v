`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:51 09/24/2020 
// Design Name: 
// Module Name:    Voter 
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
module Voter(
    input A,
    input B,
    input C,
    output F
    );

	assign F = !(A && B) && !(A && C) && !(B && C);
	
endmodule
