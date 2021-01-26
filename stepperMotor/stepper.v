`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:39:15 01/24/2021 
// Design Name: 
// Module Name:    stepper 
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
module stepper(clk,dir,d_out);
	input clk,dir;
	output [3:0]d_out;
	
	reg [3:0]d_out;
	reg en = 0;
	reg [15:0]clk_div = 0;
	reg [3:0]shift_reg = 4'b1001;
	integer count;
	
	
	always @(posedge clk)
		clk_div = clk_div + 1;
		
	always @(posedge clk_div)
		begin
			if((dir == 0) && (en == 0))
				begin
					shift_reg = {shift_reg[0],shift_reg[3:1]};
					d_out = shift_reg;
					count = count + 1;
					if(count == 100)
						begin
							count = 0;
							en= 1;
						end
				end
				
			if((dir == 1) && (en == 1))
			begin
				shift_reg = {shift_reg[2:0],shift_reg[3]};
				d_out = shift_reg;
				count = count + 1;
				if(count == 100)
					begin
						count = 0;
						en= 0;
					end
			end
		end
endmodule
