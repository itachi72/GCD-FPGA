`timescale 1ns / 1ps

module tb_gcd;

	reg [31:0] a;
	reg [31:0] b;
	reg clk;
	reg reset;
	reg [31:0] c;


	gcd gcd1 (
		.a(a), 
		.b(b), 
		.c(c), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		a = 0;
		b = 0;
		clk = 0;
		reset = 1;
		end
	always
	#10 clk = ~clk;
	
	initial 
	begin
	#1000; 
	$finish;
	end
	
	initial
	begin
	#30;
	reset = 0;
	a = 32'd161;
	b = 32'd14;
	end

	initial
	begin
		$fsdbDumpfile("gcd.fsdb");
		$fsdbDumpvars(0, tb_gcd);
	end
endmodule

