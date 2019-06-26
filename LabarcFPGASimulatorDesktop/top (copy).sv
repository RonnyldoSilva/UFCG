// DESCRIPTION: Verilator: Systemverilog example module
// with interface to switch buttons, LEDs, LCD and register display

parameter NINSTR_BITS = 32;
parameter NBITS_TOP = 8, NREGS_TOP = 32, NBITS_LCD = 64;
module top(input  logic clk_2,
           input  logic [NBITS_TOP-1:0] SWI,
           output logic [NBITS_TOP-1:0] LED,
           output logic [NBITS_TOP-1:0] SEG,
           output logic [NBITS_LCD-1:0] lcd_a, lcd_b,
           output logic [NINSTR_BITS-1:0] lcd_instruction,
           output logic [NBITS_TOP-1:0] lcd_registrador [0:NREGS_TOP-1],
           output logic [NBITS_TOP-1:0] lcd_pc, lcd_SrcA, lcd_SrcB,
             lcd_ALUResult, lcd_Result, lcd_WriteData, lcd_ReadData, 
           output logic lcd_MemWrite, lcd_Branch, lcd_MemtoReg, lcd_RegWrite);

logic[3:0] num_carros;
logic cancela_entrada;
logic cancela_saida;
parameter q0=0, q1=1, q2=2, q3=3, q4=4;
logic[3:0] estado_atual;
logic clk_1;
logic reset;

always_comb begin
	cancela_entrada <= SWI[0];
	cancela_saida <= SWI[7];
	reset <= SWI[6];
end

always_ff @(posedge clk_2) begin
	clk_1 <= ~clk_1;
	if (reset) begin
		estado_atual <= q0;
		num_carros <= 0;
	end
	unique case (estado_atual)
		q0: if(cancela_entrada && num_carros < 10) estado_atual <= q1; else if (cancela_saida && num_carros > 0) estado_atual <= q3;
		q1: if(!cancela_entrada) estado_atual <= q2;
		q2: begin
			num_carros <= num_carros + 1;
			estado_atual <= q0;
		end
		q3: if(!cancela_saida) estado_atual <= q4;
		q4: begin
			num_carros <= num_carros - 1;
			estado_atual <= q0;
		end
	endcase
end

always_comb begin
	LED[6:3] <= num_carros;
	LED[0] <= cancela_entrada;
	LED[1] <= cancela_saida;
	LED[7] <= clk_1;
end

endmodule
