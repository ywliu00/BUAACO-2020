`timescale 1ns / 1ps
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	 integer stat = 0, instat = 0;
	 
	 always@(posedge clk or posedge clr)
	 begin
		
		if(clr) stat = 0;
		else
		begin
			case(stat)
				0:begin
					stat <= (in >= "0" && in <= "9") ? 1 : 3;
				end
				1:begin
					stat <= (in == "+" || in == "*") ? 2 : 3;
				end
				2:begin
					stat <= (in >= "0" && in <= "9") ? 1 : 3;
				end
				
				default: stat <= 3;
			endcase
		end
	 end
	 
	 assign out = (stat == 1) ? 1 : 0;

endmodule
