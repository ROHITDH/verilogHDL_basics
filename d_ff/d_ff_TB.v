`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:01 01/24/2021 
// Design Name: 
// Module Name:    d_ff_TB 
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
module d_ff_TB();
	reg d,clk;
	wire q,qb;
	
	d_ff uut(d,clk,q,qb);
		initial
			begin
				clk = 0;
				forever #5 clk = ~clk;
			end
			
		initial
			begin
				d = 0; #10;
				d = 1; #10;
				$stop;
			end
endmodule
