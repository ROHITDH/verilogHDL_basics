`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:04 01/24/2021 
// Design Name: 
// Module Name:    stepper_TB 
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
module stepper_TB();
	reg clk,dir;
	wire [3:0]d_out;
	
	stepper uut(clk,dir,d_out);
		initial
			begin
				clk = 0;
				forever #2 clk = ~clk;
			end
			
		initial
			begin
				dir = 1'b0;
			end
endmodule
