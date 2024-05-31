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
PVD_VDT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TAMPER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCC_CRS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_ADC2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI9_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM4_IRQHandler(void);

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
UART3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI15_10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTCAlarm_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
COMP1_2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USB_OTGFS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART8_IRQHandler(void);

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
        // mm32f327x vectors
        WWDG_IWDG_IRQHandler,                                    // 0,       Window watchdog interrupt and independent watchdog interrupt connected to EXTI21
        PVD_VDT_IRQHandler,                                      // 1       Power voltage detection (PVD) connected to EXTI16 and CORE voltage detection (VDT) interrupt
        TAMPER_IRQHandler,                                       // 2       Tamper
        RTC_IRQHandler,                                          // 3       RTC
        FLASH_IRQHandler,                                        // 4       Flash
        RCC_CRS_IRQHandler,                                      // 5       RCC
        EXTI0_IRQHandler,                                        // 6       EXTI Line 0,
        EXTI1_IRQHandler,                                        // 7       EXTI Line 1
        EXTI2_IRQHandler,                                        // 8       EXTI Line 2
        EXTI3_IRQHandler,                                        // 9       EXTI Line 3
        EXTI4_IRQHandler,                                        // 10      EXTI Line 4
        DMA1_Channel1_IRQHandler,                                // 11      DMA1 Channel 1
        DMA1_Channel2_IRQHandler,                                // 12      DMA1 Channel 2
        DMA1_Channel3_IRQHandler,                                // 13      DMA1 Channel 3
        DMA1_Channel4_IRQHandler,                                // 14      DMA1 Channel 4
        DMA1_Channel5_IRQHandler,                                // 15      DMA1 Channel 5
        DMA1_Channel6_IRQHandler,                                // 16      DMA1 Channel 6
        DMA1_Channel7_IRQHandler,                                // 17      DMA1 Channel 7
        ADC1_ADC2_IRQHandler,                                    // 18      ADC1 and ADC2
        0,                                                       // 19      Reserved
        0,                                                       // 20      Reserved
        CAN1_IRQHandler,                                         // 21      CAN1 global interrupt
        0,                                                       // 22      Reserved
        EXTI9_5_IRQHandler,                                      // 23      EXTI Line 9..5
        TIM1_BRK_IRQHandler,                                     // 24      TIM1 Break
        TIM1_UP_IRQHandler,                                      // 25      TIM1 Update
        TIM1_TRG_COM_IRQHandler,                                 // 26      TIM1 Trigger and Commutation
        TIM1_CC_IRQHandler,                                      // 27      TIM1 Capture Compare
        TIM2_IRQHandler,                                         // 28      TIM2
        TIM3_IRQHandler,                                         // 29      TIM3
        TIM4_IRQHandler,                                         // 30      TIM4
        I2C1_IRQHandler,                                         // 31      I2C1 Event
        0,                                                       // 32      Reserved
        I2C2_IRQHandler,                                         // 33      I2C2 Event
        0,                                                       // 34      Reserved
        SPI1_IRQHandler,                                         // 35      SPI1
        SPI2_IRQHandler,                                         // 36      SPI2
        UART1_IRQHandler,                                        // 37      UART1
        UART2_IRQHandler,                                        // 38      UART2
        UART3_IRQHandler,                                        // 39      UART3
        EXTI15_10_IRQHandler,                                    // 40      EXTI Line 15..10
        RTCAlarm_IRQHandler,                                     // 41      RTC Alarm through EXTI Line 17
        0,                                                       // 42      Reserved
        TIM8_BRK_IRQHandler,                                     // 43      TIM8 Break
        TIM8_UP_IRQHandler,                                      // 44      TIM8 Update
        TIM8_TRG_COM_IRQHandler,                                 // 45      TIM8 Trigger and Commutation
        TIM8_CC_IRQHandler,                                      // 46      TIM8 Capture Compare
        ADC3_IRQHandler,                                         // 47      ADC3
        0,                                                       // 48      Reserved
        SDIO_IRQHandler,                                         // 49      SDIO
        TIM5_IRQHandler,                                         // 50      TIM5
        SPI3_IRQHandler,                                         // 51      SPI3
        UART4_IRQHandler,                                        // 52      UART4
        UART5_IRQHandler,                                        // 53      UART5
        TIM6_IRQHandler,                                         // 54      TIM6
        TIM7_IRQHandler,                                         // 55      TIM7
        DMA2_Channel1_IRQHandler,                                // 56      DMA2 Channel 1
        DMA2_Channel2_IRQHandler,                                // 57      DMA2 Channel 2
        DMA2_Channel3_IRQHandler,                                // 58      DMA2 Channel 3
        DMA2_Channel4_IRQHandler,                                // 59      DMA2 Channel 4
        DMA2_Channel5_IRQHandler,                                // 60      DMA2 Channel 5
        ENET_IRQHandler,                                         // 61      ENET global interrupt
        0,                                                       // 62      Reserved
        0,                                                       // 63      Reserved
        COMP1_2_IRQHandler,                                      // 64      COMP1,COMP2
        0,                                                       // 65      Reserved
        0,                                                       // 66      Reserved
        USB_OTGFS_IRQHandler,                                    // 67      USB OTGFS global interrupt
        0,                                                       // 68      Reserved
        0,                                                       // 69      Reserved
        0,                                                       // 70      Reserved
        UART6_IRQHandler,                                        // 71      UART6
        0,                                                       // 72      Reserved
        0,                                                       // 73      Reserved
        0,                                                       // 74      Reserved
        0,                                                       // 75      Reserved
        0,                                                       // 76      Reserved
        0,                                                       // 77      Reserved
        0,                                                       // 78      Reserved
        0,                                                       // 79      Reserved
        0,                                                       // 80      Reserved
        0,                                                       // 81      Reserved
        UART7_IRQHandler,                                        // 82      UART7
        UART8_IRQHandler,                                        // 83      UART8
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
