`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:34 01/24/2021 
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
//sum = 1,2,4,7
//carry = 3,5,6,7
module full_adder(a,b,cin,sum,cout);
	input a,b,cin;
	output sum,cout;
	
	reg sum,cout;
	
	always @(a,b,cin)
		begin
				  if((a==0) && (b==0) && cin==0)
				begin sum = 0; cout = 0; end
			else if((a==0) && (b==0) && cin==1)
				begin sum = 1; cout = 0; end
			else if((a==0) && (b==1) && cin==0)
				begin sum = 1; cout = 0; end
			else if((a==0) && (b==1) && cin==1)
				begin sum = 0; cout = 1; end
				
				
			else if((a==1) && (b==0) && cin==0)
				begin sum = 1; cout = 0; end
			else if((a==1) && (b==0) && cin==1)
				begin sum = 0; cout = 1; end
			else if((a==1) && (b==1) && cin==0)
				begin sum = 0; cout = 1; end
			else if((a==1) && (b==1) && cin==1)
				begin sum = 1; cout = 1; end
				
		end
endmodule
