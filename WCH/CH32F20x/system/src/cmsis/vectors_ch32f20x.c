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
TAMPER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCC_IRQHandler(void);

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
ADC1_2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USB_HP_CAN1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USB_LP_CAN1_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_SCE_IRQHandler(void);

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
I2C1_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI15_10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTCAlarm_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBWakeUp_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RNG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FSMC_IRQHandler(void);

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
				UART6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM9_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM9_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM9_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM9_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM10_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM10_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM10_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TIM10_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA2_Channel11_IRQHandler(void);



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
        // ch32f20x vectors
        WWDG_IRQHandler,            // Window Watchdog
        PVD_IRQHandler,             // PVD through EXTI Line detect
        TAMPER_IRQHandler,          // TAMPER
        RTC_IRQHandler,             // RTC
        FLASH_IRQHandler,           // FLASH
        RCC_IRQHandler,             // RCC
        EXTI0_IRQHandler,           // EXTI Line 0,
        EXTI1_IRQHandler,           // EXTI Line 1
        EXTI2_IRQHandler,           // EXTI Line 2
        EXTI3_IRQHandler,           // EXTI Line 3
        EXTI4_IRQHandler,           // EXTI Line 4
        DMA1_Channel1_IRQHandler,   // DMA1 Channel 1
        DMA1_Channel2_IRQHandler,   // DMA1 Channel 2
        DMA1_Channel3_IRQHandler,   // DMA1 Channel 3
        DMA1_Channel4_IRQHandler,   // DMA1 Channel 4
        DMA1_Channel5_IRQHandler,   // DMA1 Channel 5
        DMA1_Channel6_IRQHandler,   // DMA1 Channel 6
        DMA1_Channel7_IRQHandler,   // DMA1 Channel 7
        ADC1_2_IRQHandler,          // ADC1_2
        USB_HP_CAN1_TX_IRQHandler,  // USB High Priority or CAN1 TX
        USB_LP_CAN1_RX0_IRQHandler, // USB Low  Priority or CAN1 RX0
        CAN1_RX1_IRQHandler,        // CAN1 RX1
        CAN1_SCE_IRQHandler,        // CAN1 SCE
        EXTI9_5_IRQHandler,         // EXTI Line 9..5
        TIM1_BRK_IRQHandler,        // TIM1 Break
        TIM1_UP_IRQHandler,         // TIM1 Update
        TIM1_TRG_COM_IRQHandler,    // TIM1 Trigger and Commutation
        TIM1_CC_IRQHandler,         // TIM1 Capture Compare
        TIM2_IRQHandler,            // TIM2
        TIM3_IRQHandler,            // TIM3
        TIM4_IRQHandler,            // TIM4
        I2C1_EV_IRQHandler,         // I2C1 Event
        I2C1_ER_IRQHandler,         // I2C1 Error
        I2C2_EV_IRQHandler,         // I2C2 Event
        I2C2_ER_IRQHandler,         // I2C2 Error
        SPI1_IRQHandler,            // SPI1
        SPI2_IRQHandler,            // SPI2
        USART1_IRQHandler,          // USART1
        USART2_IRQHandler,          // USART2
        USART3_IRQHandler,          // USART3
        EXTI15_10_IRQHandler,       // EXTI Line 15..10
        RTCAlarm_IRQHandler,        // RTC Alarm through EXTI Line
        USBWakeUp_IRQHandler,       // USB Wakeup from suspend
        TIM8_BRK_IRQHandler,        // TIM8 Break
        TIM8_UP_IRQHandler,         // TIM8 Update
        TIM8_TRG_COM_IRQHandler,    // TIM8 Trigger and Commutation
        TIM8_CC_IRQHandler,         // TIM8 Capture Compare
        RNG_IRQHandler,             // RNG
        FSMC_IRQHandler,            // FSMC
        SDIO_IRQHandler,            // SDIO
        TIM5_IRQHandler,            // TIM5
        SPI3_IRQHandler,            // SPI3
        UART4_IRQHandler,           // UART4
        UART5_IRQHandler,           // UART5
        TIM6_IRQHandler,            // TIM6
        TIM7_IRQHandler,            // TIM7
        DMA2_Channel1_IRQHandler,   // DMA2 Channel 1
        DMA2_Channel2_IRQHandler,   // DMA2 Channel 2
        DMA2_Channel3_IRQHandler,   // DMA2 Channel 3
        DMA2_Channel4_IRQHandler,   // DMA2 Channel 4
        DMA2_Channel5_IRQHandler,   // DMA2 Channel 5
	     0,
	     0,
	     0,
	     0,
	     0,
	     0,
	     0,
	     0,
	     0,
	     0,
	     UART6_IRQHandler,           // UART6
	     UART7_IRQHandler,           // UART7
	     UART8_IRQHandler,           // UART8
	     TIM9_BRK_IRQHandler,        // TIM9 Break
	     TIM9_UP_IRQHandler,         // TIM9 Update
	     TIM9_TRG_COM_IRQHandler,    // TIM9 Trigger and Commutation
	     TIM9_CC_IRQHandler,         // TIM9 Capture Compare
	     TIM10_BRK_IRQHandler,       // TIM10 Break
	     TIM10_UP_IRQHandler,        // TIM10 Update
	     TIM10_TRG_COM_IRQHandler,   // TIM10 Trigger and Commutation
	     TIM10_CC_IRQHandler,        // TIM10 Capture Compare
	     DMA2_Channel6_IRQHandler,   // DMA2 Channel 6
	     DMA2_Channel7_IRQHandler,   // DMA2 Channel 7
	     DMA2_Channel8_IRQHandler,   // DMA2 Channel 8
	     DMA2_Channel9_IRQHandler,   // DMA2 Channel 9
	     DMA2_Channel10_IRQHandler,  // DMA2 Channel 10
	     DMA2_Channel11_IRQHandler,  // DMA2 Channel 11
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
