/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include "cortexm/exception-handlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

// Forward declaration of the specific IRQ handlers. These are aliased
// to the Default_Handler, which is a 'forever' loop. When the application
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//
void __attribute__ ((weak, alias ("Default_Handler")))
PORT0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PORT1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PORT2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PORT3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPUART_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PCA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
WDT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
VC0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
VC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EF_RAM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CLKTRIM_IRQHandler(void);

// ----------------------------------------------------------------------------

extern unsigned int _estack;

typedef void
(* const pHandler)(void);

// ----------------------------------------------------------------------------

// The vector table.
// This relies on the linker script to place at correct location in memory.

__attribute__ ((section(".isr_vector"),used))
pHandler __isr_vectors[] =
  { //
    (pHandler) &_estack,                          // The initial stack pointer
        Reset_Handler,                            // The reset handler

        NMI_Handler,                              // The NMI handler
        HardFault_Handler,                        // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        MemManage_Handler,                        // The MPU fault handler
        BusFault_Handler,// The bus fault handler
        UsageFault_Handler,// The usage fault handler
#else
        0, 0, 0,				  // Reserved
#endif
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
        SVC_Handler,                              // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        DebugMon_Handler,                         // Debug monitor handler
#else
        0,					  // Reserved
#endif
        0,                                        // Reserved
        PendSV_Handler,                           // The PendSV handler
        SysTick_Handler,                          // The SysTick handler

        // ----------------------------------------------------------------------
        // CMT2380F32 vectors
        PORT0_IRQHandler,
        PORT1_IRQHandler,
        PORT2_IRQHandler,
        PORT3_IRQHandler,
        0,
        0,
        UART0_IRQHandler,
        UART1_IRQHandler,
        LPUART_IRQHandler,
        0,
        SPI_IRQHandler,
        0,
        I2C_IRQHandler,
        0,
        TIM0_IRQHandler,
        TIM1_IRQHandler,
        TIM2_IRQHandler,
        LPTIM_IRQHandler,
        TIM4_IRQHandler,
        TIM5_IRQHandler,
        TIM6_IRQHandler,
        PCA_IRQHandler,
        WDT_IRQHandler,
        RTC_IRQHandler,
        ADC_IRQHandler,
        0,
        VC0_IRQHandler,
        VC1_IRQHandler,
        LVD_IRQHandler,
        0,
        EF_RAM_IRQHandler,
        CLKTRIM_IRQHandler,
    };

// ----------------------------------------------------------------------------

// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.

void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
  while (1)
    {
	  ;
    }
}

// ----------------------------------------------------------------------------
