/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu1' in SOPC Builder design 'SoC'
 * SOPC Builder design path: D:/AAApera/Sem6/CO503/Practicals/Practical2/FPGA_CO503-main/FPGA_CO503-main/Lab3/part1_1/SoC.sopcinfo
 *
 * Generated: Thu May 09 15:59:55 IST 2024
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
#define ALT_CPU_BREAK_ADDR 0x00040820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "small"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "cpu1"
#define ALT_CPU_RESET_ADDR 0x00010000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00040820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


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
#define ALT_STDERR "/dev/jtag_uart_1"
#define ALT_STDERR_BASE 0x41040
#define ALT_STDERR_DEV jtag_uart_1
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_1"
#define ALT_STDIN_BASE 0x41040
#define ALT_STDIN_DEV jtag_uart_1
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_1"
#define ALT_STDOUT_BASE 0x41040
#define ALT_STDOUT_DEV jtag_uart_1
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "SoC"


/*
 * data_mem1 configuration
 *
 */

#define ALT_MODULE_CLASS_data_mem1 altera_avalon_onchip_memory2
#define DATA_MEM1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define DATA_MEM1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define DATA_MEM1_BASE 0x28000
#define DATA_MEM1_CONTENTS_INFO ""
#define DATA_MEM1_DUAL_PORT 0
#define DATA_MEM1_GUI_RAM_BLOCK_TYPE "Automatic"
#define DATA_MEM1_INIT_CONTENTS_FILE "data_mem1"
#define DATA_MEM1_INIT_MEM_CONTENT 1
#define DATA_MEM1_INSTANCE_ID "NONE"
#define DATA_MEM1_IRQ -1
#define DATA_MEM1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATA_MEM1_NAME "/dev/data_mem1"
#define DATA_MEM1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define DATA_MEM1_RAM_BLOCK_TYPE "Auto"
#define DATA_MEM1_READ_DURING_WRITE_MODE "DONT_CARE"
#define DATA_MEM1_SINGLE_CLOCK_OP 0
#define DATA_MEM1_SIZE_MULTIPLE 1
#define DATA_MEM1_SIZE_VALUE 32768u
#define DATA_MEM1_SPAN 32768
#define DATA_MEM1_TYPE "altera_avalon_onchip_memory2"
#define DATA_MEM1_WRITABLE 1


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_1
#define ALT_TIMESTAMP_CLK HIGH_SCALE_TIMER_1


/*
 * high_scale_timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_high_scale_timer_1 altera_avalon_timer
#define HIGH_SCALE_TIMER_1_ALWAYS_RUN 0
#define HIGH_SCALE_TIMER_1_BASE 0x41000
#define HIGH_SCALE_TIMER_1_COUNTER_SIZE 32
#define HIGH_SCALE_TIMER_1_FIXED_PERIOD 0
#define HIGH_SCALE_TIMER_1_FREQ 50000000u
#define HIGH_SCALE_TIMER_1_IRQ 3
#define HIGH_SCALE_TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HIGH_SCALE_TIMER_1_LOAD_VALUE 49ull
#define HIGH_SCALE_TIMER_1_MULT 1.0E-6
#define HIGH_SCALE_TIMER_1_NAME "/dev/high_scale_timer_1"
#define HIGH_SCALE_TIMER_1_PERIOD 1
#define HIGH_SCALE_TIMER_1_PERIOD_UNITS "us"
#define HIGH_SCALE_TIMER_1_RESET_OUTPUT 0
#define HIGH_SCALE_TIMER_1_SNAPSHOT 1
#define HIGH_SCALE_TIMER_1_SPAN 32
#define HIGH_SCALE_TIMER_1_TICKS_PER_SEC 1000000u
#define HIGH_SCALE_TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define HIGH_SCALE_TIMER_1_TYPE "altera_avalon_timer"


/*
 * ins_mem1 configuration
 *
 */

#define ALT_MODULE_CLASS_ins_mem1 altera_avalon_onchip_memory2
#define INS_MEM1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define INS_MEM1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define INS_MEM1_BASE 0x10000
#define INS_MEM1_CONTENTS_INFO ""
#define INS_MEM1_DUAL_PORT 0
#define INS_MEM1_GUI_RAM_BLOCK_TYPE "Automatic"
#define INS_MEM1_INIT_CONTENTS_FILE "ins_mem1"
#define INS_MEM1_INIT_MEM_CONTENT 1
#define INS_MEM1_INSTANCE_ID "NONE"
#define INS_MEM1_IRQ -1
#define INS_MEM1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INS_MEM1_NAME "/dev/ins_mem1"
#define INS_MEM1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define INS_MEM1_RAM_BLOCK_TYPE "Auto"
#define INS_MEM1_READ_DURING_WRITE_MODE "DONT_CARE"
#define INS_MEM1_SINGLE_CLOCK_OP 0
#define INS_MEM1_SIZE_MULTIPLE 1
#define INS_MEM1_SIZE_VALUE 65536u
#define INS_MEM1_SPAN 65536
#define INS_MEM1_TYPE "altera_avalon_onchip_memory2"
#define INS_MEM1_WRITABLE 1


/*
 * jtag_uart_1 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_1 altera_avalon_jtag_uart
#define JTAG_UART_1_BASE 0x41040
#define JTAG_UART_1_IRQ 16
#define JTAG_UART_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_1_NAME "/dev/jtag_uart_1"
#define JTAG_UART_1_READ_DEPTH 64
#define JTAG_UART_1_READ_THRESHOLD 8
#define JTAG_UART_1_SPAN 8
#define JTAG_UART_1_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_1_WRITE_DEPTH 64
#define JTAG_UART_1_WRITE_THRESHOLD 8


/*
 * shared_mem configuration
 *
 */

#define ALT_MODULE_CLASS_shared_mem altera_avalon_onchip_memory2
#define SHARED_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define SHARED_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define SHARED_MEM_BASE 0x30000
#define SHARED_MEM_CONTENTS_INFO ""
#define SHARED_MEM_DUAL_PORT 0
#define SHARED_MEM_GUI_RAM_BLOCK_TYPE "Automatic"
#define SHARED_MEM_INIT_CONTENTS_FILE "shared_mem"
#define SHARED_MEM_INIT_MEM_CONTENT 1
#define SHARED_MEM_INSTANCE_ID "NONE"
#define SHARED_MEM_IRQ -1
#define SHARED_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SHARED_MEM_NAME "/dev/shared_mem"
#define SHARED_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define SHARED_MEM_RAM_BLOCK_TYPE "Auto"
#define SHARED_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define SHARED_MEM_SINGLE_CLOCK_OP 0
#define SHARED_MEM_SIZE_MULTIPLE 1
#define SHARED_MEM_SIZE_VALUE 65520u
#define SHARED_MEM_SPAN 65520
#define SHARED_MEM_TYPE "altera_avalon_onchip_memory2"
#define SHARED_MEM_WRITABLE 1


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x51040
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1649828768
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_BASE 0x41020
#define TIMER_1_COUNTER_SIZE 32
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_FREQ 50000000u
#define TIMER_1_IRQ 1
#define TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_LOAD_VALUE 49999ull
#define TIMER_1_MULT 0.0010
#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "ms"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_SPAN 32
#define TIMER_1_TICKS_PER_SEC 1000u
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
