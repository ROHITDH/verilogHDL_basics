`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:31:33 01/24/2021 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(a,b,cin,sum,cout);
	input a,b,cin;
	output sum,cout;
	
	wire ab,bc,ca;
	
	xor x1(sum,a,b,cin);
		
	and a1(ab,a,b);
	and a2(bc,b,cin);
	and a3(ca,cin,a);
	
	or o1(cout,ab,bc,ca);
endmodule
