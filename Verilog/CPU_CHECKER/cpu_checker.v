`timescale 1ns / 1ps
`define S0 4'b0000
`define S1 4'b0001
`define S2 4'b0010
`define S3 4'b0011
`define S4 4'b0100
`define S5 4'b0101
`define S6 4'b0110
`define S7 4'b0111
`define S8 4'b1000
`define S9 4'b1001
`define S10 4'b1010
`define S11 4'b1011
`define S12 4'b1100
`define S13 4'b1101
`define S14 4'b1110
`define SE 4'b1111
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:32:25 09/17/2020 
// Design Name: 
// Module Name:    cpu_checker 
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
module cpu_checker(
    input clk,
    input reset,
    input [7:0] char,
    output [1:0] format_type
    );
	reg[3:0] stat;
	integer cnt;
	
	initial begin
		cnt = 0;
		stat <= `S0;
	end
	
	always@(posedge clk)
	begin
		if(reset == 1)
		begin
			stat <= `S0;
			cnt = 0;
		end
		else
		begin
			case(stat)
				`S0:
				begin
					
					if(char == "^")
					begin
						cnt = 0;
						stat <= `S1;
					end
					else
					begin
						cnt = 0;
						stat <= `S0;
					end
				end
				
				`S1:
				begin
					if(cnt == 0 && char == "@")
					begin
						stat <= `SE;
					end
					else if(cnt < 4 && (char >= "0" && char <= "9"))
					begin
						cnt = cnt + 1;
						stat <= `S1;
					end
					else if(char == "@")
					begin
						cnt = 0;
						stat <= `S2;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S2:
				begin
					if(cnt < 8 && ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")))
					begin
						cnt = cnt + 1;
						stat <= `S2;
					end
					else if(cnt == 8 && char == ":")
					begin
						cnt = 0;
						stat <= `S3;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S3:
				begin
					if(char == " ")
					begin
						stat <= `S3;
					end
					else if(char == "$")
					begin
						cnt = 0;
						stat <= `S4;
					end
					else if(char == "*")
					begin
						cnt = 0;
						stat <= `S10;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S4:
				begin
					if(cnt < 4 && (char >= "0" && char <= "9"))
					begin
						cnt = cnt + 1;
						stat <= `S4;
					end
					else if(cnt > 0 && char == " ")
					begin
						stat <= `S5;
					end
					else if(cnt > 0 && char == "<")
					begin
						stat <= `S6;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S5:
				begin
					if(char == "<")
					begin
						stat <= `S6;
					end
					else if(char == " ")
					begin
						stat <= `S5;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S6:
				begin
					if(char == "=")
					begin
						cnt = 0;
						stat <= `S7;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S7:
				begin
					if(char == " ")
					begin
						stat <= `S7;
					end
					else if((char >= "0" && char <= "9") || (char >= "a" && char <= "f"))
					begin
						cnt = 1;
						stat <= `S8;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S8:
				begin
					if(cnt < 8 && ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")))
					begin
						cnt = cnt + 1;
						stat <= `S8;
					end
					else if(cnt == 8 && char == "#")
					begin
						stat <= `S9;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S9:
				begin
					cnt = 0;
					if(char == "^")
					begin
						stat <= `S1;
					end
					else
					begin
						stat <= `S0;
					end
				end
				
				`S10:
				begin
					if(cnt < 8 && ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")))
					begin
						cnt = cnt + 1;
						stat <= `S10;
					end
					else if(cnt == 8 && char == "<")
					begin
						stat <= `S11;
					end
					else if(cnt == 8 && char == " ")
					begin
						stat <= `S10;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S11:
				begin
					if(char == "=")
					begin
						cnt = 0;
						stat <= `S12;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S12:
				begin
					if(char == " ")
					begin
						stat <= `S12;
					end
					else if((char >= "0" && char <= "9") || (char >= "a" && char <= "f"))
					begin
						cnt = 1;
						stat <= `S13;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S13:
				begin
					if(cnt < 8 && ((char >= "0" && char <= "9") || (char >= "a" && char <= "f")))
					begin
						cnt = cnt + 1;
						stat <= `S13;
					end
					else if(cnt == 8 && char == "#")
					begin
						cnt = 0;
						stat <= `S14;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
				`S14:
				begin
					cnt = 0;
					if(char == "^")
					begin
						stat <= `S1;
					end
					else
					begin
						stat <= `S0;
					end
				end
				
				`SE:
				begin
					if(char == "#")
					begin
						stat <= `S0;
					end
					else
					begin
						stat <= `SE;
					end
				end
				
			endcase
		end
	end
	
	assign format_type = (stat == `S9)? 2'b01:
	                     (stat == `S14)? 2'b10:
								                       2'b00;
	
endmodule
