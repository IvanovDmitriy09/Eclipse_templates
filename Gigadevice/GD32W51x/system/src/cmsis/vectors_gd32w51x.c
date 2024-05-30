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
WWDGT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TAMPER_STAMP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RCU_IRQHandler(void);

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
DMA0_Channel0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TAMPER_STAMP_S_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_WKUP_S_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_Alarm_S_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI5_9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_CMT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_Channel_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C0_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C0_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI10_15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_Alarm_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
VLVDF_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C0_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART0_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART2_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel0_IRQHandler(void);

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
WIFI11N_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DCI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HAU_TRNG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
WIFI11N_INT0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
WIFI11N_INT1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
WIFI11N_INT2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EFUSE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
QSPI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PKCAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TSI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ICACHE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TZIAC_S_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FMC_S_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
QSPI_S_IRQHandler(void);


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
        // gd32w51x vectors
        WWDGT_IRQHandler,                  // 16:Window Watchdog Timer
        LVD_IRQHandler,                    // 17:LVD through EXTI Line detect
        TAMPER_STAMP_IRQHandler,           // 18:Tamper and TimeStamp through EXTI Line detect
        RTC_WKUP_IRQHandler,               // 19:RTC Wakeup through EXTI Line
        FMC_IRQHandler,                    // 20:FMC
        RCU_IRQHandler,                    // 21:RCU
        EXTI0_IRQHandler,                  // 22:EXTI Line 0,
        EXTI1_IRQHandler,                  // 23:EXTI Line 1
        EXTI2_IRQHandler,                  // 24:EXTI Line 2
        EXTI3_IRQHandler,                  // 25:EXTI Line 3
        EXTI4_IRQHandler,                  // 26:EXTI Line 4
        DMA0_Channel0_IRQHandler,          // 27:DMA0 Channel0
        DMA0_Channel1_IRQHandler,          // 28:DMA0 Channel1
        DMA0_Channel2_IRQHandler,          // 29:DMA0 Channel2
        DMA0_Channel3_IRQHandler,          // 30:DMA0 Channel3
        DMA0_Channel4_IRQHandler,          // 31:DMA0 Channel4
        DMA0_Channel5_IRQHandler,          // 32:DMA0 Channel5
        DMA0_Channel6_IRQHandler,          // 33:DMA0 Channel6
        DMA0_Channel7_IRQHandler,          // 34:DMA0 Channel7
        ADC_IRQHandler,                    // 35:ADC
        TAMPER_STAMP_S_IRQHandler,         // 36:RTC Tamper and TimeStamp Events Security Interrupt
        RTC_WKUP_S_IRQHandler,             // 37:RTC Wakeup Security Interrupt
        RTC_Alarm_S_IRQHandler,            // 38:RTC Alarm Security Interrupt
        EXTI5_9_IRQHandler,                // 39:EXTI5 to EXTI9
        TIMER0_BRK_IRQHandler,             // 40:TIMER0 Break
        TIMER0_UP_IRQHandler,              // 41:TIMER0 Update
        TIMER0_CMT_IRQHandler,             // 42:TIMER0 Commutation
        TIMER0_Channel_IRQHandler,         // 43:TIMER0 Channel Capture Compare
        TIMER1_IRQHandler,                 // 44:TIMER1
        TIMER2_IRQHandler,                 // 45:TIMER2
        TIMER3_IRQHandler,                 // 46:TIMER3
        I2C0_EV_IRQHandler,                // 47:I2C0 Event
        I2C0_ER_IRQHandler,                // 48:I2C0 Error
        I2C1_EV_IRQHandler,                // 49:I2C1 Event
        I2C1_ER_IRQHandler,                // 50:I2C1 Error
        SPI0_IRQHandler,                   // 51:SPI0
        SPI1_IRQHandler,                   // 52:SPI1/I2S1
        USART0_IRQHandler,                 // 53:USART0
        USART1_IRQHandler,                 // 54:USART1
        USART2_IRQHandler,                 // 55:USART2
        EXTI10_15_IRQHandler,              // 56:EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // 57:RTC Alarm
        VLVDF_IRQHandler,                  // 58:VDDA Low Voltage Detector
        0,                                 // 59:Reserved
        TIMER15_IRQHandler,                // 60:TIMER15
        TIMER16_IRQHandler,                // 61:TIMER16
        0,                                 // 62:Reserved
        0,                                 // 63:Reserved
        0,                                 // 64:Reserved
        SDIO_IRQHandler,                   // 65:SDIO
        TIMER4_IRQHandler,                 // 66:TIMER4
        I2C0_WKUP_IRQHandler,              // 67:I2C0 Wakeup
        USART0_WKUP_IRQHandler,            // 68:USART0 Wakeup
        USART2_WKUP_IRQHandler,            // 69:USART2 Wakeup
        TIMER5_IRQHandler,                 // 70:TIMER5
        0,                                 // 71:Reserved
        DMA1_Channel0_IRQHandler,          // 72:DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // 73:DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // 74:DMA1 Channel2
        DMA1_Channel3_IRQHandler,          // 75:DMA1 Channel3
        DMA1_Channel4_IRQHandler,          // 76:DMA1 Channel4
        DMA1_Channel5_IRQHandler,          // 77:DMA1 Channel5
        DMA1_Channel6_IRQHandler,          // 78:DMA1 Channel6
        DMA1_Channel7_IRQHandler,          // 79:DMA1 Channel7
        0,                                 // 80:Reserved
        0,                                 // 81:Reserved
        WIFI11N_WKUP_IRQHandler,           // 82:WIFI11N wakeup interrupt
        USBFS_IRQHandler,                  // 83:USBFS global interrupt
        0,                                 // 84:Reserved
        0,                                 // 85:Reserved
        0,                                 // 86:Reserved
        0,                                 // 87:Reserved
        0,                                 // 88:Reserved
        0,                                 // 89:Reserved
        0,                                 // 90:Reserved
        0,                                 // 91:Reserved
        USBFS_WKUP_IRQHandler,             // 92:USBFS_WKUP
        0,                                 // 93:Reserved
        DCI_IRQHandler,                    // 94:DCI
        CAU_IRQHandler,                    // 95:CAU
        HAU_TRNG_IRQHandler,               // 96:HAU and TRNG
        FPU_IRQHandler,                    // 97:FPU
        0,                                 // 98:Reserved
        0,                                 // 99:Reserved
        0,                                 // 100:Reserved
        0,                                 // 101:Reserved
        0,                                 // 102:Reserved
        0,                                 // 103:Reserved
        0,                                 // 104:Reserved
        HPDF_INT0_IRQHandler,              // 105:HPDF global Interrupt 0,
        HPDF_INT1_IRQHandler,              // 106:HPDF global Interrupt 1
        WIFI11N_INT0_IRQHandler,           // 107:WIFI11N global interrupt0
        WIFI11N_INT1_IRQHandler,           // 108:WIFI11N global interrupt1
        WIFI11N_INT2_IRQHandler,           // 109:WIFI11N global interrupt2
        EFUSE_IRQHandler,                  // 110:EFUSE
        QSPI_IRQHandler,                   // 111:QUADSPI
        PKCAU_IRQHandler,                  // 112:PKCAU
        TSI_IRQHandler,                    // 113:TSI
        ICACHE_IRQHandler,                 // 114:ICACHE
        TZIAC_S_IRQHandler,                // 115:TrustZone interrupt controller secure interrupts
        FMC_S_IRQHandler,                  // 116:FMC
        QSPI_S_IRQHandler,                 // 117:QSPI security interrupt

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
