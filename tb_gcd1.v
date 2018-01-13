`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:40:22 01/11/2018
// Design Name:   gcd
// Module Name:   D:/work/fpga/gcd/tb_gcd1.v
// Project Name:  gcd
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gcd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_gcd1;

	// Inputs
	reg [31:0] num1;
	reg [31:0] num2;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] gcd_out;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	gcd uut (
		.num1(num1), 
		.num2(num2), 
		.gcd_out(gcd_out),
		.DONE(done), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		num1 = 32'd0;
		num2 = 32'd0;
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
	#80;
	reset = 0;
	end
	
	initial
	begin
	#30;
	num1 = 32'd161;
	num2 = 32'd14;
	end
 
endmodule

