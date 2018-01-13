`timescale 1ns / 1ps

module datapath(
	 input clk, reset, x_sel, y_sel, x_load, y_load, gcd_load,
	 input [31:0]a, b,
    output eq_flag, if_flag,
    output [31:0]gcd
    );
	
	 wire [31:0] gcd;
	 reg eq_flag, if_flag;
	 wire [31:0] x_regout;
	 wire [31:0] y_regout;
	 wire [31:0] xmux_out, ymux_out;
	 wire [31:0] x_temp, y_temp;
	
	mux x_mux(										//mux for X
    .sel(x_sel),
    .in0(x_temp), .in1(a), .mux_out(xmux_out)
    );
	 
	mux y_mux(											//	mux for Y
    .sel(y_sel),
    .in0(y_temp), .in1(b), .mux_out(ymux_out)
    );
	 
	reg_file x_reg(
    .clk(clk),
    .reset(reset),
    .load(x_load),
    .data(xmux_out), .out(x_regout)
    );
	 
	 reg_file y_reg(
    .clk(clk),
    .reset(reset),
    .load(y_load),
    .data(ymux_out), .out(y_regout)
    );
	 
	 reg_file gcd_reg(
    .clk(clk),
    .reset(reset),
    .load(gcd_load),
    .data(x_regout), .out(gcd)
    );
	 
	 assign x_temp = x_regout - y_regout;
	 assign y_temp = y_regout - x_regout;
	 
	 always@(x_regout or y_regout)
	 begin
		if((x_regout == y_regout) & (reset == 1'b0))
			begin
			$display("eq_flag set");
			eq_flag <= 1'b1;
			end
		else
			begin
			$display("eq flag not set");
			eq_flag <= 1'b0;
			end
	 end
	 
	 always@(x_regout or y_regout)
	 begin
		if(x_regout < y_regout) // Including a reset condition check might be needed
		begin
		$display("if_flag set");
			if_flag <= 1'b1;
			end
		else
			if_flag <= 1'b0;
	 end

endmodule
