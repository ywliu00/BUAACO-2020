`timescale 1ns / 1ps
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
	 
	 reg[31:0] ext_reg;
	 
	 always@(*)
	 begin
		case(EOp)
		2'b00:begin
				if(imm[15])
					ext_reg = $signed(imm);
				else 
					ext_reg = imm;
			end
		2'b01:begin
				ext_reg = imm;
			end
		2'b10:begin
				ext_reg = imm << 16;
			end
		2'b11:begin
				if(imm[15])
					ext_reg = $signed(imm) << 2;
				else 
					ext_reg = imm << 2;
			end
		endcase
	 end
	 assign ext = ext_reg;

endmodule
