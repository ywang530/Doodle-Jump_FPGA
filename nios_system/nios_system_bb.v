
module nios_system (
	clk_clk,
	doodle_x_export,
	doodle_y_export,
	floor1_x_export,
	floor1_y_export,
	floor2_x_export,
	floor2_y_export,
	floor3_x_export,
	floor3_y_export,
	floor4_x_export,
	floor4_y_export,
	floor5_x_export,
	floor5_y_export,
	floor6_x_export,
	floor6_y_export,
	floor7_x_export,
	floor7_y_export,
	floor8_x_export,
	floor8_y_export,
	keycode_export,
	otg_hpi_address_export,
	otg_hpi_cs_export,
	otg_hpi_data_in_port,
	otg_hpi_data_out_port,
	otg_hpi_r_export,
	otg_hpi_reset_export,
	otg_hpi_w_export,
	reset_reset_n,
	sdram_clk_clk,
	sdram_wire_addr,
	sdram_wire_ba,
	sdram_wire_cas_n,
	sdram_wire_cke,
	sdram_wire_cs_n,
	sdram_wire_dq,
	sdram_wire_dqm,
	sdram_wire_ras_n,
	sdram_wire_we_n,
	score_export);	

	input		clk_clk;
	output	[9:0]	doodle_x_export;
	output	[9:0]	doodle_y_export;
	output	[9:0]	floor1_x_export;
	output	[9:0]	floor1_y_export;
	output	[9:0]	floor2_x_export;
	output	[9:0]	floor2_y_export;
	output	[9:0]	floor3_x_export;
	output	[9:0]	floor3_y_export;
	output	[9:0]	floor4_x_export;
	output	[9:0]	floor4_y_export;
	output	[9:0]	floor5_x_export;
	output	[9:0]	floor5_y_export;
	output	[9:0]	floor6_x_export;
	output	[9:0]	floor6_y_export;
	output	[9:0]	floor7_x_export;
	output	[9:0]	floor7_y_export;
	output	[9:0]	floor8_x_export;
	output	[9:0]	floor8_y_export;
	output	[7:0]	keycode_export;
	output	[1:0]	otg_hpi_address_export;
	output		otg_hpi_cs_export;
	input	[15:0]	otg_hpi_data_in_port;
	output	[15:0]	otg_hpi_data_out_port;
	output		otg_hpi_r_export;
	output		otg_hpi_reset_export;
	output		otg_hpi_w_export;
	input		reset_reset_n;
	output		sdram_clk_clk;
	output	[12:0]	sdram_wire_addr;
	output	[1:0]	sdram_wire_ba;
	output		sdram_wire_cas_n;
	output		sdram_wire_cke;
	output		sdram_wire_cs_n;
	inout	[31:0]	sdram_wire_dq;
	output	[3:0]	sdram_wire_dqm;
	output		sdram_wire_ras_n;
	output		sdram_wire_we_n;
	output	[15:0]	score_export;
endmodule
