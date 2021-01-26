`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:12 01/24/2021 
// Design Name: 
// Module Name:    eight_to_one_mux 
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
module eight_to_one_mux(a,y,s);
	input [7:0]a;
	input [2:0]s;
	
	output y;
	reg y;
	
	always @(a,s)
		case(s)
			3'b000:	y = a[0];
			3'b001:	y = a[1];
			3'b010:	y = a[2];
			3'b011:	y = a[3];
			
			3'b100:	y = a[4];
			3'b101:	y = a[5];
			3'b110:	y = a[6];
			3'b111:	y = a[7];
			
			default: y = 3'b000;
		endcase
endmodule
