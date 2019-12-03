//-------------------------------------------------------------------------
//    Color_Mapper.sv                                                    --
//    Stephen Kempf                                                      --
//    3-1-06                                                             --
//                                                                       --
//    Modified by David Kesler  07-16-2008                               --
//    Translated by Joe Meng    07-07-2013                               --
//    Modified by Po-Han Huang  10-06-2017                               --
//                                                                       --
//    Fall 2017 Distribution                                             --
//                                                                       --
//    For use with ECE 385 Lab 8                                         --
//    University of Illinois ECE Department                              --
//-------------------------------------------------------------------------

// color_mapper: Decide which color to be output to VGA for each pixel.
module  color(input        [9:0] DrawX, DrawY,       // Current pixel coordinates
                       output logic [7:0] VGA_R, VGA_G, VGA_B, // VGA RGB output
							  input logic  [3:0] PaletteIndex
                     );
    
    logic [7:0] Red, Green, Blue;
    
    // Output colors to VGA
    assign VGA_R = Red;
    assign VGA_G = Green;
    assign VGA_B = Blue;
    
    // Assign color based on is_ball signal
    always_comb
    begin
        unique case(PaletteIndex)
					8'h00: begin
					if (DrawX % 8 == 0 || DrawY % 8 == 0) begin
						Red = 8'd231;
						Green = 8'd202;
						Blue = 8'd160; 
					end
					else begin
            // Background white color
						Red = 8'd250; 
						Green = 8'd247;
						Blue = 8'd235;
					end
					end
					
					8'h01: begin				// Black
					Red = 8'h00; 
					Green = 8'h00;
					Blue = 8'h00;
					end

					8'h02: begin				// 
					Red = 8'h26; 
					Green = 8'h26;
					Blue = 8'h26;
					end
					
					8'h03: begin				// 
					Red = 8'h07; 
					Green = 8'h9c;
					Blue = 8'hc2;
					end

					8'h04: begin				// 
					Red = 8'hc7; 
					Green = 8'hc4;
					Blue = 8'h2b;
					end

					8'h05: begin				// 
					Red = 8'h5b; 
					Green = 8'h8c;
					Blue = 8'h20;
					end

					8'h06: begin				// 
					Red = 8'h59; 
					Green = 8'h59;
					Blue = 8'h59;
					end

					8'h07: begin				// 
					Red = 8'hfd; 
					Green = 8'he8;
					Blue = 8'h7d;
					end
					
					8'h08: begin				// 
					Red = 8'h48; 
					Green = 8'h92;
					Blue = 8'h6a;
					end

					8'h09: begin				// background as white
					Red = 8'd250; 
					Green = 8'd247;
					Blue = 8'd235;
					end
				endcase
    end 
    
endmodule
