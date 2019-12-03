#**************************************************************
# Create Clock (where ‘Clk’ is the user-defined system clock name)
#**************************************************************
create_clock -name {Clk} -period 20ns -waveform {0.000 5.000} [get_ports {Clk}]
#creates a clock, applies it to all ports named “Clk” in toplevel
#note: -waveform specifies duty cycle, in this case 50%


set_input_delay -clock {Clk} -max 3 [all_inputs]
set_input_delay -clock {Clk} -min 2 [all_inputs]

set_output_delay -clock {Clk} 2 [all_outputs]
