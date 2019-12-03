	component nios_system is
		port (
			clk_clk                : in    std_logic                     := 'X';             -- clk
			doodle_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			doodle_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor1_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor1_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor2_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor2_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor3_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor3_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor4_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor4_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor5_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor5_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor6_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor6_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor7_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor7_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor8_x_export        : out   std_logic_vector(9 downto 0);                     -- export
			floor8_y_export        : out   std_logic_vector(9 downto 0);                     -- export
			keycode_export         : out   std_logic_vector(7 downto 0);                     -- export
			otg_hpi_address_export : out   std_logic_vector(1 downto 0);                     -- export
			otg_hpi_cs_export      : out   std_logic;                                        -- export
			otg_hpi_data_in_port   : in    std_logic_vector(15 downto 0) := (others => 'X'); -- in_port
			otg_hpi_data_out_port  : out   std_logic_vector(15 downto 0);                    -- out_port
			otg_hpi_r_export       : out   std_logic;                                        -- export
			otg_hpi_reset_export   : out   std_logic;                                        -- export
			otg_hpi_w_export       : out   std_logic;                                        -- export
			reset_reset_n          : in    std_logic                     := 'X';             -- reset_n
			sdram_clk_clk          : out   std_logic;                                        -- clk
			sdram_wire_addr        : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_wire_ba          : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_wire_cas_n       : out   std_logic;                                        -- cas_n
			sdram_wire_cke         : out   std_logic;                                        -- cke
			sdram_wire_cs_n        : out   std_logic;                                        -- cs_n
			sdram_wire_dq          : inout std_logic_vector(31 downto 0) := (others => 'X'); -- dq
			sdram_wire_dqm         : out   std_logic_vector(3 downto 0);                     -- dqm
			sdram_wire_ras_n       : out   std_logic;                                        -- ras_n
			sdram_wire_we_n        : out   std_logic;                                        -- we_n
			score_export           : out   std_logic_vector(15 downto 0)                     -- export
		);
	end component nios_system;

	u0 : component nios_system
		port map (
			clk_clk                => CONNECTED_TO_clk_clk,                --             clk.clk
			doodle_x_export        => CONNECTED_TO_doodle_x_export,        --        doodle_x.export
			doodle_y_export        => CONNECTED_TO_doodle_y_export,        --        doodle_y.export
			floor1_x_export        => CONNECTED_TO_floor1_x_export,        --        floor1_x.export
			floor1_y_export        => CONNECTED_TO_floor1_y_export,        --        floor1_y.export
			floor2_x_export        => CONNECTED_TO_floor2_x_export,        --        floor2_x.export
			floor2_y_export        => CONNECTED_TO_floor2_y_export,        --        floor2_y.export
			floor3_x_export        => CONNECTED_TO_floor3_x_export,        --        floor3_x.export
			floor3_y_export        => CONNECTED_TO_floor3_y_export,        --        floor3_y.export
			floor4_x_export        => CONNECTED_TO_floor4_x_export,        --        floor4_x.export
			floor4_y_export        => CONNECTED_TO_floor4_y_export,        --        floor4_y.export
			floor5_x_export        => CONNECTED_TO_floor5_x_export,        --        floor5_x.export
			floor5_y_export        => CONNECTED_TO_floor5_y_export,        --        floor5_y.export
			floor6_x_export        => CONNECTED_TO_floor6_x_export,        --        floor6_x.export
			floor6_y_export        => CONNECTED_TO_floor6_y_export,        --        floor6_y.export
			floor7_x_export        => CONNECTED_TO_floor7_x_export,        --        floor7_x.export
			floor7_y_export        => CONNECTED_TO_floor7_y_export,        --        floor7_y.export
			floor8_x_export        => CONNECTED_TO_floor8_x_export,        --        floor8_x.export
			floor8_y_export        => CONNECTED_TO_floor8_y_export,        --        floor8_y.export
			keycode_export         => CONNECTED_TO_keycode_export,         --         keycode.export
			otg_hpi_address_export => CONNECTED_TO_otg_hpi_address_export, -- otg_hpi_address.export
			otg_hpi_cs_export      => CONNECTED_TO_otg_hpi_cs_export,      --      otg_hpi_cs.export
			otg_hpi_data_in_port   => CONNECTED_TO_otg_hpi_data_in_port,   --    otg_hpi_data.in_port
			otg_hpi_data_out_port  => CONNECTED_TO_otg_hpi_data_out_port,  --                .out_port
			otg_hpi_r_export       => CONNECTED_TO_otg_hpi_r_export,       --       otg_hpi_r.export
			otg_hpi_reset_export   => CONNECTED_TO_otg_hpi_reset_export,   --   otg_hpi_reset.export
			otg_hpi_w_export       => CONNECTED_TO_otg_hpi_w_export,       --       otg_hpi_w.export
			reset_reset_n          => CONNECTED_TO_reset_reset_n,          --           reset.reset_n
			sdram_clk_clk          => CONNECTED_TO_sdram_clk_clk,          --       sdram_clk.clk
			sdram_wire_addr        => CONNECTED_TO_sdram_wire_addr,        --      sdram_wire.addr
			sdram_wire_ba          => CONNECTED_TO_sdram_wire_ba,          --                .ba
			sdram_wire_cas_n       => CONNECTED_TO_sdram_wire_cas_n,       --                .cas_n
			sdram_wire_cke         => CONNECTED_TO_sdram_wire_cke,         --                .cke
			sdram_wire_cs_n        => CONNECTED_TO_sdram_wire_cs_n,        --                .cs_n
			sdram_wire_dq          => CONNECTED_TO_sdram_wire_dq,          --                .dq
			sdram_wire_dqm         => CONNECTED_TO_sdram_wire_dqm,         --                .dqm
			sdram_wire_ras_n       => CONNECTED_TO_sdram_wire_ras_n,       --                .ras_n
			sdram_wire_we_n        => CONNECTED_TO_sdram_wire_we_n,        --                .we_n
			score_export           => CONNECTED_TO_score_export            --           score.export
		);

