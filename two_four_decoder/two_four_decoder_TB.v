`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:28:51 01/24/2021 
// Design Name: 
// Module Name:    two_four_decoder_TB 
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
module two_four_decoder_TB;
	reg a,b,en;
	wire [3:0]y;
	
	two_four_decoder uut(a,b,en,y);
	initial
		begin
			en = 0;
			#10 en = 1;
			
			#10 a = 0; b = 0;
			#10 		  b = 1;
			#10 a = 1; b = 0;
			#10		  b = 1;
			#10;
			$stop;
		end
endmodule
