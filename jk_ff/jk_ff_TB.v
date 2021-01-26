`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:40 01/24/2021 
// Design Name: 
// Module Name:    jk_ff_TB 
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
module jk_ff_TB();
	reg j,k,clk;
	wire q,qb;

	jk_ff uut(j,k,clk,q,qb);
		initial
			begin
				clk = 1'b0;
				forever #5 clk = ~clk;
			end
			
		initial
			begin
				j = 0; k = 1; #10; //low
				j = 0; k = 0; #10; //no change
				j = 1; k = 0; #10; //high
				j = 1; k = 1; #10; //complement
				$stop;
			end
endmodule
