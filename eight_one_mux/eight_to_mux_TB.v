`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:41:00 01/24/2021 
// Design Name: 
// Module Name:    eight_to_mux_TB 
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
module eight_to_mux_TB(
    );
	reg [7:0]a;
	reg [2:0]s;
	
	wire y;
	
	eight_to_one_mux uut(a,y,s);
	initial
		begin
			a = 8'b0000_1010;
			
			s = 3'b000;
			#10 s = 3'b001;
			#10 s = 3'b010;
			#10 s = 3'b011;
			
			#10 s = 3'b100;
			#10 s = 3'b101;
			#10 s = 3'b110;
			#10 s = 3'b111;
			#10; $stop;
		end
endmodule
