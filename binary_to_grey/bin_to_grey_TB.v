`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:57:53 01/24/2021 
// Design Name: 
// Module Name:    bin_to_grey_TB 
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
module bin_to_grey_TB(
    );
	 reg [3:0]b;
	 wire [3:0]g;
	 integer i;
	
	bin_to_grey uut(b,g);	 
	 initial
		begin
			for(i=0;i<16;i=i+1)
				begin 
					b = i; 
					#10;
				end
			$stop;
		end
endmodule
