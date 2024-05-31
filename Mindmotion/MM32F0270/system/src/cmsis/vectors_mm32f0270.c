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
WWDG_IWDG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_BKP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCC_CRS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HWDIV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel4_5_6_7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC_COMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_UP_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPUART_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPTIMER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM17_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART3_4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USB_IRQHandler(void);

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
        // mm32f0270 vectors
        WWDG_IWDG_IRQHandler,                                    //   0,   Window Watchdog
        PVD_IRQHandler,                                          //   1   PVD through EXTI Line detect
        RTC_BKP_IRQHandler,                                      //   2   RTC through EXTI Line & Tamper
        FLASH_IRQHandler,                                        //   3   FLASH
        RCC_CRS_IRQHandler,                                      //   4   RCC & CRS
        EXTI0_1_IRQHandler,                                      //   5   EXTI Line 0, and 1
        EXTI2_3_IRQHandler,                                      //   6   EXTI Line 2 and 3
        EXTI4_15_IRQHandler,                                     //   7   EXTI Line 4 to 15
        HWDIV_IRQHandler,                                        //   8   HWDIV
        DMA1_Channel1_IRQHandler,                                //   9   DMA1 Channel 1
        DMA1_Channel2_3_IRQHandler,                              //  10   DMA1 Channel 2 and Channel 3
        DMA1_Channel4_5_6_7_IRQHandler,                          //  11   DMA1 Channel 4, Channel 5, Channel 6 and Channel 7
        ADC_COMP_IRQHandler,                                     //  12   ADC1 & COMP
        TIM1_BRK_UP_TRG_COM_IRQHandler,                          //  13   TIM1 Break, Up, Trg and Com
        TIM1_CC_IRQHandler,                                      //  14   TIM1 Capture Compare
        TIM2_IRQHandler,                                         //  15   TIM2
        TIM3_IRQHandler,                                         //  16   TIM3
        LPUART_IRQHandler,                                       //  17   LPUART1
        LPTIMER_IRQHandler,                                      //  18   LPTIMER1
        TIM14_IRQHandler,                                        //  19   TIM14
        TIM15_IRQHandler,                                        //  20   TIM15
        TIM16_IRQHandler,                                        //  21   TIM16
        TIM17_IRQHandler,                                        //  22   TIM17
        I2C1_IRQHandler,                                         //  23   I2C1
        I2C2_IRQHandler,                                         //  24   I2C2
        SPI1_IRQHandler,                                         //  25   SPI1
        SPI2_IRQHandler,                                         //  26   SPI2
        UART1_IRQHandler,                                        //  27   UART1
        UART2_IRQHandler,                                        //  28   UART2
        UART3_4_IRQHandler,                                      //  29   UART3 and UART4
        CAN_IRQHandler,                                          //  30   CAN
        USB_IRQHandler,                                          //  31   USB and USB
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
