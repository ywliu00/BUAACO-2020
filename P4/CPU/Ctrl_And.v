`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:49:49 11/16/2020 
// Design Name: 
// Module Name:    Ctrl_And 
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
module Ctrl_And(
    input wire [5:0] OpCode,
	 input wire [4:0] rt,
    input wire [5:0] Func,
    output wire addu,
    output wire subu,
    output wire ori,
    output wire lw,
    output wire sw,
    output wire beq,
    output wire lui,
    output wire jal,
    output wire jr,
    output wire sll
    );
	 wire special;
	 
	 assign special = & (!OpCode[5:0]);
	 assign addu = & {special, Func[5], !Func[4:1], Func[0]};
	 assign subu = & {special, Func[5], !Func[4:2], Func[1:0]};
	 assign ori = & {!OpCode[5:4], OpCode[3:2], !OpCode[1], OpCode[0]};
	 assign lw = & {OpCode[5], !OpCode[4:2], OpCode[1:0]};
	 assign sw = & {OpCode[5], !OpCode[4], OpCode[3], !OpCode[2], OpCode[1:0]};
	 assign beq = & {!OpCode[5:3], OpCode[2], !OpCode[1:0]};
	 assign lui = & {!OpCode[5:4], OpCode[3:0]};
	 assign jal = & {!OpCode[5:2], OpCode[1:0]};
	 assign jr = & {special, !Func[5:4], Func[3], !Func[2:0]};
	 assign sll = & {special, !Func[5:0]};

endmodule
