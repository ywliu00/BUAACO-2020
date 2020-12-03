`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:15 09/11/2020 
// Design Name: 
// Module Name:    OrGate8Bits 
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
module OrGate8Bits(
    input [3:0] a,
	 input [4:7] b,
	 input [8:11] c,
	 output reg [3:0] o1,
	 output reg [4:7] o2
    );
	 
    //assign o1[3:0] = a[3:0];
	 //assign o1[3:0] = b[7:4];
	 //assign o1[3:0] = b[4:7];
	 //assign o2[4:7] = c[8:11];
	 assign o2[4:7] = c[11:8];

endmodule
