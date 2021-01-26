`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:42 01/24/2021 
// Design Name: 
// Module Name:    d_ff 
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
module d_ff(d,clk,q,qb);
	input d,clk;
	output q,qb;
	
	reg q,qb;
	
	always @(posedge clk)
		begin
			q = d;
			qb = ~q;
		end
endmodule
