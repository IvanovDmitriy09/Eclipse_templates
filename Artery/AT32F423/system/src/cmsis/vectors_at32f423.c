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
TAMP_STAMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ERTC_WKUP_IRQHandler(void);

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
ADC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX0_IRQHandler(void);

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
ERTCAlarm_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
OTGFS1_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR12_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR13_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR14_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_DAC_GLOBAL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_GLOBAL_IRQHandler(void);

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
CAN2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_SE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
OTGFS1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EVT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ERR_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMAMUX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ACC_IRQHandler(void);

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
        // at32f423 vectors
        WWDT_IRQHandler,                     // Window Watchdog Timer
        PVM_IRQHandler,                      // PVM through EXINT Line detect
        TAMP_STAMP_IRQHandler,               // Tamper and TimeStamps through the EXINT line
        ERTC_WKUP_IRQHandler,                // ERTC Wakeup through the EXINT line
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
        ADC1_IRQHandler,                     // ADC1
        CAN1_TX_IRQHandler,                  // CAN1 TX
        CAN1_RX0_IRQHandler,                 // CAN1 RX0
        CAN1_RX1_IRQHandler,                 // CAN1 RX1
        CAN1_SE_IRQHandler,                  // CAN1 SE
        EXINT9_5_IRQHandler,                 // EXINT Line [9:5]
        TMR1_BRK_TMR9_IRQHandler,            // TMR1 Brake and TMR9
        TMR1_OVF_TMR10_IRQHandler,           // TMR1 Overflow and TMR10
        TMR1_TRG_HALL_TMR11_IRQHandler,      // TMR1 Trigger and hall and TMR11
        TMR1_CH_IRQHandler,                  // TMR1 Channel
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
        ERTCAlarm_IRQHandler,                // RTC Alarm through EXINT Line
        OTGFS1_WKUP_IRQHandler,              // OTGFS1 Wakeup from suspend
        TMR12_GLOBAL_IRQHandler,             // TMR12
        TMR13_GLOBAL_IRQHandler,             // TMR13
        TMR14_GLOBAL_IRQHandler,             // TMR14
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        SPI3_IRQHandler,                     // SPI3
        USART4_IRQHandler,                   // USART4
        USART5_IRQHandler,                   // USART5
        TMR6_DAC_GLOBAL_IRQHandler,          // TMR6 & DAC
        TMR7_GLOBAL_IRQHandler,              // TMR7
        DMA2_Channel1_IRQHandler,            // DMA2 Channel 1
        DMA2_Channel2_IRQHandler,            // DMA2 Channel 2
        DMA2_Channel3_IRQHandler,            // DMA2 Channel 3
        DMA2_Channel4_IRQHandler,            // DMA2 Channel 4
        DMA2_Channel5_IRQHandler,            // DMA2 Channel 5
        0,                                   // Reserved
        0,                                   // Reserved
        CAN2_TX_IRQHandler,                  // CAN2 TX
        CAN2_RX0_IRQHandler,                 // CAN2 RX0
        CAN2_RX1_IRQHandler,                 // CAN2 RX1
        CAN2_SE_IRQHandler,                  // CAN2 SE
        OTGFS1_IRQHandler,                   // OTGFS1
        DMA2_Channel6_IRQHandler,            // DMA2 Channel 6
        DMA2_Channel7_IRQHandler,            // DMA2 Channel 7
        0,                                   // Reserved
        USART6_IRQHandler,                   // USART6
        I2C3_EVT_IRQHandler,                 // I2C3 Event
        I2C3_ERR_IRQHandler,                 // I2C3 Error
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        FPU_IRQHandler,                      // FPU
        USART7_IRQHandler,                   // USART7
        USART8_IRQHandler,                   // USART8
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        DMAMUX_IRQHandler,                   // DMAMUX
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        0,                                   // Reserved
        ACC_IRQHandler,                      // ACC
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
