`timescale 1ns / 1ps
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
	 
	 reg [2:0] num;
	 reg Of;
	 
	 initial begin
		num = 0;
		Of = 0;
	 end
	 
	 always@(posedge Clk)
	 begin
		if(Reset)
		begin
			num = 0;
			Of = 0;
		end
		else if(En)
		begin
			case(num)
				3'b000: num <= 3'b001;
				3'b001: num <= 3'b011;
				3'b011: num <= 3'b010;
				3'b010: num <= 3'b110;
				3'b110: num <= 3'b111;
				3'b111: num <= 3'b101;
				3'b101: num <= 3'b100;
				3'b100:
				begin
					 num <= 3'b000;
					 Of <= 1'b1;
				end
			endcase
		end
	 end
	 assign Output = num;
	 assign Overflow = Of;
	 
endmodule
