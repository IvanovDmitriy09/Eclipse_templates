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
RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINT0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINT2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EINT4_15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH2_3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH4_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_BRK_UP_TRG_COM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR1_CC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR17_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);

#ifdef APM32F030

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_6_IRQHandler(void);

#endif

#ifdef APM32F051

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TSC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_COMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_DAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CEC_IRQHandler(void);

#endif

#ifdef APM32F070

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_IRQHandler(void);

#endif

#ifdef APM32F071

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_VDDIO2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCM_CRS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TSC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH4_5_6_7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_COMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_DAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CEC_IRQHandler(void);

#endif

#ifdef  APM32F072

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_VDDIO2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCM_CRS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TSC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH4_5_6_7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_COMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_DAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CEC_CAN_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_IRQHandler(void);

#endif

#ifdef APM32F091

void __attribute__ ((weak, alias ("Default_Handler")))
PVD_VDDIO2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCM_CRS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TSC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH2_3_DMA2_CH1_2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_CH4_7_DMA2_CH3_5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_COMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR6_DAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMR7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART3_8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CEC_CAN_IRQHandler(void);

#endif

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
        // apm32f0xx vectors
#ifdef APM32F030
        WWDT_IRQHandler,                // Window Watchdog
        0,                              // Reserved
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_IRQHandler,                 // RCM
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        0,                              // Reserved
        DMA1_CH1_IRQHandler,            // DMA1 Channel 1
        DMA1_CH2_3_IRQHandler,          // DMA1 Channel 2 and Channel 3
        DMA1_CH4_5_IRQHandler,          // DMA1 Channel 4 and Channel 5
        ADC1_IRQHandler,                // ADC1
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        0,                              // Reserved
        TMR3_IRQHandler,                // TMR3
        TMR6_IRQHandler,                // TMR6
        TMR7_IRQHandler,                // TMR7
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        USART3_6_IRQHandler,            // USART3,USART4,USART5,USART6
#endif
#ifdef APM32F051
        WWDT_IRQHandler,                // Window Watchdog
        PVD_IRQHandler,                 // PVD through EINT Line detect
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_IRQHandler,                 // RCM
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        TSC_IRQHandler,                 // TSC
        DMA1_CH1_IRQHandler,            // DMA1 Channel 1
        DMA1_CH2_3_IRQHandler,          // DMA1 Channel 2 and Channel 3
        DMA1_CH4_5_IRQHandler,          // DMA1 Channel 4 and Channel 5
        ADC1_COMP_IRQHandler,           // ADC1, COMP1 and COMP2
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        TMR2_IRQHandler,                // TMR2
        TMR3_IRQHandler,                // TMR3
        TMR6_DAC_IRQHandler,            // TMR6 and DAC
        0,                              // Reserved
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        0,                              // Reserved
        CEC_IRQHandler,                 // CEC
#endif
#ifdef APM32F070
        WWDT_IRQHandler,                // Window Watchdog
        0,                              // Reserved
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_IRQHandler,                 // RCM
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        0,                              // Reserved
        DMA1_CH1_IRQHandler,            // DMA1 Channel 1
        DMA1_CH2_3_IRQHandler,          // DMA1 Channel 2 and Channel 3
        DMA1_CH4_5_IRQHandler,          // DMA1 Channel 4, Channel 5
        ADC1_IRQHandler,                // ADC1
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        0,                              // Reserved
        TMR3_IRQHandler,                // TMR3
        TMR6_IRQHandler,                // TMR6
        TMR7_IRQHandler,                // TMR7
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        USART3_4_IRQHandler,            // USART3 and USART4
        0,                              // Reserved
        USBD_IRQHandler,                // USB
#endif
#ifdef APM32F071
        WWDT_IRQHandler,                // Window Watchdog
        PVD_VDDIO2_IRQHandler,          // PVD and VDDIO2 through EINT Line detect
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_CRS_IRQHandler,             // RCM and CRS
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        TSC_IRQHandler,                 // TSC
        DMA1_CH1_IRQHandler,            // DMA1 Channel 1
        DMA1_CH2_3_IRQHandler,          // DMA1 Channel 2 and Channel 3
        DMA1_CH4_5_6_7_IRQHandler,      // DMA1 Channel 4, Channel 5, Channel 6 and Channel 7
        ADC1_COMP_IRQHandler,           // ADC1, COMP1 and COMP2
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        TMR2_IRQHandler,                // TMR2
        TMR3_IRQHandler,                // TMR3
        TMR6_DAC_IRQHandler,            // TMR6 and DAC
        TMR7_IRQHandler,                // TMR7
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        USART3_4_IRQHandler,            // USART3 and USART4
        CEC_IRQHandler,                 // CEC
#endif
#ifdef APM32F072
        WWDT_IRQHandler,                // Window Watchdog
        PVD_VDDIO2_IRQHandler,          // PVD and VDDIO2 through EINT Line detect
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_CRS_IRQHandler,             // RCM and CRS
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        TSC_IRQHandler,                 // TSC
        DMA1_CH1_IRQHandler,            // DMA1 Channel 1
        DMA1_CH2_3_IRQHandler,          // DMA1 Channel 2 and Channel 3
        DMA1_CH4_5_6_7_IRQHandler,      // DMA1 Channel 4, Channel 5, Channel 6 and Channel 7
        ADC1_COMP_IRQHandler,           // ADC1, COMP1 and COMP2
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        TMR2_IRQHandler,                // TMR2
        TMR3_IRQHandler,                // TMR3
        TMR6_DAC_IRQHandler,            // TMR6 and DAC
        TMR7_IRQHandler,                // TMR7
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        USART3_4_IRQHandler,            // USART3 and USART4
        CEC_CAN_IRQHandler,             // CEC and CAN
        USBD_IRQHandler,                // USB
#endif
#ifdef APM32F091
        WWDT_IRQHandler,                // Window Watchdog
        PVD_VDDIO2_IRQHandler,          // PVD and VDDIO2 through EINT Line detect
        RTC_IRQHandler,                 // RTC through EINT Line
        FLASH_IRQHandler,               // FLASH
        RCM_CRS_IRQHandler,             // RCM and CRS
        EINT0_1_IRQHandler,             // EINT Line 0, and 1
        EINT2_3_IRQHandler,             // EINT Line 2 and 3
        EINT4_15_IRQHandler,            // EINT Line 4 to 15
        TSC_IRQHandler,                 // TSC
        DMA1_CH1_IRQHandler,              // DMA1 Channel 1
        DMA1_CH2_3_DMA2_CH1_2_IRQHandler, // DMA1 Channel 2 and 3 DMA2 Channel 1 and 2
        DMA1_CH4_7_DMA2_CH3_5_IRQHandler, // DMA1 Channel 4 to 7  DMA2 Channel 3 to 5 Interrupts
        ADC1_COMP_IRQHandler,           // ADC1, COMP1 and COMP2
        TMR1_BRK_UP_TRG_COM_IRQHandler, // TMR1 Break, Update, Trigger and Commutation
        TMR1_CC_IRQHandler,             // TMR1 Capture Compare
        TMR2_IRQHandler,                // TMR2
        TMR3_IRQHandler,                // TMR3
        TMR6_DAC_IRQHandler,            // TMR6 and DAC
        TMR7_IRQHandler,                // TMR7
        TMR14_IRQHandler,               // TMR14
        TMR15_IRQHandler,               // TMR15
        TMR16_IRQHandler,               // TMR16
        TMR17_IRQHandler,               // TMR17
        I2C1_IRQHandler,                // I2C1
        I2C2_IRQHandler,                // I2C2
        SPI1_IRQHandler,                // SPI1
        SPI2_IRQHandler,                // SPI2
        USART1_IRQHandler,              // USART1
        USART2_IRQHandler,              // USART2
        USART3_8_IRQHandler,            // USART3, USART4, USART5, USART6, USART7, USART8
        CEC_CAN_IRQHandler,             // CEC and CAN

#endif
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
