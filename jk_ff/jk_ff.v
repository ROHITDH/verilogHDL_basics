`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:52 01/24/2021 
// Design Name: 
// Module Name:    jk_ff 
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
module jk_ff(j,k,clk,q,qb);
	input j,k,clk;
	output q,qb;
	
	reg q,qb;
	
	always @(posedge clk)
		begin
			case({j,k})
				2'b00 : q = q;
				2'b01 : q = 0;
				2'b10 : q = 1;
				2'b11 : q = ~q;
			endcase
			qb = ~q;
		end
endmodule
