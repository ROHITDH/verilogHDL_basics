`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:02 01/24/2021 
// Design Name: 
// Module Name:    full_adder_TB 
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
module full_adder_TB();
	reg a,b,cin;
	wire sum,cout;
	
	full_adder uut(a,b,cin,sum,cout);
		initial
			begin
				a = 0; b = 0; cin = 0; #10;
				a = 0; b = 0; cin = 1; #10;
				a = 0; b = 1; cin = 0; #10;
				a = 0; b = 1; cin = 1; #10;
				
				a = 1; b = 0; cin = 0; #10;
				a = 1; b = 0; cin = 1; #10;
				a = 1; b = 1; cin = 0; #10;
				a = 1; b = 1; cin = 1; #10;
				
				$stop;
			end
endmodule
