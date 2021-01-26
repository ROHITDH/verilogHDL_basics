`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:	dvrblacktech 
// student: rohitdh 
// 
// Create Date:    11:15:31 01/24/2021 
// Design Name:    two_four_decoder_using_nand_gates_only
// Module Name:    two_four_decoder 
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
module two_four_decoder(a,b,en,y);

	 input a,b,en;
	 output [3:0]y;
	 
	 wire a1,b1;
	 
	 nand n1(a1,a,a), n2(b1,b,b);
	 
	 nand n3(y[0],a1,b1,en);
	 nand n4(y[1],a1,b,en);
	 nand n5(y[2],a,b1,en);
	 nand n6(y[3],a,b,en);
	
endmodule
