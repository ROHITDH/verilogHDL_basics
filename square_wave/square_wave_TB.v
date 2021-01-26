`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:11 01/24/2021 
// Design Name: 
// Module Name:    square_wave_TB 
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
module square_wave_TB();
	reg clk,reset;
	wire [7:0]dac_out;

	square_wave uut(clk,reset,dac_out);
		initial
			begin
				clk = 0;
				forever #5 clk = ~clk;
			end
			
		initial
			begin
				reset = 0;
			end

endmodule
