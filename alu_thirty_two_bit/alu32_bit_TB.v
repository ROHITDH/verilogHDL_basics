`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:57:06 01/24/2021 
// Design Name: 
// Module Name:    alu32_bit_TB 
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
module alu32_bit_TB(
    );
	reg [31:0]a,b;
	reg [2:0]opcode;
	reg en;
	
	wire [31:0]res;
	
	alu32_bit uut(a,b,en,opcode,res);
		initial
			begin
				a = 32'd10;
				b = 32'd5;
				
				en = 0; #10;
				en = 1;
				
				opcode = 3'b000; #10;
				opcode = 3'b001; #10;
				opcode = 3'b010; #10;
				opcode = 3'b011; #10;
				
				opcode = 3'b100; #10;
				opcode = 3'b101; #10;
				opcode = 3'b110; #10;
				opcode = 3'b111; #10;
				
				$stop;
			end

endmodule
