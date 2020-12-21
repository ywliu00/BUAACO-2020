`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:34 12/04/2020 
// Design Name: 
// Module Name:    DMOutExtend 
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
module DMOutExtend(
    input wire [1:0] Addr2,
    input wire [31:0] DataIn,
    input wire [2:0] Op,
    output wire [31:0] DataOut
    );
	
	wire [7:0] ByteData;
	wire [15:0] HalfWordData;
	
	assign ByteData = (Addr2 == 2'b01) ? DataIn[15:8] : 
					  (Addr2 == 2'b10) ? DataIn[23:16] : 
					  (Addr2 == 2'b11) ? DataIn[31:24] : DataIn[7:0];
	//assign HalfWordData = (Addr2[1] == 1'b1) ? DataIn[31:16] : DataIn[15:0];
	assign HalfWordData = (Addr2[1] == 1'b1) ? DataIn[31:16] : DataIn[15:0];
	
	assign DataOut = (Op == 3'b001) ? {{24{1'b0}}, ByteData} :
					 (Op == 3'b010) ? {{24{ByteData[7]}}, ByteData} :
					 (Op == 3'b011) ? {{16{1'b0}}, HalfWordData} :
					 (Op == 3'b100) ? {{16{HalfWordData[15]}}, HalfWordData} :
																				DataIn;

endmodule
