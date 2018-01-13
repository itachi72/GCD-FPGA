`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:15:55 01/11/2018
// Design Name:   datapath
// Module Name:   D:/work/fpga/gcd/tb_datapath.v
// Project Name:  gcd
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: datapath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_datapath;

	// Inputs
	reg clk;
	reg reset;
	reg x_sel;
	reg y_sel;
	reg x_load;
	reg y_load;
	reg gcd_load;
	reg [31:0] a;
	reg [31:0] b;

	// Outputs
	reg eq_flag;
	reg if_flag;
	wire [31:0] gcd;

	// Instantiate the Unit Under Test (UUT)
	datapath uut (
		.clk(clk), 
		.reset(reset), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.x_load(x_load), 
		.y_load(y_load), 
		.gcd_load(gcd_load), 
		.a(a), 
		.b(b), 
		.eq_flag(eq_flag), 
		.if_flag(if_flag), 
		.gcd(gcd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		x_sel = 1;
		y_sel = 1;
		x_load = 0;
		y_load = 0;
		gcd_load = 0;
		a = 32'd161;
		b = 32'd14;
		if_flag = 1;
		eq_flag = 0;
		end
		
		always
		#10 clk = ~clk;
		
		initial
		begin
		#30; 
		reset = 0;
		x_sel = 0;
		y_sel = 0;
		x_load = 1;
		y_load = 1;
		end
		
		initial
		begin
		#500;
		if_flag = 0;
		eq_flag = 1;
		end
		
      initial
		begin
		#1000 $finish;
		end
 
endmodule

