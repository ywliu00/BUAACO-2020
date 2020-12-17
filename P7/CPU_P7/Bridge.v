`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:15 12/10/2020 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
	input wire [31:2] PrAddr,
	input wire [31:0] PrWD, //从CPU向Bridge写
	output wire [31:0] PrRD, //CPU从Bridge读
	input wire PrWE, //Bridge写外设使能
	output wire [7:2] HWIntOut, //硬件中断给CPU
	
	/////// Timer 0 ///////
	output wire [31:2] Addr_0,
    output wire WE_0,
    output wire [31:0] Din_0,
    input wire [31:0] Dout_0,
    input wire IRQ_0,
	
	/////// Timer 1 ///////
	output wire [31:2] Addr_1,
    output wire WE_1,
    output wire [31:0] Din_1,
    input wire [31:0] Dout_1,
    input wire IRQ_1,
	
	/////// 外部中断 ////////
	input wire Interrupt
    );
	
	assign Addr_0 = PrAddr;
	assign Addr_1 = PrAddr;
	assign WE_0 = ({PrAddr, 2'b00} >= 32'h0000_7F00 && {PrAddr, 2'b00} <= 32'h0000_7F0B) && PrWE ? 1 : 0;
	assign WE_1 = ({PrAddr, 2'b00} >= 32'h0000_7F10 && {PrAddr, 2'b00} <= 32'h0000_7F1B) && PrWE ? 1 : 0;
	assign Din_0 = PrWD;
	assign Din_1 = PrWD;
	assign PrRD = ({PrAddr, 2'b00} >= 32'h0000_7F00 && {PrAddr, 2'b00} <= 32'h0000_7F0B) ? Dout_0 :
				  ({PrAddr, 2'b00} >= 32'h0000_7F10 && {PrAddr, 2'b00} <= 32'h0000_7F1B) ? Dout_1 : 32'h1234_ABCD;
	assign HWIntOut = {3'b0, Interrupt, IRQ_1, IRQ_0};
	
endmodule
