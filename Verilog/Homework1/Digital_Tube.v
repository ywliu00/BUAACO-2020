`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:46:48 09/24/2020 
// Design Name: 
// Module Name:    Digital_Tube 
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
module Digital_Tube(
    input [3:0] x,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g
    );

	assign a = (!x[2] && !x[0]) || (x[3] && !x[0]) || (x[3] && !x[2] && !x[1]) || (x[2] && x[1]) || (!x[3] && x[1]) || (x[3] && x[2] && x[0]);
	
	assign b = (!x[3] && x[2]) || (x[3] && !x[2]) || (x[1] && (x[2] && x[0]));

	assign c = (!x[0] && (!x[2] || x[1])) || (x[3] && (x[2] || x[1]));
	
	assign d = (!x[2] && ((!x[3] && x[1]) || (!x[1] && !x[0]) || (x[3] && x[0]))) || (x[2] && ((!x[1] && x[0]) || (x[1] && !x[0]))) || (x[3] && !x[1]);
	
	assign e = (!x[3] && (x[2] || !x[1])) || (!x[2] && (x[3] || x[0])) || (!x[1] && x[0]);
	
	assign f = (x[0] && ((!x[3] && x[1]) || (x[3] && !x[1]))) || (!x[0] && (!x[2] || (!x[3] && !x[1]))) || (!x[3] && x[2]);
	
	assign g = (!x[2] && (x[3] || x[1])) || (x[1] && !x[0]) || (x[3] && x[0]) || (!x[3] && x[2] && !x[1]);
	
endmodule
