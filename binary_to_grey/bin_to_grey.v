`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:24 01/24/2021 
// Design Name: 
// Module Name:    bin_to_grey 
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
module bin_to_grey(b,g);
	input [3:0]b;
	output [3:0]g;
	
	assign g[3] = b[3];
	assign g[2] = b[3] ^ b[2];
	assign g[1] = b[2] ^ b[1];
	assign g[0] = b[1] ^ b[0];
	
endmodule
