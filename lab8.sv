//-------------------------------------------------------------------------
//      lab8.sv                                                          --
//      Christine Chen                                                   --
//      Fall 2014                                                        --
//                                                                       --
//      Modified by Po-Han Huang                                         --
//      10/06/2017                                                       --
//                                                                       --
//      Fall 2017 Distribution                                           --
//                                                                       --
//      For use with ECE 385 Lab 8                                       --
//      UIUC ECE Department                                              --
//-------------------------------------------------------------------------


module lab8( input               CLOCK_50,
             input        [3:0]  KEY,          //bit 0 is set up as Reset
             output logic [6:0] 	HEX0, HEX1, HEX2, HEX3, HEX4, HEX5, HEX6, HEX7,
             // VGA Interface 
             output logic [7:0]  VGA_R,        //VGA Red
                                 VGA_G,        //VGA Green
                                 VGA_B,        //VGA Blue
             output logic        VGA_CLK,      //VGA Clock
                                 VGA_SYNC_N,   //VGA Sync signal
                                 VGA_BLANK_N,  //VGA Blank signal
                                 VGA_VS,       //VGA virtical sync signal
                                 VGA_HS,       //VGA horizontal sync signal
											
				// CY7C67200 Interface
             inout  wire  [15:0] OTG_DATA,     //CY7C67200 Data bus 16 Bits
             output logic [1:0]  OTG_ADDR,     //CY7C67200 Address 2 Bits
             output logic        OTG_CS_N,     //CY7C67200 Chip Select
                                 OTG_RD_N,     //CY7C67200 Write
                                 OTG_WR_N,     //CY7C67200 Read
                                 OTG_RST_N,    //CY7C67200 Reset
             input               OTG_INT,      //CY7C67200 Interrupt
				 
				 

             // SDRAM Interface for Nios II Software
             output logic [12:0] DRAM_ADDR,    //SDRAM Address 13 Bits
             inout  wire  [31:0] DRAM_DQ,      //SDRAM Data 32 Bits
             output logic [1:0]  DRAM_BA,      //SDRAM Bank Address 2 Bits
             output logic [3:0]  DRAM_DQM,     //SDRAM Data Mast 4 Bits
             output logic        DRAM_RAS_N,   //SDRAM Row Address Strobe
                                 DRAM_CAS_N,   //SDRAM Column Address Strobe
                                 DRAM_CKE,     //SDRAM Clock Enable
                                 DRAM_WE_N,    //SDRAM Write Enable
                                 DRAM_CS_N,    //SDRAM Chip Select
                                 DRAM_CLK,      //SDRAM Clock
				
				output logic SRAM_CE_N, SRAM_UB_N, SRAM_LB_N, SRAM_OE_N, SRAM_WE_N,
				output logic [19:0] SRAM_ADDR,
				inout wire [15:0] SRAM_DQ //tristate buffers need to be of type wire
                    );
    
    logic Reset_h, Clk, is_ball, is_floor;
    logic [7:0] keycode;
    logic [9:0] DrawX, DrawY;
	 
	 
//	 assign SRAM_ADDR = 20'd15875;
	 logic [15:0] Data_from_SRAM;
	 logic OE_out, WE_out;
	 sync_r1 button_FPGA[1:0] (Clk, Reset_h, {OE,WE},{SRAM_OE_N,SRAM_WE_N});
	 assign OE = 1'b0;
	 assign WE = 1'b1;
	 assign SRAM_CE_N = 1'b0;
	 assign SRAM_UB_N = 1'b0;
	 assign SRAM_LB_N = 1'b0;
	 
    assign Clk = CLOCK_50;
    always_ff @ (posedge Clk) begin
        Reset_h <= ~(KEY[0]);        // The push buttons are active low
    end
    
    logic [1:0] hpi_addr;
    logic [15:0] hpi_data_in, hpi_data_out;
    logic hpi_r, hpi_w, hpi_cs, hpi_reset;
	 
	 
	 
	  
	  // Interface between NIOS II and EZ-OTG chip
    hpi_io_intf hpi_io_inst(
                            .Clk(Clk),
                            .Reset(Reset_h),
                            // signals connected to NIOS II
                            .from_sw_address(hpi_addr),
                            .from_sw_data_in(hpi_data_in),
                            .from_sw_data_out(hpi_data_out),
                            .from_sw_r(hpi_r),
                            .from_sw_w(hpi_w),
                            .from_sw_cs(hpi_cs),
                            .from_sw_reset(hpi_reset),
                            // signals connected to EZ-OTG chip
                            .OTG_DATA(OTG_DATA),    
                            .OTG_ADDR(OTG_ADDR),    
                            .OTG_RD_N(OTG_RD_N),    
                            .OTG_WR_N(OTG_WR_N),    
                            .OTG_CS_N(OTG_CS_N),
                            .OTG_RST_N(OTG_RST_N)
    );
	 
	 
     nios_system nios_system(
                             .clk_clk(Clk),         
                             .reset_reset_n(1'b1),    // Never reset NIOS
                             .sdram_wire_addr(DRAM_ADDR), 
                             .sdram_wire_ba(DRAM_BA),   
                             .sdram_wire_cas_n(DRAM_CAS_N),
                             .sdram_wire_cke(DRAM_CKE),  
                             .sdram_wire_cs_n(DRAM_CS_N), 
                             .sdram_wire_dq(DRAM_DQ),   
                             .sdram_wire_dqm(DRAM_DQM),  
                             .sdram_wire_ras_n(DRAM_RAS_N),
                             .sdram_wire_we_n(DRAM_WE_N), 
                             .sdram_clk_clk(DRAM_CLK),
                             .keycode_export(keycode),  
                             .otg_hpi_address_export(hpi_addr),
                             .otg_hpi_data_in_port(hpi_data_in),
                             .otg_hpi_data_out_port(hpi_data_out),
                             .otg_hpi_cs_export(hpi_cs),
                             .otg_hpi_r_export(hpi_r),
                             .otg_hpi_w_export(hpi_w),
                             .otg_hpi_reset_export(hpi_reset),
									  .floor1_x_export(floor1_x),
									  .floor1_y_export(floor1_y),
									  .floor2_x_export(floor2_x),
									  .floor2_y_export(floor2_y),
									  .floor3_x_export(floor3_x),
									  .floor3_y_export(floor3_y),
									  .floor4_x_export(floor4_x),
									  .floor4_y_export(floor4_y),
									  .floor5_x_export(floor5_x),
									  .floor5_y_export(floor5_y),
									  .floor6_x_export(floor6_x),
									  .floor6_y_export(floor6_y),
									  .floor7_x_export(floor7_x),
									  .floor7_y_export(floor7_y),
									  .floor8_x_export(floor8_x),
									  .floor8_y_export(floor8_y),
									  
									  .doodle_x_export(doodle_x),
									  .doodle_y_export(doodle_y),
									  .score_export(score)
    );
	 

	 
	 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	 logic [3:0] PaletteIndex;
	 logic [9:0] floor1_x, floor1_y, floor2_x, floor2_y, floor3_x, floor3_y, floor4_x, floor4_y, floor5_x, floor5_y,
					 floor6_x, floor6_y, floor7_x, floor7_y, floor8_x, floor8_y;
	 logic [15:0] score;
	 logic [9:0] doodle_x,doodle_y;
	 logic [5:0] sprite_x, sprite_y, floor_xx, floor_yy, sprite_x_in, sprite_y_in;
	 int DistX, DistY, DistX1, DistY1, DistX2, DistY2, DistX3, DistY3, DistX4, DistY4, DistX5, DistY5, DistX6, DistY6, DistX7, DistY7, DistX8, DistY8;
	 int DistXX, DistYY;
    assign DistX = DrawX - doodle_x;
    assign DistY = DrawY - doodle_y;
	 
	 assign DistX1 = DrawX - floor1_x;
	 assign DistY1 = DrawY - floor1_y;
	 assign DistX2 = DrawX - floor2_x;
	 assign DistY2 = DrawY - floor2_y;
	 assign DistX3 = DrawX - floor3_x;
	 assign DistY3 = DrawY - floor3_y;
	 assign DistX4 = DrawX - floor4_x;
	 assign DistY4 = DrawY - floor4_y;
	 assign DistX5 = DrawX - floor5_x;
	 assign DistY5 = DrawY - floor5_y;
	 assign DistX6 = DrawX - floor6_x;
	 assign DistY6 = DrawY - floor6_y;
	 assign DistX7 = DrawX - floor7_x;
	 assign DistY7 = DrawY - floor7_y;
	 assign DistX8 = DrawX - floor8_x;
	 assign DistY8 = DrawY - floor8_y;
	 
	 

    vga_clk vga_clk_instance(.inclk0(Clk), .c0(VGA_CLK));

    VGA_controller vga_controller_instance(.Clk(CLOCK_50), .Reset(Reset_h), .VGA_HS(VGA_HS), .VGA_VS(VGA_VS), .VGA_CLK(VGA_CLK), .VGA_BLANK_N(VGA_BLANK_N), .VGA_SYNC_N(VGA_SYNC_N), .DrawX(DrawX), .DrawY(DrawY));
										  
	 color color_instance(.DrawX(DrawX), .DrawY(DrawY), .VGA_R(VGA_R), .VGA_G(VGA_G), .VGA_B(VGA_B), .PaletteIndex(PaletteIndex));
    
    // Display keycode on hex display
    HexDriver hex_inst_0 (keycode[3:0], HEX0);
    HexDriver hex_inst_1 (keycode[7:4], HEX1);
	 HexDriver hex_inst_2 (doodle_x[3:0], HEX2);
	 HexDriver hex_inst_3 (doodle_x[7:4], HEX3);
	 HexDriver hex_inst_4 (floor1_x[7:4], HEX4);
	 HexDriver hex_inst_5 (floor1_x[3:0], HEX5);
	 HexDriver hex_inst_6 (score[7:4], HEX6);
	 HexDriver hex_inst_7 (score[3:0], HEX7);

	logic [15:0][31:0] registers = 10'b0;
	 
	always_comb begin
		
		if (DistX * DistX <= 10'd256 && DistY * DistY <= 10'd256 ) begin		// check doodle
			sprite_x = DrawX - doodle_x + 16;
			sprite_y = DrawY - doodle_y + 16;
			SRAM_ADDR = (sprite_x + 0 + ((sprite_y+0) << 8));
			floor_xx = 0;
			floor_yy = 0;
				
			if(keycode== 8'h4f)begin						// doodle right
				sprite_x = DrawX - doodle_x + 16;
				sprite_y = DrawY - doodle_y + 16;
				SRAM_ADDR = (sprite_x + 0 + ((sprite_y+0) << 8));
			end
			else if(keycode== 8'h50) begin				// doodle left
				sprite_x = DrawX - doodle_x + 16;
				sprite_y = DrawY - doodle_y + 16;
				SRAM_ADDR = (sprite_x + 32 + ((sprite_y+0) << 8));
			end
			else begin
				sprite_x = sprite_x;
				sprite_y = sprite_y;
				SRAM_ADDR = SRAM_ADDR;
			end
		end
		
		else if(DistX1 * DistX1 <= 11'd1024 && DistY1 * DistY1 <= 10'd256) begin
					floor_xx = DrawX - floor1_x + 32;
					floor_yy = DrawY - floor1_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX2 * DistX2 <= 11'd1024 && DistY2 * DistY2 <= 10'd256) begin
					floor_xx = DrawX - floor2_x + 32;
					floor_yy = DrawY - floor2_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX3 * DistX3 <= 11'd1024 && DistY3 * DistY3 <= 10'd256) begin
					floor_xx = DrawX - floor3_x + 32;
					floor_yy = DrawY - floor3_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX4 * DistX4 <= 11'd1024 && DistY4 * DistY4 <= 10'd256) begin
					floor_xx = DrawX - floor4_x + 32;
					floor_yy = DrawY - floor4_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX5 * DistX5 <= 11'd1024 && DistY5 * DistY5 <= 10'd256) begin
					floor_xx = DrawX - floor5_x + 32;
					floor_yy = DrawY - floor5_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX6 * DistX6 <= 11'd1024 && DistY6 * DistY6 <= 10'd256) begin
					floor_xx = DrawX - floor6_x + 32;
					floor_yy = DrawY - floor6_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX7 * DistX7 <= 11'd1024 && DistY7 * DistY7 <= 10'd256) begin
					floor_xx = DrawX - floor7_x + 32;
					floor_yy = DrawY - floor7_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
		
		else if(DistX8 * DistX8 <= 11'd1024 && DistY8 * DistY8 <= 10'd256) begin
					floor_xx = DrawX - floor8_x + 32;
					floor_yy = DrawY - floor8_y + 16;
					SRAM_ADDR = (floor_xx + 0 + ((floor_yy+32) << 8));
					sprite_x = 0;
					sprite_y = 0;
		end
	
		else begin
			sprite_x = 0;
			sprite_y = 0;
			SRAM_ADDR = 0;
			floor_xx = 0;
			floor_yy = 0;
		end
	end
	
	assign PaletteIndex = SRAM_DQ;
	  
	 
	 
endmodule
