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
WWDG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel4_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_UP_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM17_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART2_IRQHandler(void);


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
        // MM32F003q vectors
        WWDG_IRQHandler,                // Window Watchdog
        PVD_IRQHandler,                 // PVD through EXTI Line detect
        0,                              // Reserved
        FLASH_IRQHandler,               // FLASH
        RCC_IRQHandler,                 // RCC
        EXTI0_1_IRQHandler,             // EXTI Line 0, and 1
        EXTI2_3_IRQHandler,             // EXTI Line 2 and 3
        EXTI4_15_IRQHandler,            // EXTI Line 4 to 15
        0,                              // Reserved
        DMA1_Channel1_IRQHandler,       // DMA1 Channel 1
        DMA1_Channel2_3_IRQHandler,     // DMA1 Channel 2 and Channel 3
        DMA1_Channel4_5_IRQHandler,     // DMA1 Channel 4 and Channel 5
        ADC1_IRQHandler,                // ADC1
        TIM1_BRK_UP_TRG_COM_IRQHandler, // TIM1 Break, Update, Trigger and Commutation
        TIM1_CC_IRQHandler,             // TIM1 Capture Compare
        TIM2_IRQHandler,                // TIM2
        TIM3_IRQHandler,                // TIM3
        0,                              // Reserved
        0,                              // Reserved
        TIM14_IRQHandler,               // TIM14
        0,                              // Reserved
        TIM16_IRQHandler,               // TIM16
        TIM17_IRQHandler,               // TIM17
        I2C1_IRQHandler,                // I2C1
        0,                              // Reserved
        0,                              // Reserved
        SPI2_IRQHandler,                // SPI2
        0,                              // Reserved
        UART2_IRQHandler,               // UART2
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
