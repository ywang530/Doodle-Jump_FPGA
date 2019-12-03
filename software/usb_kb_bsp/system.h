/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: ../../nios_system.sopcinfo
 *
 * Generated: Mon Dec 02 21:03:15 CST 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x10100820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1d
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x10100820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1d
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_QSYS
#define __ALTPLL


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x101011d0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x101011d0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x101011d0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_system"


/*
 * doodle_x configuration
 *
 */

#define ALT_MODULE_CLASS_doodle_x altera_avalon_pio
#define DOODLE_X_BASE 0x10101040
#define DOODLE_X_BIT_CLEARING_EDGE_REGISTER 0
#define DOODLE_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DOODLE_X_CAPTURE 0
#define DOODLE_X_DATA_WIDTH 10
#define DOODLE_X_DO_TEST_BENCH_WIRING 0
#define DOODLE_X_DRIVEN_SIM_VALUE 0
#define DOODLE_X_EDGE_TYPE "NONE"
#define DOODLE_X_FREQ 50000000
#define DOODLE_X_HAS_IN 0
#define DOODLE_X_HAS_OUT 1
#define DOODLE_X_HAS_TRI 0
#define DOODLE_X_IRQ -1
#define DOODLE_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DOODLE_X_IRQ_TYPE "NONE"
#define DOODLE_X_NAME "/dev/doodle_x"
#define DOODLE_X_RESET_VALUE 0
#define DOODLE_X_SPAN 16
#define DOODLE_X_TYPE "altera_avalon_pio"


/*
 * doodle_y configuration
 *
 */

#define ALT_MODULE_CLASS_doodle_y altera_avalon_pio
#define DOODLE_Y_BASE 0x10101030
#define DOODLE_Y_BIT_CLEARING_EDGE_REGISTER 0
#define DOODLE_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DOODLE_Y_CAPTURE 0
#define DOODLE_Y_DATA_WIDTH 10
#define DOODLE_Y_DO_TEST_BENCH_WIRING 0
#define DOODLE_Y_DRIVEN_SIM_VALUE 0
#define DOODLE_Y_EDGE_TYPE "NONE"
#define DOODLE_Y_FREQ 50000000
#define DOODLE_Y_HAS_IN 0
#define DOODLE_Y_HAS_OUT 1
#define DOODLE_Y_HAS_TRI 0
#define DOODLE_Y_IRQ -1
#define DOODLE_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DOODLE_Y_IRQ_TYPE "NONE"
#define DOODLE_Y_NAME "/dev/doodle_y"
#define DOODLE_Y_RESET_VALUE 0
#define DOODLE_Y_SPAN 16
#define DOODLE_Y_TYPE "altera_avalon_pio"


/*
 * floor1_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor1_x altera_avalon_pio
#define FLOOR1_X_BASE 0x10101020
#define FLOOR1_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR1_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR1_X_CAPTURE 0
#define FLOOR1_X_DATA_WIDTH 10
#define FLOOR1_X_DO_TEST_BENCH_WIRING 0
#define FLOOR1_X_DRIVEN_SIM_VALUE 0
#define FLOOR1_X_EDGE_TYPE "NONE"
#define FLOOR1_X_FREQ 50000000
#define FLOOR1_X_HAS_IN 0
#define FLOOR1_X_HAS_OUT 1
#define FLOOR1_X_HAS_TRI 0
#define FLOOR1_X_IRQ -1
#define FLOOR1_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR1_X_IRQ_TYPE "NONE"
#define FLOOR1_X_NAME "/dev/floor1_x"
#define FLOOR1_X_RESET_VALUE 0
#define FLOOR1_X_SPAN 16
#define FLOOR1_X_TYPE "altera_avalon_pio"


/*
 * floor1_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor1_y altera_avalon_pio
#define FLOOR1_Y_BASE 0x10101010
#define FLOOR1_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR1_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR1_Y_CAPTURE 0
#define FLOOR1_Y_DATA_WIDTH 10
#define FLOOR1_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR1_Y_DRIVEN_SIM_VALUE 0
#define FLOOR1_Y_EDGE_TYPE "NONE"
#define FLOOR1_Y_FREQ 50000000
#define FLOOR1_Y_HAS_IN 0
#define FLOOR1_Y_HAS_OUT 1
#define FLOOR1_Y_HAS_TRI 0
#define FLOOR1_Y_IRQ -1
#define FLOOR1_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR1_Y_IRQ_TYPE "NONE"
#define FLOOR1_Y_NAME "/dev/floor1_y"
#define FLOOR1_Y_RESET_VALUE 0
#define FLOOR1_Y_SPAN 16
#define FLOOR1_Y_TYPE "altera_avalon_pio"


/*
 * floor2_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor2_x altera_avalon_pio
#define FLOOR2_X_BASE 0x10101120
#define FLOOR2_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR2_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR2_X_CAPTURE 0
#define FLOOR2_X_DATA_WIDTH 10
#define FLOOR2_X_DO_TEST_BENCH_WIRING 0
#define FLOOR2_X_DRIVEN_SIM_VALUE 0
#define FLOOR2_X_EDGE_TYPE "NONE"
#define FLOOR2_X_FREQ 50000000
#define FLOOR2_X_HAS_IN 0
#define FLOOR2_X_HAS_OUT 1
#define FLOOR2_X_HAS_TRI 0
#define FLOOR2_X_IRQ -1
#define FLOOR2_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR2_X_IRQ_TYPE "NONE"
#define FLOOR2_X_NAME "/dev/floor2_x"
#define FLOOR2_X_RESET_VALUE 0
#define FLOOR2_X_SPAN 16
#define FLOOR2_X_TYPE "altera_avalon_pio"


/*
 * floor2_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor2_y altera_avalon_pio
#define FLOOR2_Y_BASE 0x101010b0
#define FLOOR2_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR2_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR2_Y_CAPTURE 0
#define FLOOR2_Y_DATA_WIDTH 10
#define FLOOR2_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR2_Y_DRIVEN_SIM_VALUE 0
#define FLOOR2_Y_EDGE_TYPE "NONE"
#define FLOOR2_Y_FREQ 50000000
#define FLOOR2_Y_HAS_IN 0
#define FLOOR2_Y_HAS_OUT 1
#define FLOOR2_Y_HAS_TRI 0
#define FLOOR2_Y_IRQ -1
#define FLOOR2_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR2_Y_IRQ_TYPE "NONE"
#define FLOOR2_Y_NAME "/dev/floor2_y"
#define FLOOR2_Y_RESET_VALUE 0
#define FLOOR2_Y_SPAN 16
#define FLOOR2_Y_TYPE "altera_avalon_pio"


/*
 * floor3_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor3_x altera_avalon_pio
#define FLOOR3_X_BASE 0x10101110
#define FLOOR3_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR3_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR3_X_CAPTURE 0
#define FLOOR3_X_DATA_WIDTH 10
#define FLOOR3_X_DO_TEST_BENCH_WIRING 0
#define FLOOR3_X_DRIVEN_SIM_VALUE 0
#define FLOOR3_X_EDGE_TYPE "NONE"
#define FLOOR3_X_FREQ 50000000
#define FLOOR3_X_HAS_IN 0
#define FLOOR3_X_HAS_OUT 1
#define FLOOR3_X_HAS_TRI 0
#define FLOOR3_X_IRQ -1
#define FLOOR3_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR3_X_IRQ_TYPE "NONE"
#define FLOOR3_X_NAME "/dev/floor3_x"
#define FLOOR3_X_RESET_VALUE 0
#define FLOOR3_X_SPAN 16
#define FLOOR3_X_TYPE "altera_avalon_pio"


/*
 * floor3_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor3_y altera_avalon_pio
#define FLOOR3_Y_BASE 0x101010a0
#define FLOOR3_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR3_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR3_Y_CAPTURE 0
#define FLOOR3_Y_DATA_WIDTH 10
#define FLOOR3_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR3_Y_DRIVEN_SIM_VALUE 0
#define FLOOR3_Y_EDGE_TYPE "NONE"
#define FLOOR3_Y_FREQ 50000000
#define FLOOR3_Y_HAS_IN 0
#define FLOOR3_Y_HAS_OUT 1
#define FLOOR3_Y_HAS_TRI 0
#define FLOOR3_Y_IRQ -1
#define FLOOR3_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR3_Y_IRQ_TYPE "NONE"
#define FLOOR3_Y_NAME "/dev/floor3_y"
#define FLOOR3_Y_RESET_VALUE 0
#define FLOOR3_Y_SPAN 16
#define FLOOR3_Y_TYPE "altera_avalon_pio"


/*
 * floor4_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor4_x altera_avalon_pio
#define FLOOR4_X_BASE 0x10101100
#define FLOOR4_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR4_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR4_X_CAPTURE 0
#define FLOOR4_X_DATA_WIDTH 10
#define FLOOR4_X_DO_TEST_BENCH_WIRING 0
#define FLOOR4_X_DRIVEN_SIM_VALUE 0
#define FLOOR4_X_EDGE_TYPE "NONE"
#define FLOOR4_X_FREQ 50000000
#define FLOOR4_X_HAS_IN 0
#define FLOOR4_X_HAS_OUT 1
#define FLOOR4_X_HAS_TRI 0
#define FLOOR4_X_IRQ -1
#define FLOOR4_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR4_X_IRQ_TYPE "NONE"
#define FLOOR4_X_NAME "/dev/floor4_x"
#define FLOOR4_X_RESET_VALUE 0
#define FLOOR4_X_SPAN 16
#define FLOOR4_X_TYPE "altera_avalon_pio"


/*
 * floor4_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor4_y altera_avalon_pio
#define FLOOR4_Y_BASE 0x10101090
#define FLOOR4_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR4_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR4_Y_CAPTURE 0
#define FLOOR4_Y_DATA_WIDTH 10
#define FLOOR4_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR4_Y_DRIVEN_SIM_VALUE 0
#define FLOOR4_Y_EDGE_TYPE "NONE"
#define FLOOR4_Y_FREQ 50000000
#define FLOOR4_Y_HAS_IN 0
#define FLOOR4_Y_HAS_OUT 1
#define FLOOR4_Y_HAS_TRI 0
#define FLOOR4_Y_IRQ -1
#define FLOOR4_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR4_Y_IRQ_TYPE "NONE"
#define FLOOR4_Y_NAME "/dev/floor4_y"
#define FLOOR4_Y_RESET_VALUE 0
#define FLOOR4_Y_SPAN 16
#define FLOOR4_Y_TYPE "altera_avalon_pio"


/*
 * floor5_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor5_x altera_avalon_pio
#define FLOOR5_X_BASE 0x101010f0
#define FLOOR5_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR5_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR5_X_CAPTURE 0
#define FLOOR5_X_DATA_WIDTH 10
#define FLOOR5_X_DO_TEST_BENCH_WIRING 0
#define FLOOR5_X_DRIVEN_SIM_VALUE 0
#define FLOOR5_X_EDGE_TYPE "NONE"
#define FLOOR5_X_FREQ 50000000
#define FLOOR5_X_HAS_IN 0
#define FLOOR5_X_HAS_OUT 1
#define FLOOR5_X_HAS_TRI 0
#define FLOOR5_X_IRQ -1
#define FLOOR5_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR5_X_IRQ_TYPE "NONE"
#define FLOOR5_X_NAME "/dev/floor5_x"
#define FLOOR5_X_RESET_VALUE 0
#define FLOOR5_X_SPAN 16
#define FLOOR5_X_TYPE "altera_avalon_pio"


/*
 * floor5_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor5_y altera_avalon_pio
#define FLOOR5_Y_BASE 0x10101080
#define FLOOR5_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR5_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR5_Y_CAPTURE 0
#define FLOOR5_Y_DATA_WIDTH 10
#define FLOOR5_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR5_Y_DRIVEN_SIM_VALUE 0
#define FLOOR5_Y_EDGE_TYPE "NONE"
#define FLOOR5_Y_FREQ 50000000
#define FLOOR5_Y_HAS_IN 0
#define FLOOR5_Y_HAS_OUT 1
#define FLOOR5_Y_HAS_TRI 0
#define FLOOR5_Y_IRQ -1
#define FLOOR5_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR5_Y_IRQ_TYPE "NONE"
#define FLOOR5_Y_NAME "/dev/floor5_y"
#define FLOOR5_Y_RESET_VALUE 0
#define FLOOR5_Y_SPAN 16
#define FLOOR5_Y_TYPE "altera_avalon_pio"


/*
 * floor6_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor6_x altera_avalon_pio
#define FLOOR6_X_BASE 0x101010e0
#define FLOOR6_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR6_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR6_X_CAPTURE 0
#define FLOOR6_X_DATA_WIDTH 10
#define FLOOR6_X_DO_TEST_BENCH_WIRING 0
#define FLOOR6_X_DRIVEN_SIM_VALUE 0
#define FLOOR6_X_EDGE_TYPE "NONE"
#define FLOOR6_X_FREQ 50000000
#define FLOOR6_X_HAS_IN 0
#define FLOOR6_X_HAS_OUT 1
#define FLOOR6_X_HAS_TRI 0
#define FLOOR6_X_IRQ -1
#define FLOOR6_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR6_X_IRQ_TYPE "NONE"
#define FLOOR6_X_NAME "/dev/floor6_x"
#define FLOOR6_X_RESET_VALUE 0
#define FLOOR6_X_SPAN 16
#define FLOOR6_X_TYPE "altera_avalon_pio"


/*
 * floor6_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor6_y altera_avalon_pio
#define FLOOR6_Y_BASE 0x10101070
#define FLOOR6_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR6_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR6_Y_CAPTURE 0
#define FLOOR6_Y_DATA_WIDTH 10
#define FLOOR6_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR6_Y_DRIVEN_SIM_VALUE 0
#define FLOOR6_Y_EDGE_TYPE "NONE"
#define FLOOR6_Y_FREQ 50000000
#define FLOOR6_Y_HAS_IN 0
#define FLOOR6_Y_HAS_OUT 1
#define FLOOR6_Y_HAS_TRI 0
#define FLOOR6_Y_IRQ -1
#define FLOOR6_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR6_Y_IRQ_TYPE "NONE"
#define FLOOR6_Y_NAME "/dev/floor6_y"
#define FLOOR6_Y_RESET_VALUE 0
#define FLOOR6_Y_SPAN 16
#define FLOOR6_Y_TYPE "altera_avalon_pio"


/*
 * floor7_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor7_x altera_avalon_pio
#define FLOOR7_X_BASE 0x101010d0
#define FLOOR7_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR7_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR7_X_CAPTURE 0
#define FLOOR7_X_DATA_WIDTH 10
#define FLOOR7_X_DO_TEST_BENCH_WIRING 0
#define FLOOR7_X_DRIVEN_SIM_VALUE 0
#define FLOOR7_X_EDGE_TYPE "NONE"
#define FLOOR7_X_FREQ 50000000
#define FLOOR7_X_HAS_IN 0
#define FLOOR7_X_HAS_OUT 1
#define FLOOR7_X_HAS_TRI 0
#define FLOOR7_X_IRQ -1
#define FLOOR7_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR7_X_IRQ_TYPE "NONE"
#define FLOOR7_X_NAME "/dev/floor7_x"
#define FLOOR7_X_RESET_VALUE 0
#define FLOOR7_X_SPAN 16
#define FLOOR7_X_TYPE "altera_avalon_pio"


/*
 * floor7_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor7_y altera_avalon_pio
#define FLOOR7_Y_BASE 0x10101060
#define FLOOR7_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR7_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR7_Y_CAPTURE 0
#define FLOOR7_Y_DATA_WIDTH 10
#define FLOOR7_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR7_Y_DRIVEN_SIM_VALUE 0
#define FLOOR7_Y_EDGE_TYPE "NONE"
#define FLOOR7_Y_FREQ 50000000
#define FLOOR7_Y_HAS_IN 0
#define FLOOR7_Y_HAS_OUT 1
#define FLOOR7_Y_HAS_TRI 0
#define FLOOR7_Y_IRQ -1
#define FLOOR7_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR7_Y_IRQ_TYPE "NONE"
#define FLOOR7_Y_NAME "/dev/floor7_y"
#define FLOOR7_Y_RESET_VALUE 0
#define FLOOR7_Y_SPAN 16
#define FLOOR7_Y_TYPE "altera_avalon_pio"


/*
 * floor8_x configuration
 *
 */

#define ALT_MODULE_CLASS_floor8_x altera_avalon_pio
#define FLOOR8_X_BASE 0x101010c0
#define FLOOR8_X_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR8_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR8_X_CAPTURE 0
#define FLOOR8_X_DATA_WIDTH 10
#define FLOOR8_X_DO_TEST_BENCH_WIRING 0
#define FLOOR8_X_DRIVEN_SIM_VALUE 0
#define FLOOR8_X_EDGE_TYPE "NONE"
#define FLOOR8_X_FREQ 50000000
#define FLOOR8_X_HAS_IN 0
#define FLOOR8_X_HAS_OUT 1
#define FLOOR8_X_HAS_TRI 0
#define FLOOR8_X_IRQ -1
#define FLOOR8_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR8_X_IRQ_TYPE "NONE"
#define FLOOR8_X_NAME "/dev/floor8_x"
#define FLOOR8_X_RESET_VALUE 0
#define FLOOR8_X_SPAN 16
#define FLOOR8_X_TYPE "altera_avalon_pio"


/*
 * floor8_y configuration
 *
 */

#define ALT_MODULE_CLASS_floor8_y altera_avalon_pio
#define FLOOR8_Y_BASE 0x10101050
#define FLOOR8_Y_BIT_CLEARING_EDGE_REGISTER 0
#define FLOOR8_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FLOOR8_Y_CAPTURE 0
#define FLOOR8_Y_DATA_WIDTH 10
#define FLOOR8_Y_DO_TEST_BENCH_WIRING 0
#define FLOOR8_Y_DRIVEN_SIM_VALUE 0
#define FLOOR8_Y_EDGE_TYPE "NONE"
#define FLOOR8_Y_FREQ 50000000
#define FLOOR8_Y_HAS_IN 0
#define FLOOR8_Y_HAS_OUT 1
#define FLOOR8_Y_HAS_TRI 0
#define FLOOR8_Y_IRQ -1
#define FLOOR8_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FLOOR8_Y_IRQ_TYPE "NONE"
#define FLOOR8_Y_NAME "/dev/floor8_y"
#define FLOOR8_Y_RESET_VALUE 0
#define FLOOR8_Y_SPAN 16
#define FLOOR8_Y_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x101011d0
#define JTAG_UART_0_IRQ 5
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * keycode configuration
 *
 */

#define ALT_MODULE_CLASS_keycode altera_avalon_pio
#define KEYCODE_BASE 0x101011a0
#define KEYCODE_BIT_CLEARING_EDGE_REGISTER 0
#define KEYCODE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYCODE_CAPTURE 0
#define KEYCODE_DATA_WIDTH 8
#define KEYCODE_DO_TEST_BENCH_WIRING 0
#define KEYCODE_DRIVEN_SIM_VALUE 0
#define KEYCODE_EDGE_TYPE "NONE"
#define KEYCODE_FREQ 50000000
#define KEYCODE_HAS_IN 0
#define KEYCODE_HAS_OUT 1
#define KEYCODE_HAS_TRI 0
#define KEYCODE_IRQ -1
#define KEYCODE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEYCODE_IRQ_TYPE "NONE"
#define KEYCODE_NAME "/dev/keycode"
#define KEYCODE_RESET_VALUE 0
#define KEYCODE_SPAN 16
#define KEYCODE_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x10080000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "nios_system_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 400000
#define ONCHIP_MEMORY2_0_SPAN 400000
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * otg_hpi_address configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_address altera_avalon_pio
#define OTG_HPI_ADDRESS_BASE 0x10101190
#define OTG_HPI_ADDRESS_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_ADDRESS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_ADDRESS_CAPTURE 0
#define OTG_HPI_ADDRESS_DATA_WIDTH 2
#define OTG_HPI_ADDRESS_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_ADDRESS_DRIVEN_SIM_VALUE 0
#define OTG_HPI_ADDRESS_EDGE_TYPE "NONE"
#define OTG_HPI_ADDRESS_FREQ 50000000
#define OTG_HPI_ADDRESS_HAS_IN 0
#define OTG_HPI_ADDRESS_HAS_OUT 1
#define OTG_HPI_ADDRESS_HAS_TRI 0
#define OTG_HPI_ADDRESS_IRQ -1
#define OTG_HPI_ADDRESS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_ADDRESS_IRQ_TYPE "NONE"
#define OTG_HPI_ADDRESS_NAME "/dev/otg_hpi_address"
#define OTG_HPI_ADDRESS_RESET_VALUE 0
#define OTG_HPI_ADDRESS_SPAN 16
#define OTG_HPI_ADDRESS_TYPE "altera_avalon_pio"


/*
 * otg_hpi_cs configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_cs altera_avalon_pio
#define OTG_HPI_CS_BASE 0x10101160
#define OTG_HPI_CS_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_CS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_CS_CAPTURE 0
#define OTG_HPI_CS_DATA_WIDTH 1
#define OTG_HPI_CS_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_CS_DRIVEN_SIM_VALUE 0
#define OTG_HPI_CS_EDGE_TYPE "NONE"
#define OTG_HPI_CS_FREQ 50000000
#define OTG_HPI_CS_HAS_IN 0
#define OTG_HPI_CS_HAS_OUT 1
#define OTG_HPI_CS_HAS_TRI 0
#define OTG_HPI_CS_IRQ -1
#define OTG_HPI_CS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_CS_IRQ_TYPE "NONE"
#define OTG_HPI_CS_NAME "/dev/otg_hpi_cs"
#define OTG_HPI_CS_RESET_VALUE 0
#define OTG_HPI_CS_SPAN 16
#define OTG_HPI_CS_TYPE "altera_avalon_pio"


/*
 * otg_hpi_data configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_data altera_avalon_pio
#define OTG_HPI_DATA_BASE 0x10101180
#define OTG_HPI_DATA_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_DATA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_DATA_CAPTURE 0
#define OTG_HPI_DATA_DATA_WIDTH 16
#define OTG_HPI_DATA_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_DATA_DRIVEN_SIM_VALUE 0
#define OTG_HPI_DATA_EDGE_TYPE "NONE"
#define OTG_HPI_DATA_FREQ 50000000
#define OTG_HPI_DATA_HAS_IN 1
#define OTG_HPI_DATA_HAS_OUT 1
#define OTG_HPI_DATA_HAS_TRI 0
#define OTG_HPI_DATA_IRQ -1
#define OTG_HPI_DATA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_DATA_IRQ_TYPE "NONE"
#define OTG_HPI_DATA_NAME "/dev/otg_hpi_data"
#define OTG_HPI_DATA_RESET_VALUE 0
#define OTG_HPI_DATA_SPAN 16
#define OTG_HPI_DATA_TYPE "altera_avalon_pio"


/*
 * otg_hpi_r configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_r altera_avalon_pio
#define OTG_HPI_R_BASE 0x10101170
#define OTG_HPI_R_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_R_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_R_CAPTURE 0
#define OTG_HPI_R_DATA_WIDTH 1
#define OTG_HPI_R_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_R_DRIVEN_SIM_VALUE 0
#define OTG_HPI_R_EDGE_TYPE "NONE"
#define OTG_HPI_R_FREQ 50000000
#define OTG_HPI_R_HAS_IN 0
#define OTG_HPI_R_HAS_OUT 1
#define OTG_HPI_R_HAS_TRI 0
#define OTG_HPI_R_IRQ -1
#define OTG_HPI_R_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_R_IRQ_TYPE "NONE"
#define OTG_HPI_R_NAME "/dev/otg_hpi_r"
#define OTG_HPI_R_RESET_VALUE 0
#define OTG_HPI_R_SPAN 16
#define OTG_HPI_R_TYPE "altera_avalon_pio"


/*
 * otg_hpi_reset configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_reset altera_avalon_pio
#define OTG_HPI_RESET_BASE 0x10101140
#define OTG_HPI_RESET_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_RESET_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_RESET_CAPTURE 0
#define OTG_HPI_RESET_DATA_WIDTH 1
#define OTG_HPI_RESET_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_RESET_DRIVEN_SIM_VALUE 0
#define OTG_HPI_RESET_EDGE_TYPE "NONE"
#define OTG_HPI_RESET_FREQ 50000000
#define OTG_HPI_RESET_HAS_IN 0
#define OTG_HPI_RESET_HAS_OUT 1
#define OTG_HPI_RESET_HAS_TRI 0
#define OTG_HPI_RESET_IRQ -1
#define OTG_HPI_RESET_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_RESET_IRQ_TYPE "NONE"
#define OTG_HPI_RESET_NAME "/dev/otg_hpi_reset"
#define OTG_HPI_RESET_RESET_VALUE 0
#define OTG_HPI_RESET_SPAN 16
#define OTG_HPI_RESET_TYPE "altera_avalon_pio"


/*
 * otg_hpi_w configuration
 *
 */

#define ALT_MODULE_CLASS_otg_hpi_w altera_avalon_pio
#define OTG_HPI_W_BASE 0x10101150
#define OTG_HPI_W_BIT_CLEARING_EDGE_REGISTER 0
#define OTG_HPI_W_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OTG_HPI_W_CAPTURE 0
#define OTG_HPI_W_DATA_WIDTH 1
#define OTG_HPI_W_DO_TEST_BENCH_WIRING 0
#define OTG_HPI_W_DRIVEN_SIM_VALUE 0
#define OTG_HPI_W_EDGE_TYPE "NONE"
#define OTG_HPI_W_FREQ 50000000
#define OTG_HPI_W_HAS_IN 0
#define OTG_HPI_W_HAS_OUT 1
#define OTG_HPI_W_HAS_TRI 0
#define OTG_HPI_W_IRQ -1
#define OTG_HPI_W_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OTG_HPI_W_IRQ_TYPE "NONE"
#define OTG_HPI_W_NAME "/dev/otg_hpi_w"
#define OTG_HPI_W_RESET_VALUE 0
#define OTG_HPI_W_SPAN 16
#define OTG_HPI_W_TYPE "altera_avalon_pio"


/*
 * score configuration
 *
 */

#define ALT_MODULE_CLASS_score altera_avalon_pio
#define SCORE_BASE 0x10101130
#define SCORE_BIT_CLEARING_EDGE_REGISTER 0
#define SCORE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCORE_CAPTURE 0
#define SCORE_DATA_WIDTH 16
#define SCORE_DO_TEST_BENCH_WIRING 0
#define SCORE_DRIVEN_SIM_VALUE 0
#define SCORE_EDGE_TYPE "NONE"
#define SCORE_FREQ 50000000
#define SCORE_HAS_IN 0
#define SCORE_HAS_OUT 1
#define SCORE_HAS_TRI 0
#define SCORE_IRQ -1
#define SCORE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCORE_IRQ_TYPE "NONE"
#define SCORE_NAME "/dev/score"
#define SCORE_RESET_VALUE 0
#define SCORE_SPAN 16
#define SCORE_TYPE "altera_avalon_pio"


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x8000000
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_POWERUP_DELAY 200.0
#define SDRAM_REFRESH_PERIOD 7.8125
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 32
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 134217728
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * sdram_pll configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_pll altpll
#define SDRAM_PLL_BASE 0x101011b0
#define SDRAM_PLL_IRQ -1
#define SDRAM_PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_PLL_NAME "/dev/sdram_pll"
#define SDRAM_PLL_SPAN 16
#define SDRAM_PLL_TYPE "altpll"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x101011c8
#define SYSID_QSYS_0_ID 0
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1575340725
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
