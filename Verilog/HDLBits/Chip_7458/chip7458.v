`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:34 10/12/2020 
// Design Name: 
// Module Name:    chip7458 
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
module chip7458(
    input p1a,
    input p1b,
    input p1c,
    input p1d,
    input p1e,
    input p1f,
    output p1y,
    input p2a,
    input p2b,
    input p2c,
    input p2d,
    output p2y
    );

	wire w1,w2,w3,w4;
	
	assign w1 = p2a & p2b;
	assign w2 = p2c & p2d;
	assign p2y = w1 | w2;
	
	assign w3 = p1a & p1c & p1b;
	assign w4 = p1f & p1e & p1d;
	assign p1y = w3 | w4;
	
endmodule
