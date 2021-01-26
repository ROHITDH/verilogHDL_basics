`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:07:53 01/24/2021 
// Design Name: 
// Module Name:    srff 
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
module srff(s,r,q,qb,clk);
	input s,r,clk;
	output q,qb;
	
	reg q,qb;
	
	always @(posedge clk)
		begin
			case({s,r})
				2'b00 : q = q;
				2'b01 : q = 0;
				2'b10 : q = 1;
				2'b11 : q = 1'bz;
			endcase
			qb = ~q;
		end
endmodule
