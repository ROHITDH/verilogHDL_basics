`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:01 01/24/2021 
// Design Name: 
// Module Name:    sawtoot_wave 
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
module sawtoot_wave(clk, dac_out, reset);

	input clk,reset;

	output [7:0]dac_out;
	
	reg [7:0]dac_out;
	reg [7:0]counter = 8'b0;
	reg [5:0]clk_div = 6'b0;
	
	always @(posedge clk)
		clk_div = clk_div + 1;
		
	always @(posedge clk_div[4])
		begin
			if (reset)
				counter = 0;
			else
				begin
					counter = counter + 1;
					dac_out = counter;
				end
		end
endmodule
