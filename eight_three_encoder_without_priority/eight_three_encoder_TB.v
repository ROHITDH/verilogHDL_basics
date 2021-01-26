`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:56:08 01/24/2021 
// Design Name: 
// Module Name:    eight_three_encoder_TB 
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
module eight_three_encoder_TB(
    );
	reg [7:0]a;
	reg en;
	wire [2:0]y;

	eight_three_encoder uut(a,en,y);
	initial
		begin
			en = 0;
			#10 en = 1;
			
				 a = 8'b0000_0001 ; 
			#10 a = 8'b0000_0010 ; 
			#10 a = 8'b0000_0100 ;
			#10 a = 8'b0000_1000 ;
			
			#10 a = 8'b0001_0000 ;
			#10 a = 8'b0010_0000 ;
			#10 a = 8'b0100_0000 ;
			#10 a = 8'b1000_0000 ;
			#10; $stop;
		end
endmodule
