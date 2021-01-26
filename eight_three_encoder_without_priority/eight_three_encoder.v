`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:48:59 01/24/2021 
// Design Name: 
// Module Name:    eight_three_encoder 
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
module eight_three_encoder(a,en,y);

	input [7:0]a;
	input en;
	
	output [2:0]y;
	reg [2:0]y;
	
	always @(a , en)
		begin
			if(!en)
				y = 3'bzzz;
			else
				case(a)
					8'b0000_0001 : y = 3'b000;
					8'b0000_0010 : y = 3'b001;
					8'b0000_0100 : y = 3'b010;
					8'b0000_1000 : y = 3'b011;
					
					8'b0001_0000 : y = 3'b100;
					8'b0010_0000 : y = 3'b101;
					8'b0100_0000 : y = 3'b110;
					8'b1000_0000 : y = 3'b111;
					
					default: y = 3'b000;
				endcase	
		end
endmodule
