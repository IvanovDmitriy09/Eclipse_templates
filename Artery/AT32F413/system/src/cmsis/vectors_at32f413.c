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
WWDT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PVM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TAMPER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CRM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT4_IRQHandler(void);

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
USBFS_H_CAN1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_L_CAN1_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_SE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXINT9_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_BRK_TMR9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_OVF_TMR10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_TRG_HALL_TMR11_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_CH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR3_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR4_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_EVT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ERR_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EVT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ERR_IRQHandler(void);

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
EXINT15_10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTCAlarm_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFSWakeUp_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR8_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR8_OVF_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR8_TRG_HALL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR8_CH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR5_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel4_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_SE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ACC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_MAPH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_MAPL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel6_7_IRQHandler(void);

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
        // at32f413 vectors
        WWDT_IRQHandler,                     // Window Watchdog Timer
        PVM_IRQHandler,                      // PVM through EXINT Line detect
        TAMPER_IRQHandler,                   // Tamper
        RTC_IRQHandler,                      // RTC
        FLASH_IRQHandler,                    // Flash
        CRM_IRQHandler,                      // CRM
        EXINT0_IRQHandler,                   // EXINT Line 0,
        EXINT1_IRQHandler,                   // EXINT Line 1
        EXINT2_IRQHandler,                   // EXINT Line 2
        EXINT3_IRQHandler,                   // EXINT Line 3
        EXINT4_IRQHandler,                   // EXINT Line 4
        DMA1_Channel1_IRQHandler,            // DMA1 Channel 1
        DMA1_Channel2_IRQHandler,            // DMA1 Channel 2
        DMA1_Channel3_IRQHandler,            // DMA1 Channel 3
        DMA1_Channel4_IRQHandler,            // DMA1 Channel 4
        DMA1_Channel5_IRQHandler,            // DMA1 Channel 5
        DMA1_Channel6_IRQHandler,            // DMA1 Channel 6
        DMA1_Channel7_IRQHandler,            // DMA1 Channel 7
        ADC1_2_IRQHandler,                   // ADC1 & ADC2
        USBFS_H_CAN1_TX_IRQHandler,          // USB High Priority or CAN1 TX
        USBFS_L_CAN1_RX0_IRQHandler,         // USB Low  Priority or CAN1 RX0
        CAN1_RX1_IRQHandler,                 // CAN1 RX1
        CAN1_SE_IRQHandler,                  // CAN1 SE
        EXINT9_5_IRQHandler,                 // EXINT Line [9:5]
        TMR1_BRK_TMR9_IRQHandler,            // TMR1 Brake and TMR9
        TMR1_OVF_TMR10_IRQHandler,           // TMR1 overflow and TMR10
        TMR1_TRG_HALL_TMR11_IRQHandler,      // TMR1 Trigger and hall and TMR11
        TMR1_CH_IRQHandler,                  // TMR1 channel
        TMR2_GLOBAL_IRQHandler,              // TMR2
        TMR3_GLOBAL_IRQHandler,              // TMR3
        TMR4_GLOBAL_IRQHandler,              // TMR4
        I2C1_EVT_IRQHandler,                 // I2C1 Event
        I2C1_ERR_IRQHandler,                 // I2C1 Error
        I2C2_EVT_IRQHandler,                 // I2C2 Event
        I2C2_ERR_IRQHandler,                 // I2C2 Error
        SPI1_IRQHandler,                     // SPI1
        SPI2_IRQHandler,                     // SPI2
        USART1_IRQHandler,                   // USART1
        USART2_IRQHandler,                   // USART2
        USART3_IRQHandler,                   // USART3
        EXINT15_10_IRQHandler,               // EXINT Line [15:10]
        RTCAlarm_IRQHandler,                 // RTC Alarm through EXINT Line
        USBFSWakeUp_IRQHandler,              // USB Wakeup from suspend
        TMR8_BRK_IRQHandler,                 // TMR8 Brake
        TMR8_OVF_IRQHandler,                 // TMR8 overflow
        TMR8_TRG_HALL_IRQHandler,            // TMR8 Trigger and hall
        TMR8_CH_IRQHandler,                  // TMR8 channel
        0,                                   // Reserved
        0,                                   // Reserved
        SDIO1_IRQHandler,                    // SDIO1
        TMR5_GLOBAL_IRQHandler,              // TMR5
        0,                                   // Reserved
        UART4_IRQHandler,                    // UART4
        UART5_IRQHandler,                    // UART5
        0,                                   // Reserved
        0,                                   // Reserved
        DMA2_Channel1_IRQHandler,            // DMA2 Channel1
        DMA2_Channel2_IRQHandler,            // DMA2 Channel2
        DMA2_Channel3_IRQHandler,            // DMA2 Channel3
        DMA2_Channel4_5_IRQHandler,          // DMA2 Channel4 & Channel5
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        CAN2_TX_IRQHandler,                  // CAN2 TX
        CAN2_RX0_IRQHandler,                 // CAN2 RX0
        CAN2_RX1_IRQHandler,                 // CAN2 RX1
        CAN2_SE_IRQHandler,                  // CAN2 SE
        ACC_IRQHandler,                      // ACC
        USBFS_MAPH_IRQHandler,               // USB Map High
        USBFS_MAPL_IRQHandler,               // USB Map Low
        DMA2_Channel6_7_IRQHandler,          // DMA2 Channel6 & Channel7
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
