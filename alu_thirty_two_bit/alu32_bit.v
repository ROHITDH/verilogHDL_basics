`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:42 01/24/2021 
// Design Name: 
// Module Name:    alu32_bit 
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
module alu32_bit(a,b,en,opcode,res);
	input en;
	input [31:0]a;
	input [31:0]b;
	input [2:0]opcode;
	
	output [31:0]res;
	
	reg [31:0]res;
	always @(a,b,en,opcode)
		begin
			if(!en)
				res = 32'bz;
			else
				begin
					case(opcode)
						3'b000: res = a + b;
						3'b001: res = a - b;
						
						3'b010: res = a + 1;
						3'b011: res = a - 1;
						
						3'b100: res = a ;
						3'b101: res = ~a ;
						
						3'b110: res = a && b;
						3'b111: res = a || b;
						
						default : res = 32'b0;
					endcase
				end
		end
	
endmodule
