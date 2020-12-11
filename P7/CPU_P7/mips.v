`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:33 12/11/2020 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input wire clk,
    input wire reset,
    input wire interrupt,
    output wire [31:0] addr
    );
	
	wire [31:2] PrAddr;
	wire [31:0] PrRD, PrWD;
	wire [7:2] HWInt;
	wire PrWE;
	
	CPU CPU(
    .clk(clk),
    .reset(reset),
	.PrAddr(PrAddr),
	.PrRD(PrRD),
	.PrWD(PrWD),
	.PrWE(PrWE),
	.HWInt(HWInt),
	.CurAddr(addr)
    );
	
	wire [31:2] Addr_0, Addr_1;
    wire WE_0, IRQ_0, WE_1, IRQ_1;
    wire [31:0] Din_0, Dout_0, Din_1, Dout_1;
    
	Bridge Bridge(
	.PrAddr(PrAddr),
	.PrWD(PrWD), //从CPU向Bridge写
	.PrRD(PrRD), //CPU从Bridge读
	.PrWE(PrWE), //Bridge写外设使能
	.HWIntOut(HWInt), //硬件中断给CPU
	
	/////// Timer 0 ///////
	.Addr_0(Addr_0),
    .WE_0(WE_0),
    .Din_0(Din_0),
    .Dout_0(Dout_0),
    .IRQ_0(IRQ_0),
	
	/////// Timer 1 ///////
	.Addr_1(Addr_1),
    .WE_1(WE_1),
    .Din_1(Din_1),
    .Dout_1(Dout_1),
    .IRQ_1(IRQ_1),
	
	/////// 外部中断 ////////
	.Interrupt(interrupt)
    );
	
	TC TimeCounter0(
    .clk(clk),
    .reset(reset),
    .Addr(Addr_0),
    .WE(WE_0),
    .Din(Din_0),
    .Dout(Dout_0),
    .IRQ(IRQ_0)
    );
	
	TC TimeCounter1(
    .clk(clk),
    .reset(reset),
    .Addr(Addr_1),
    .WE(WE_1),
    .Din(Din_1),
    .Dout(Dout_1),
    .IRQ(IRQ_1)
    );
	
endmodule
