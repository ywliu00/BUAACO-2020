`timescale 1ns / 1ps
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
`define S3 2'b11
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:02:57 09/16/2020 
// Design Name: 
// Module Name:    counting 
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
module counting(
    input [1:0] num,
    input clk,
    input ans
    );

	 reg[1:0] stat;
	 
	 initial begin
	     stat <= `S0;
	 end
	 
	 always@(posedge clk)
	 begin
	     case(stat)
		  `S0:begin
					if(num == 1)
					begin
					    stat <= `S1;
					end
					else
					begin
					    stat <= `S0;
					end
				end
				
			`S1:begin
					if(num == 2)
					begin
					    stat <= `S2;
					end
					else if(num == 1)
					begin
					    stat <= `S1;
					end
					else
					begin
					    stat <= `S0;
					end
				end
				
			`S2:begin
					if(num == 3)
					begin
					    stat <= `S3;
					end
					else if(num == 1)
					begin
					    stat <= `S1;
					end
					else
					begin
					    stat <= `S2;
					end
				end
			
			`S3:begin
					if(num == 3)
					begin
					    stat <= `S3;
					end
					else if(num == 1)
					begin
					    stat <= `S1;
					end
					else
					begin
					    stat <= `S0;
					end
				end
			endcase
	 end
	 
	 assign ans = (stat == `S3) ? 1'b1 : 1'b0;
	 
endmodule
