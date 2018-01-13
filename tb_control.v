`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:04:01 01/11/2018
// Design Name:   control
// Module Name:   D:/work/fpga/gcd/tb_control.v
// Project Name:  gcd
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_control;

	// Inputs
	reg clk;
	reg reset;
	reg eq_flag;
	reg if_flag;

	// Outputs
	wire x_load;
	wire y_load;
	wire x_sel;
	wire y_sel;
	wire gcd_load;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.clk(clk), 
		.reset(reset), 
		.eq_flag(eq_flag), 
		.if_flag(if_flag), 
		.x_load(x_load), 
		.y_load(y_load), 
		.x_sel(x_sel), 
		.y_sel(y_sel), 
		.gcd_load(gcd_load)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		eq_flag = 0;
		if_flag = 0;
		end

		always
		#10 clk = ~clk;
		
		initial
		#30 reset = 0;
		
      initial
		begin
		#100;
		assign if_flag = 1'b1;
		end
 
endmodule

