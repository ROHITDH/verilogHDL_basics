`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:38:22 01/24/2021 
// Design Name: 
// Module Name:    bcd_syncronous 
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
module bcd_synchronous(clk,y,reset);
	input clk,reset;
	output [3:0]y;
	
	reg [3:0]y = 4'b0;;
	
	always @(posedge clk)
		begin
			if(reset)
				y = 4'b0;
			else if (y == 4'b1010)
				y = 0;
			else
				y = y + 1;
		end
endmodule
