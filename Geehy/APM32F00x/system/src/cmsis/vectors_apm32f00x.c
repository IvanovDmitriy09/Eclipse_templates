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
WUPT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINTA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINTB_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINTD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_UT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_UO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART1_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
IIC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1A_UT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1A_CC_IRQHandler(void);


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
        // apm32f00x vectors
        0,                              // Reserved
        WUPT_IRQHandler,                // Wakeup timer
        RCM_IRQHandler,                 // Clock controler interrupt
        EINTA_IRQHandler,               // Port A external interrupts
        EINTB_IRQHandler,               // Port B external interrupts
        EINTC_IRQHandler,               // Port C external interrupts
        EINTD_IRQHandler,               // Port D external interrupts
        0,                              // Reserved
        0,                              // Reserved
        0,                              // Reserved
        SPI_IRQHandler,                 // SPI Interrupt
        TMR1_UT_IRQHandler,             // TIMER1 update/overflow/underflow/trigger/break interrupt
        TMR1_CC_IRQHandler,             // TIMER1 capture/compare interrupt
        TMR2_UO_IRQHandler,             // TIMER2 update /overflow interrupt
        TMR2_CC_IRQHandler,             // TIMER2 capture/compare interrupt
        0,                              // Reserved
        0,                              // Reserved
        USART1_TX_IRQHandler,           // USART1 TX interrupt
        USART1_RX_IRQHandler,           // USART1 RX interrupt
        IIC_IRQHandler,                 // I2C Interrupt
        0,                              // Reserved
        0,                              // Reserved
        ADC_IRQHandler,                 // ADC interrupt
        TMR4_IRQHandler,                // TIMER4 interrupt
        FLASH_IRQHandler,               // Flash interrupt
        USART3_TX_IRQHandler,           // USART3 TX interrupt
        USART3_RX_IRQHandler,           // USART3 RX interrupt
        USART2_TX_IRQHandler,           // USART2 TX interrupt
        USART2_RX_IRQHandler,           // USART2 RX interrupt
        TMR1A_UT_IRQHandler,            // TIMER1A update/overflow/underflow/trigger/break interrupt
        TMR1A_CC_IRQHandler,            // TIMER1A capture/compare interrupt

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
