`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:57:52 01/10/2018 
// Design Name: 
// Module Name:    reg_file 
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
module reg_file(
    input clk,
    input reset,
    input load,
    input [31:0] data,
    output [31:0] out
    );
	
	reg [31:0] out;
	always@(posedge clk)
	begin
	if(reset == 1'b1) begin
		out <= 0;
	end else if(load == 1'b1) begin
		out <= data;
	end else begin
		out <= out;
	end
	end

endmodule
