`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:25:20 01/24/2021 
// Design Name: 
// Module Name:    eight_three_encoder_with_priority_TB 
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
module eight_three_encoder_with_priority_TB(
    );
	reg [7:0]a;
	reg en;
	
	wire [2:0]y;
	eight_three_encoder_with_priority uut(en,a,y);
		initial
			begin
				en = 0;
				#10 en = 1;
				
				a = 8'b0000_0001;
				#10 a = 8'b0000_001x;
				#10 a = 8'b0000_01xx;
				#10 a = 8'b0000_1xxx;
				
				#10 a = 8'b0001_xxxx;
				#10 a = 8'b001x_xxxx;
				#10 a = 8'b01xx_xxxx;
				#10 a = 8'b1xxx_xxxx;
				#10; $stop;
			end
endmodule
