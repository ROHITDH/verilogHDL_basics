`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:54 01/24/2021 
// Design Name: 
// Module Name:    sr_ff_TB 
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
module sr_ff_TB();
	reg s,r,clk;
	wire q,qb;

	srff uut(s,r,q,qb,clk);
		initial
			begin
				clk = 1'b0;
				forever #5 clk = ~clk;
			end
			
		initial
			begin
				s = 0; r = 1; #10; //low
				s = 0; r = 0; #10; //no change
				s = 1; r = 0; #10; //high
				s = 1; r = 1; #10; //invalid
				$stop;
			end
endmodule
