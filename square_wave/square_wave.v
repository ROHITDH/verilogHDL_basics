`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:50:18 01/24/2021 
// Design Name: 
// Module Name:    square_wave 
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
module square_wave(clk,reset,dac_out);
	input clk, reset;
	output [7:0]dac_out;
	
	reg [7:0]dac_out;
	reg [7:0]counter = 8'b0;
	reg en = 1'b0;
	
	reg [3:0]clk_div = 6'b0;
	
	always @(posedge clk)
		clk_div = clk_div+1;
		
	always @(posedge clk_div[3])
		begin
			if(reset)
				counter = 8'b0;
			
			else if((counter < 255) && (en == 0))
				begin
					counter = counter + 1;
					dac_out = 8'b0000_0000;
				end
				
			else if(counter == 0)
				en = 0;
			
			else
				begin
					counter = counter - 1;
					en = 1;
					dac_out = 8'b1111_1111;
				end
		end
endmodule
