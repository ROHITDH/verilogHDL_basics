`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:54 01/24/2021 
// Design Name: 
// Module Name:    eight_three_encoder_with_priority 
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
module eight_three_encoder_with_priority(en,a,y);
	input en;
	input [7:0]a;
	output [2:0]y;
	
	reg [2:0]y;
	
	always @(en,a)
		begin
			if(!en)
				y = 3'bzzz;
			else
				casex(a)
					8'b0000_0001 : y = 3'b0;
					8'b0000_001x : y = 3'b001;
					8'b0000_01xx : y = 3'b010;
					8'b0000_1xxx : y = 3'b011;
					
					8'b0001_xxxx : y = 3'b100;
					8'b001x_xxxx : y = 3'b101;
					8'b01xx_xxxx : y = 3'b110;
					8'b1xxx_xxxx : y = 3'b111;
					default: y = 3'b000;
				endcase
		end
endmodule
