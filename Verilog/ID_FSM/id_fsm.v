`timescale 1ns / 1ps
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:29 09/16/2020 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );
    
	 reg[1:0] stat;
	 
	 initial begin
	     stat = `S0;
	 end
    
	 always@(posedge clk)
	 begin
	     case(stat)
		      `S0:begin
				        if(((char > 64)&&(char < 91))||((char > 96)&&(char < 123)))
						  begin
						      stat = `S1;
						  end
						  else
						  begin
						      stat = `S0;
						  end
					 end
				 `S1:begin
				        if(((char > 64)&&(char < 91))||((char > 96)&&(char < 123)))
						  begin
						      stat = `S1;
						  end
						  else if((char > 47)&&(char < 58))
						  begin
						      stat = `S2;
						  end
						  else
						  begin
						      stat = `S0;
						  end
					 end
				 `S2:begin
						if((char > 47)&&(char < 58))
						begin
						    stat = `S2;
						end
						else if(((char > 64)&&(char < 91))||((char > 96)&&(char < 123)))
						begin
						    stat = `S1;
						end
						else
						begin
						    stat = `S0;
						end
					 end
			endcase
	 end
	 
	 assign out = (stat == `S2)? 1 : 0;
	 
endmodule
