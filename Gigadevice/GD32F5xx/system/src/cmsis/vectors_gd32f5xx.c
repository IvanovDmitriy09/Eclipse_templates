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
RCU_CTC_IRQHandler(void);

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
ADC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_EWMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI5_9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_BRK_TIMER8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_UP_TIMER9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_TRG_CMT_TIMER10_IRQHandler(void);

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
USBFS_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_BRK_TIMER11_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_UP_TIMER12_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_TRG_CMT_TIMER13_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_Channel_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER5_DAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER6_IRQHandler(void);

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
ENET_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_EWMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBFS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_EP1_Out_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_EP1_In_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DCI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TRNG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SAI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TLI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TLI_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
IPA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
PKCAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C5_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C5_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C5_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SYSCFG_SRAM_ECC_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAU_IRQHandler(void);


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
        // gd32f5xx vectors
        WWDGT_IRQHandler,                  // 16:Window Watchdog Timer
        LVD_IRQHandler,                    // 17:LVD through EXTI Line detect
        TAMPER_STAMP_IRQHandler,           // 18:Tamper and TimeStamp through EXTI Line detect
        RTC_WKUP_IRQHandler,               // 19:RTC Wakeup through EXTI Line
        FMC_IRQHandler,                    // 20:FMC
        RCU_CTC_IRQHandler,                // 21:RCU and CTC
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
        ADC_IRQHandler,                    // 34:ADC
        CAN0_TX_IRQHandler,                // 35:CAN0 TX
        CAN0_RX0_IRQHandler,               // 36:CAN0 RX0
        CAN0_RX1_IRQHandler,               // 37:CAN0 RX1
        CAN0_EWMC_IRQHandler,              // 38:CAN0 EWMC
        EXTI5_9_IRQHandler,                // 39:EXTI5 to EXTI9
        TIMER0_BRK_TIMER8_IRQHandler,      // 40:TIMER0 Break and TIMER8
        TIMER0_UP_TIMER9_IRQHandler,       // 41:TIMER0 Update and TIMER9
        TIMER0_TRG_CMT_TIMER10_IRQHandler, // 42:TIMER0 Trigger and Commutation and TIMER10
        TIMER0_Channel_IRQHandler,         // 43:TIMER0 Capture Compare
        TIMER1_IRQHandler,                 // 44:TIMER1
        TIMER2_IRQHandler,                 // 45:TIMER2
        TIMER3_IRQHandler,                 // 46:TIMER3
        I2C0_EV_IRQHandler,                // 47:I2C0 Event
        I2C0_ER_IRQHandler,                // 48:I2C0 Error
        I2C1_EV_IRQHandler,                // 49:I2C1 Event
        I2C1_ER_IRQHandler,                // 50:I2C1 Error
        SPI0_IRQHandler,                   // 51:SPI0
        SPI1_IRQHandler,                   // 52:SPI1
        USART0_IRQHandler,                 // 53:USART0
        USART1_IRQHandler,                 // 54:USART1
        USART2_IRQHandler,                 // 55:USART2
        EXTI10_15_IRQHandler,              // 56:EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // 57:RTC Alarm
        USBFS_WKUP_IRQHandler,             // 58:USBFS Wakeup
        TIMER7_BRK_TIMER11_IRQHandler,     // 59:TIMER7 Break and TIMER11
        TIMER7_UP_TIMER12_IRQHandler,      // 60:TIMER7 Update and TIMER12
        TIMER7_TRG_CMT_TIMER13_IRQHandler, // 61:TIMER7 Trigger and Commutation and TIMER13
        TIMER7_Channel_IRQHandler,         // 62:TIMER7 Channel Capture Compare
        DMA0_Channel7_IRQHandler,          // 63:DMA0 Channel7
        EXMC_IRQHandler,                   // 64:EXMC
        SDIO_IRQHandler,                   // 65:SDIO
        TIMER4_IRQHandler,                 // 66:TIMER4
        SPI2_IRQHandler,                   // 67:SPI2
        UART3_IRQHandler,                  // 68:UART3
        UART4_IRQHandler,                  // 69:UART4
        TIMER5_DAC_IRQHandler,             // 70:TIMER5 and DAC0 DAC1 Underrun error
        TIMER6_IRQHandler,                 // 71:TIMER6
        DMA1_Channel0_IRQHandler,          // 72:DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // 73:DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // 74:DMA1 Channel2
        DMA1_Channel3_IRQHandler,          // 75:DMA1 Channel3
        DMA1_Channel4_IRQHandler,          // 76:DMA1 Channel4
        ENET_IRQHandler,                   // 77:Ethernet
        ENET_WKUP_IRQHandler,              // 78:Ethernet Wakeup through EXTI Line
        CAN1_TX_IRQHandler,                // 79:CAN1 TX
        CAN1_RX0_IRQHandler,               // 80:CAN1 RX0
        CAN1_RX1_IRQHandler,               // 81:CAN1 RX1
        CAN1_EWMC_IRQHandler,              // 82:CAN1 EWMC
        USBFS_IRQHandler,                  // 83:USBFS
        DMA1_Channel5_IRQHandler,          // 84:DMA1 Channel5
        DMA1_Channel6_IRQHandler,          // 85:DMA1 Channel6
        DMA1_Channel7_IRQHandler,          // 86:DMA1 Channel7
        USART5_IRQHandler,                 // 87:USART5
        I2C2_EV_IRQHandler,                // 88:I2C2 Event
        I2C2_ER_IRQHandler,                // 89:I2C2 Error
        USBHS_EP1_Out_IRQHandler,          // 90:USBHS Endpoint 1 Out
        USBHS_EP1_In_IRQHandler,           // 91:USBHS Endpoint 1 in
        USBHS_WKUP_IRQHandler,             // 92:USBHS Wakeup through EXTI Line
        USBHS_IRQHandler,                  // 93:USBHS
        DCI_IRQHandler,                    // 94:DCI
        0,                                 // 95:Reserved
        TRNG_IRQHandler,                   // 96:TRNG
        FPU_IRQHandler,                    // 97:FPU
        UART6_IRQHandler,                  // 98:UART6
        UART7_IRQHandler,                  // 99:UART7
        SPI3_IRQHandler,                   // 100:SPI3
        SPI4_IRQHandler,                   // 101:SPI4
        SPI5_IRQHandler,                   // 102:SPI5
        SAI_IRQHandler,                    // 103:SAI
        TLI_IRQHandler,                    // 104:TLI
        TLI_ER_IRQHandler,                 // 105:TLI Error
        IPA_IRQHandler,                    // 106:IPA
        PKCAU_IRQHandler,                  // 107:PKCAU
        I2C3_EV_IRQHandler,                // 108:I2C3 Event
        I2C3_ER_IRQHandler,                // 109:I2C3 Error
        I2C4_EV_IRQHandler,                // 110:I2C4 Event
        I2C4_ER_IRQHandler,                // 111:I2C4 Error
        I2C5_EV_IRQHandler,                // 112:I2C5 Event
        I2C5_ER_IRQHandler,                // 113:I2C5 Error
        I2C3_WKUP_IRQHandler,              // 114:I2C3 Wakeup through EXTI Line
        I2C4_WKUP_IRQHandler,              // 115:I2C4 Wakeup through EXTI Line
        I2C5_WKUP_IRQHandler,              // 116:I2C5 Wakeup through EXTI Line
        SYSCFG_SRAM_ECC_ER_IRQHandler,     // 117:SYSCFG SRAM ECC Error
        HAU_IRQHandler,                    // 118:HAU
        CAU_IRQHandler,                    // 119:CAU

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
