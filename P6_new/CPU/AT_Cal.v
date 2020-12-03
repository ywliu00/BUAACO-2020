`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:53:46 11/25/2020 
// Design Name: 
// Module Name:    AT_Cal 
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
module AT_Cal(
    input wire [4:0] Rs,
	input wire [4:0] Rt,
	input wire [4:0] Rd,
    input wire [59:0] InstrType,
	output reg [4:0] RAddr0,
	output reg [4:0] RAddr1,
	output reg [4:0] WAddr,
	output reg [2:0] Tuse_RAddr0,// 要用到的时间
	output reg [2:0] Tuse_RAddr1,// 产生时间
	output reg [2:0] Tnew_WAddr
    );
	wire typeR, typeI, load, store, branch, MoveInMult1, MoveInMult2, MoveOutMult;
	assign typeR = `addu || `subu || `sll;
	//R型计算指令
	assign typeI = `ori || `addiu;
	//立即数计算指令
	assign load = `lw;
	assign store = `sw || `sh || `sb;
	assign branch = `beq;
	//注意：bgez需要单独处理，其Rt字段非0，详见指令集
	assign MoveInMult1 = `mtlo || `mthi;
	assign MoveInMult2 = `mult || `multu || `div || `divu;
	assign MoveOutMult = `mflo || `mfhi;
	
	always@(*)
	begin
		if(typeR)
		begin
			RAddr0 <= Rs;
			RAddr1 <= Rt;
			WAddr <= Rd;
			Tuse_RAddr0 <= 3'd1;
			Tuse_RAddr1 <= 3'd1;
			//Tnew_WAddr <= 3'd1;
			Tnew_WAddr <= 3'd2;
		end
		else if(typeI)
		begin
			RAddr0 <= Rs;
			RAddr1 <= 5'd0;
			WAddr <= Rt;
			Tuse_RAddr0 <= 3'd1;
			Tuse_RAddr1 <= 3'd7; //Rt不做读操作
			//Tnew_WAddr <= 3'd1;
			Tnew_WAddr <= 3'd2; //EX出结果
		end
		else if(load)
		begin
			RAddr0 <= Rs;
			RAddr1 <= 5'd0;
			WAddr <= Rt;
			Tuse_RAddr0 <= 3'd1;
			Tuse_RAddr1 <= 3'd7; //Rt不做读操作
			//Tnew_WAddr <= 3'd2;
			Tnew_WAddr <= 3'd3;
		end
		else if(store)
		begin
			RAddr0 <= Rs;
			RAddr1 <= Rt;
			WAddr <= 5'd0;
			Tuse_RAddr0 <= 3'd1;
			Tuse_RAddr1 <= 3'd2;
			//Tuse_RAddr1 <= 3'd3;
			Tnew_WAddr <= 3'd0; // 不做写操作
		end
		else if(branch)
		begin
			RAddr0 <= Rs;
			RAddr1 <= Rt;
			WAddr <= 5'd0;
			Tuse_RAddr0 <= 3'd0;
			Tuse_RAddr1 <= 3'd0; //立即需要
			Tnew_WAddr <= 3'd0; //不写
		end
		else if(`lui)
		begin
			RAddr0 <= 5'd0;
			RAddr1 <= 5'd0;
			WAddr <= Rt;
			Tuse_RAddr0 <= 3'd7;//Rs不做读操作
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			//Tnew_WAddr <= 3'd0;
			Tnew_WAddr <= 3'd1;//值在当前流水产生
		end
		else if(`jal)
		begin
			RAddr0 <= 5'd0;
			RAddr1 <= 5'd0;
			WAddr <= 5'd31; //写31号寄存器
			Tuse_RAddr0 <= 3'd7;//Rs不做读操作
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			//Tnew_WAddr <= 3'd0;
			Tnew_WAddr <= 3'd1; //值在ID产生
		end
		else if(`jr)
		begin
			RAddr0 <= Rs;
			RAddr1 <= 5'd0;
			WAddr <= 5'd0; //不写
			Tuse_RAddr0 <= 3'd0;//立即需要Rs
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			Tnew_WAddr <= 3'd0; //不写
		end
		else if(`j)
		begin
			RAddr0 <= 5'd0;
			RAddr1 <= 5'd0;
			WAddr <= 5'd0;
			Tuse_RAddr0 <= 3'd7;//Rs不做读操作
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			Tnew_WAddr <= 3'd0; //不写
		end
		else if(`jalr)
		begin
			RAddr0 <= Rs;
			RAddr1 <= 5'd0;
			WAddr <= Rd;
			Tuse_RAddr0 <= 3'd0;//读Rs，立即需要
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			Tnew_WAddr <= 3'd1; //值在ID产生
		end
		else if(MoveInMult1)
		begin
			RAddr0 <= Rs;
			RAddr1 <= 5'd0;
			WAddr <= 5'd0;
			Tuse_RAddr0 <= 3'd1;//读Rs，EX级需要
			Tuse_RAddr1 <= 3'd7;//Rt不做读操作
			Tnew_WAddr <= 3'd0; //不写
		end
		else if(MoveInMult2)
		begin
			RAddr0 <= Rs;
			RAddr1 <= Rt;
			WAddr <= 5'd0;
			Tuse_RAddr0 <= 3'd1;//读Rs，EX级需要
			Tuse_RAddr1 <= 3'd1;//读Rt，EX级需要
			Tnew_WAddr <= 3'd0; //不写
		end
		else if(MoveOutMult)
		begin
			RAddr0 <= 5'd0;
			RAddr1 <= 5'd0;
			WAddr <= Rd;
			Tuse_RAddr0 <= 3'd7;//不读
			Tuse_RAddr1 <= 3'd7;//不读
			Tnew_WAddr <= 3'd2; //写Rd，EX级出结果
		end
	end
	

endmodule
