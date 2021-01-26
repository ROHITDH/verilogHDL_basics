`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:46:36 01/24/2021 
// Design Name: 
// Module Name:    sawtooth_TB 
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
module sawtooth_TB();

	reg clk,reset;
	wire [7:0]dac_out;
	
	sawtoot_wave uut(clk, dac_out, reset);
	initial
		begin
			clk  = 0;
			forever #5 clk = ~clk;
		end
		
	initial
		begin
			reset = 1;
			#10;
			reset = 0;
		end
endmodule
