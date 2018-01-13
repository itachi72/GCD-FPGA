`timescale 1ns / 1ps

module control(
    input clk,
    input reset,
    input eq_flag,
    input if_flag,
	output reg done,
    output x_load,
    output y_load,
    output x_sel,
    output y_sel,
    output gcd_load
    );
	 
	 reg [3:0]present_state, next_state;
	 reg x_sel, y_sel, x_load, y_load, gcd_load;
	 parameter start = 1, 
				  in = 2,
				  test = 3,
				  test2 = 4,
				  update1 = 5,
				  update2 = 6,
				  stop = 7;
	 always@(posedge clk or reset)
	 begin
	 if(reset)
		begin
		present_state <= start;
		next_state <= start;
		done <= 0;
		$display("during reset");
		end
	 else
		case(next_state)
		 start: begin
					next_state <= in;
					$display("next state is test");
					end
	     test: begin
					x_sel <= 1'b0;
					y_sel <= 1'b0;
					x_load <= 1'b0;
					y_load <= 1'b0;
					//if( eq_flag == 1'b1)
					//	next_state <= done;
					//else
					next_state <= test2;
				  end
		  test2: begin
					x_sel <= 1'b0;
					y_sel <= 1'b0;
					x_load <= 1'b0;
					y_load <= 1'b0;
					if( eq_flag == 1'b1)
						next_state <= stop;
					else if( if_flag == 1'b1)
						next_state <= update1;
					else
						next_state <= update2;
						
					end
		  update2: begin		// y = y - x;
					 	x_load <= 1'b1;
					 	y_load <= 1'b0;
					 	x_sel <= 1'b0;
					 	next_state <= test;
					 	$display("update1");
					 end
		  update1: begin
						y_load <= 1'b1;
						x_load <= 1'b0;
						y_sel <= 1'b0;
					   next_state <= test;
					  end
		  in: begin
				x_sel <= 1'b1; y_sel <= 1'b1; 
				x_load <= 1'b1; y_load <= 1'b1;
				if( eq_flag == 1'b1)
					next_state <= stop;
				else 
					next_state <= test;
			end
		stop: begin
			gcd_load <= 1'b1;
			done <= 1;
			next_state <= stop;
			end
	   endcase
	end
/*	
	always@(next_state)
	begin
	x_load <= 1'b0; y_load <= 1'b0; gcd_load <= 1'b0; x_sel <= 1'b0; y_sel <= 1'b0;
	case(next_state)
	in: begin
		 x_sel <= 1'b1; y_sel <= 1'b1; 
		 x_load <= 1'b1; y_load <= 1'b1;
		 next_state <= test;
		 $display("data is input");
		 end
	update1: begin
				x_load <= 1'b1;
				x_sel <= 1'b0;
				$display("update 1 done");
				end
   update2: begin
				y_load <= 1'b1;
				y_sel <= 1'b0;
				$display("update 2 done");
				end
	done: begin
			gcd_load <= 1'b1;
			next_state <= done;
			$display("completed");
			end
	endcase
	end	        
*/
endmodule
