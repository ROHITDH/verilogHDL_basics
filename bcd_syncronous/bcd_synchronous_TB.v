`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:41:24 01/24/2021 
// Design Name: 
// Module Name:    bcd_synchronous_TB 
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
module bcd_synchronous_TB(
    );
	 reg clk,reset;
	 wire [3:0]y;
	 
	bcd_synchronous uut(clk,y,reset);
		initial
			begin
				clk = 0;
				forever #5 clk = ~clk;
			end
			
		initial
			begin
				reset = 1;
				#10;
				reset = 0;
				#140
				reset = 1;
				#10;
				$stop;
			end

endmodule
