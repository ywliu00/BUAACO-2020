`timescale 1ns / 1ps
module bc_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [7:0] in;
	
	// Outputs
	wire result;

	// Instantiate the Unit Under Test (UUT)
	BlockChecker uut (
		.clk(clk), 
		.reset(reset), 
		.in(in), 
		.result(result)
	);
	
	reg [1:2000] teststr;
	integer i = 0;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in = 0;
		//i = 0;
		//teststr = "jiowe beGin 857857 5498oeNduf\ 340u9 enD begindc c BeGIn fcenenEndene n eNdgingin begincvx begin e ENd fc BEgiN BEgin tgfceNd END eceNd eNd enD End end END bg begin end begin begin begin begin end";
		teststr = "a begiN enDc end end begiNegiN";
		// Wait 100 ns for global reset to finish
		#90;
      reset = 1;
		#10;
		reset = 0;
		 
		 
		// Add stimulus here
      //while(teststr[999:992]==0) teststr <= teststr << 8;
		// Add stimulus here
		/*while(1)
		begin
			in <= teststr[1:8];
			#10;
			teststr <= teststr << 8;
			i <= i + 1;
			//if(i % 33 == 0) reset <= 1;
			//else reset <= 0;
			//if(i%9==0) reset = 1;
			//else reset = 0;
		end
		*/
		in = "a";
    #10;
    in = " ";
    #10;
    in = "b";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "N";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "D";
    #10;
    in = "c";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "d";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "d";
    #10;
    in = " ";
    #10;
    in = "b";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "N";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "N";
    #10;
    reset = 1;
    #10;
    reset = 0;
    in = "b";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "n";
    #10;
    in = "b";
    #10;
    in = " ";
    #10
    in = "b";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "n";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "D";
    #10;
    in = "c";
    #10;
    in = " ";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "d";
    #10;
    in = " ";
    #10;
    in = " ";
    #10;
    in = "e";
    #10;
    in = "n";
    #10;
    in = "d";
    #10;
    in = " ";
    #10;
    in = "b";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "N";
    #10;
    in = "e";
    #10;
    in = "g";
    #10;
    in = "i";
    #10;
    in = "N";
    #10;
	end
	
	
	always #5 clk = ~clk;
      
endmodule

