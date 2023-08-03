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
TAMPER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTC_IRQHandler(void);

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
ADC0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI5_9_IRQHandler(void);

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
SPI1_I2S1ADD_IRQHandler(void);

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
TIMER7_Channel_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_I2S2ADD_IRQHandler(void);

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
I2C2_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USART5_WKUP_IRQHandler(void);

#if defined(GD32E50X_HD) || defined(GD32E50X_CL) || defined(GD32E508)

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_EWMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_BRK_TIMER8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_UP_TIMER9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_TRG_CMT_TIMER10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_BRK_TIMER11_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_UP_TIMER12_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_TRG_CMT_TIMER13_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_EWMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SHRTIMER_IRQ1_IRQHandler(void);

#endif

#ifdef GD32E50X_HD

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_HP_CAN0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_LP_CAN0_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel3_4_IRQHandler(void);

#endif

#if defined(GD32E50X_CL) || defined(GD32E508)

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_EP1_OUT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS_EP1_IN_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_RX1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_EWMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMU_IRQHandler(void);

#endif

#ifdef GD32EPRT

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_TRG_CMT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_TRG_CMT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_HP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_LP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBD_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Channel3_4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET_WKUP_IRQHandler(void);


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
        // gd32e50x vectors
#ifdef GD32E50X_HD
        WWDGT_IRQHandler,                  // Window Watchdog Timer
        LVD_IRQHandler,                    // LVD through EXTI Line detect
        TAMPER_IRQHandler,                 // Tamper through EXTI Line detect
        RTC_IRQHandler,                    // RTC through EXTI Line
        FMC_IRQHandler,                    // FMC
        RCU_CTC_IRQHandler,                // RCU and CTC
        EXTI0_IRQHandler,                  // EXTI Line 0
        EXTI1_IRQHandler,                  // EXTI Line 1
        EXTI2_IRQHandler,                  // EXTI Line 2
        EXTI3_IRQHandler,                  // EXTI Line 3
        EXTI4_IRQHandler,                  // EXTI Line 4
        DMA0_Channel0_IRQHandler,          // DMA0 Channel0
        DMA0_Channel1_IRQHandler,          // DMA0 Channel1
        DMA0_Channel2_IRQHandler,          // DMA0 Channel2
        DMA0_Channel3_IRQHandler,          // DMA0 Channel3
        DMA0_Channel4_IRQHandler,          // DMA0 Channel4
        DMA0_Channel5_IRQHandler,          // DMA0 Channel5
        DMA0_Channel6_IRQHandler,          // DMA0 Channel6
        ADC0_1_IRQHandler,                 // ADC0 and ADC1
        USBD_HP_CAN0_TX_IRQHandler,        // USBD HP or CAN0 TX
        USBD_LP_CAN0_RX0_IRQHandler,       // USBD LP or CAN0 RX0
        CAN0_RX1_IRQHandler,               // CAN0 RX1
        CAN0_EWMC_IRQHandler,              // CAN0 EWMC
        EXTI5_9_IRQHandler,                // EXTI5 to EXTI9
        TIMER0_BRK_TIMER8_IRQHandler,      // TIMER0 Break and TIMER8
        TIMER0_UP_TIMER9_IRQHandler,       // TIMER0 Update and TIMER9
        TIMER0_TRG_CMT_TIMER10_IRQHandler, // TIMER0 Trigger and Commutation and TIMER10
        TIMER0_Channel_IRQHandler,         // TIMER0 Channel Capture Compare
        TIMER1_IRQHandler,                 // TIMER1
        TIMER2_IRQHandler,                 // TIMER2
        TIMER3_IRQHandler,                 // TIMER3
        I2C0_EV_IRQHandler,                // I2C0 Event
        I2C0_ER_IRQHandler,                // I2C0 Error
        I2C1_EV_IRQHandler,                // I2C1 Event
        I2C1_ER_IRQHandler,                // I2C1 Error
        SPI0_IRQHandler,                   // SPI0
        SPI1_I2S1ADD_IRQHandler,           // SPI1 or I2S1ADD
        USART0_IRQHandler,                 // USART0
        USART1_IRQHandler,                 // USART1
        USART2_IRQHandler,                 // USART2
        EXTI10_15_IRQHandler,              // EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // RTC Alarm
        USBD_WKUP_IRQHandler,              // USBD Wakeup
        TIMER7_BRK_TIMER11_IRQHandler,     // TIMER7 Break and TIMER11
        TIMER7_UP_TIMER12_IRQHandler,      // TIMER7 Update and TIMER12
        TIMER7_TRG_CMT_TIMER13_IRQHandler, // TIMER7 Trigger and Commutation and TIMER13
        TIMER7_Channel_IRQHandler,         // TIMER7 Channel Capture Compare
        ADC2_IRQHandler,                   // ADC2
        EXMC_IRQHandler,                   // EXMC
        SDIO_IRQHandler,                   // SDIO
        TIMER4_IRQHandler,                 // TIMER4
        SPI2_I2S2ADD_IRQHandler,           // SPI2 or I2S2ADD
        UART3_IRQHandler,                  // UART3
        UART4_IRQHandler,                  // UART4
        TIMER5_DAC_IRQHandler,             // TIMER5 or DAC
        TIMER6_IRQHandler,                 // TIMER6
        DMA1_Channel0_IRQHandler,          // DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // DMA1 Channel2
        DMA1_Channel3_4_IRQHandler,        // DMA1 Channel3 and Channel4
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        CAN1_TX_IRQHandler,                // CAN1 TX
        CAN1_RX0_IRQHandler,               // CAN1 RX0
        CAN1_RX1_IRQHandler,               // CAN1 RX1
        CAN1_EWMC_IRQHandler,              // CAN1 EWMC
        0,                                 // Reserved
        0,                                 // Reserved
        SHRTIMER_IRQ2_IRQHandler,          // SHRTIMER IRQ2
        SHRTIMER_IRQ3_IRQHandler,          // SHRTIMER IRQ3
        SHRTIMER_IRQ4_IRQHandler,          // SHRTIMER IRQ4
        SHRTIMER_IRQ5_IRQHandler,          // SHRTIMER IRQ5
        SHRTIMER_IRQ6_IRQHandler,          // SHRTIMER IRQ6
        0,                                 // Reserved
        0,                                 // Reserved
        SHRTIMER_IRQ0_IRQHandler,          // SHRTIMER IRQ0
        SHRTIMER_IRQ1_IRQHandler,          // SHRTIMER IRQ1
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        I2C2_EV_IRQHandler,                // I2C2 Event
        I2C2_ER_IRQHandler,                // I2C2 Error
        USART5_IRQHandler,                 // USART5
        I2C2_WKUP_IRQHandler,              // I2C2 Wakeup
        USART5_WKUP_IRQHandler,            // USART5 Wakeup
        0,                                 // Reserved
#endif

#ifdef GD32E50X_CL
        WWDGT_IRQHandler,                  // Window Watchdog Timer
        LVD_IRQHandler,                    // LVD through EXTI Line detect
        TAMPER_IRQHandler,                 // Tamper through EXTI Line detect
        RTC_IRQHandler,                    // RTC through EXTI Line
        FMC_IRQHandler,                    // FMC
        RCU_CTC_IRQHandler,                // RCU and CTC
        EXTI0_IRQHandler,                  // EXTI Line 0
        EXTI1_IRQHandler,                  // EXTI Line 1
        EXTI2_IRQHandler,                  // EXTI Line 2
        EXTI3_IRQHandler,                  // EXTI Line 3
        EXTI4_IRQHandler,                  // EXTI Line 4
        DMA0_Channel0_IRQHandler,          // DMA0 Channel0
        DMA0_Channel1_IRQHandler,          // DMA0 Channel1
        DMA0_Channel2_IRQHandler,          // DMA0 Channel2
        DMA0_Channel3_IRQHandler,          // DMA0 Channel3
        DMA0_Channel4_IRQHandler,          // DMA0 Channel4
        DMA0_Channel5_IRQHandler,          // DMA0 Channel5
        DMA0_Channel6_IRQHandler,          // DMA0 Channel6
        ADC0_1_IRQHandler,                 // ADC0 and ADC1
        CAN0_TX_IRQHandler,                // CAN0 TX
        CAN0_RX0_IRQHandler,               // CAN0 RX0
        CAN0_RX1_IRQHandler,               // CAN0 RX1
        CAN0_EWMC_IRQHandler,              // CAN0 EWMC
        EXTI5_9_IRQHandler,                // EXTI5 to EXTI9
        TIMER0_BRK_TIMER8_IRQHandler,      // TIMER0 Break and TIMER8
        TIMER0_UP_TIMER9_IRQHandler,       // TIMER0 Update and TIMER9
        TIMER0_TRG_CMT_TIMER10_IRQHandler, // TIMER0 Trigger and Commutation and TIMER10
        TIMER0_Channel_IRQHandler,         // TIMER0 Channel Capture Compare
        TIMER1_IRQHandler,                 // TIMER1
        TIMER2_IRQHandler,                 // TIMER2
        TIMER3_IRQHandler,                 // TIMER3
        I2C0_EV_IRQHandler,                // I2C0 Event
        I2C0_ER_IRQHandler,                // I2C0 Error
        I2C1_EV_IRQHandler,                // I2C1 Event
        I2C1_ER_IRQHandler,                // I2C1 Error
        SPI0_IRQHandler,                   // SPI0
        SPI1_I2S1ADD_IRQHandler,           // SPI1 or I2S1ADD
        USART0_IRQHandler,                 // USART0
        USART1_IRQHandler,                 // USART1
        USART2_IRQHandler,                 // USART2
        EXTI10_15_IRQHandler,              // EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // RTC Alarm
        USBHS_WKUP_IRQHandler,             // USBHS Wakeup
        TIMER7_BRK_TIMER11_IRQHandler,     // TIMER7 Break and TIMER11
        TIMER7_UP_TIMER12_IRQHandler,      // TIMER7 Update and TIMER12
        TIMER7_TRG_CMT_TIMER13_IRQHandler, // TIMER7 Trigger and Commutation and TIMER13
        TIMER7_Channel_IRQHandler,         // TIMER7 Channel Capture Compare
        0,                                 // Reserved
        EXMC_IRQHandler,                   // EXMC
        0,                                 // Reserved
        TIMER4_IRQHandler,                 // TIMER4
        SPI2_I2S2ADD_IRQHandler,           // SPI2 or I2S2ADD
        UART3_IRQHandler,                  // UART3
        UART4_IRQHandler,                  // UART4
        TIMER5_DAC_IRQHandler,             // TIMER5 or DAC
        TIMER6_IRQHandler,                 // TIMER6
        DMA1_Channel0_IRQHandler,          // DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // DMA1 Channel2
        DMA1_Channel3_IRQHandler,          // DMA1 Channel3
        DMA1_Channel4_IRQHandler,          // DMA1 Channel4
        ENET_IRQHandler,                   // Ethernet
        ENET_WKUP_IRQHandler,              // Ethernet Wakeup through EXTI Line
        CAN1_TX_IRQHandler,                // CAN1 TX
        CAN1_RX0_IRQHandler,               // CAN1 RX0
        CAN1_RX1_IRQHandler,               // CAN1 RX1
        CAN1_EWMC_IRQHandler,              // CAN1 EWMC
        USBHS_IRQHandler,                  // USBHS
        0,                                 // Reserved
        SHRTIMER_IRQ2_IRQHandler,          // SHRTIMER IRQ2
        SHRTIMER_IRQ3_IRQHandler,          // SHRTIMER IRQ3
        SHRTIMER_IRQ4_IRQHandler,          // SHRTIMER IRQ4
        SHRTIMER_IRQ5_IRQHandler,          // SHRTIMER IRQ5
        SHRTIMER_IRQ6_IRQHandler,          // SHRTIMER IRQ6
        USBHS_EP1_OUT_IRQHandler,          // USBHS end point 1 out
        USBHS_EP1_IN_IRQHandler,           // USBHS end point 1 in
        SHRTIMER_IRQ0_IRQHandler,          // SHRTIMER IRQ0
        SHRTIMER_IRQ1_IRQHandler,          // SHRTIMER IRQ1
        CAN2_TX_IRQHandler,                // CAN2 TX
        CAN2_RX0_IRQHandler,               // CAN2 RX0
        CAN2_RX1_IRQHandler,               // CAN2 RX1
        CAN2_EWMC_IRQHandler,              // CAN2 EWMC
        I2C2_EV_IRQHandler,                // I2C2 Event
        I2C2_ER_IRQHandler,                // I2C2 Error
        USART5_IRQHandler,                 // USART5
        I2C2_WKUP_IRQHandler,              // I2C2 Wakeup
        USART5_WKUP_IRQHandler,            // USART5 Wakeup
        TMU_IRQHandler,                    // TMU
#endif

#ifdef GD32E508
        WWDGT_IRQHandler,                  // Window Watchdog Timer
        LVD_IRQHandler,                    // LVD through EXTI Line detect
        TAMPER_IRQHandler,                 // Tamper through EXTI Line detect
        RTC_IRQHandler,                    // RTC through EXTI Line
        FMC_IRQHandler,                    // FMC
        RCU_CTC_IRQHandler,                // RCU and CTC
        EXTI0_IRQHandler,                  // EXTI Line 0
        EXTI1_IRQHandler,                  // EXTI Line 1
        EXTI2_IRQHandler,                  // EXTI Line 2
        EXTI3_IRQHandler,                  // EXTI Line 3
        EXTI4_IRQHandler,                  // EXTI Line 4
        DMA0_Channel0_IRQHandler,          // DMA0 Channel0
        DMA0_Channel1_IRQHandler,          // DMA0 Channel1
        DMA0_Channel2_IRQHandler,          // DMA0 Channel2
        DMA0_Channel3_IRQHandler,          // DMA0 Channel3
        DMA0_Channel4_IRQHandler,          // DMA0 Channel4
        DMA0_Channel5_IRQHandler,          // DMA0 Channel5
        DMA0_Channel6_IRQHandler,          // DMA0 Channel6
        ADC0_1_IRQHandler,                 // ADC0 and ADC1
        CAN0_TX_IRQHandler,                // CAN0 TX
        CAN0_RX0_IRQHandler,               // CAN0 RX0
        CAN0_RX1_IRQHandler,               // CAN0 RX1
        CAN0_EWMC_IRQHandler,              // CAN0 EWMC
        EXTI5_9_IRQHandler,                // EXTI5 to EXTI9
        TIMER0_BRK_TIMER8_IRQHandler,      // TIMER0 Break and TIMER8
        TIMER0_UP_TIMER9_IRQHandler,       // TIMER0 Update and TIMER9
        TIMER0_TRG_CMT_TIMER10_IRQHandler, // TIMER0 Trigger and Commutation and TIMER10
        TIMER0_Channel_IRQHandler,         // TIMER0 Channel Capture Compare
        TIMER1_IRQHandler,                 // TIMER1
        TIMER2_IRQHandler,                 // TIMER2
        TIMER3_IRQHandler,                 // TIMER3
        I2C0_EV_IRQHandler,                // I2C0 Event
        I2C0_ER_IRQHandler,                // I2C0 Error
        I2C1_EV_IRQHandler,                // I2C1 Event
        I2C1_ER_IRQHandler,                // I2C1 Error
        SPI0_IRQHandler,                   // SPI0
        SPI1_I2S1ADD_IRQHandler,           // SPI1 or I2S1ADD
        USART0_IRQHandler,                 // USART0
        USART1_IRQHandler,                 // USART1
        USART2_IRQHandler,                 // USART2
        EXTI10_15_IRQHandler,              // EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // RTC Alarm
        USBHS_WKUP_IRQHandler,             // USBHS Wakeup
        TIMER7_BRK_TIMER11_IRQHandler,     // TIMER7 Break and TIMER11
        TIMER7_UP_TIMER12_IRQHandler,      // TIMER7 Update and TIMER12
        TIMER7_TRG_CMT_TIMER13_IRQHandler, // TIMER7 Trigger and Commutation and TIMER13
        TIMER7_Channel_IRQHandler,         // TIMER7 Channel Capture Compare
        0,                                 // Reserved
        EXMC_IRQHandler,                   // EXMC
        0,                                 // Reserved
        TIMER4_IRQHandler,                 // TIMER4
        SPI2_I2S2ADD_IRQHandler,           // SPI2 or I2S2ADD
        UART3_IRQHandler,                  // UART3
        UART4_IRQHandler,                  // UART4
        TIMER5_DAC_IRQHandler,             // TIMER5 or DAC
        TIMER6_IRQHandler,                 // TIMER6
        DMA1_Channel0_IRQHandler,          // DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // DMA1 Channel2
        DMA1_Channel3_IRQHandler,          // DMA1 Channel3
        DMA1_Channel4_IRQHandler,          // DMA1 Channel4
        ENET_IRQHandler,                   // Ethernet
        ENET_WKUP_IRQHandler,              // Ethernet Wakeup through EXTI Line
        CAN1_TX_IRQHandler,                // CAN1 TX
        CAN1_RX0_IRQHandler,               // CAN1 RX0
        CAN1_RX1_IRQHandler,               // CAN1 RX1
        CAN1_EWMC_IRQHandler,              // CAN1 EWMC
        USBHS_IRQHandler,                  // USBHS
        0,                                 // Reserved
        SHRTIMER_IRQ2_IRQHandler,          // SHRTIMER IRQ2
        SHRTIMER_IRQ3_IRQHandler,          // SHRTIMER IRQ3
        SHRTIMER_IRQ4_IRQHandler,          // SHRTIMER IRQ4
        SHRTIMER_IRQ5_IRQHandler,          // SHRTIMER IRQ5
        SHRTIMER_IRQ6_IRQHandler,          // SHRTIMER IRQ6
        USBHS_EP1_OUT_IRQHandler,          // USBHS end point 1 out
        USBHS_EP1_IN_IRQHandler,           // USBHS end point 1 in
        SHRTIMER_IRQ0_IRQHandler,          // SHRTIMER IRQ0
        SHRTIMER_IRQ1_IRQHandler,          // SHRTIMER IRQ1
        CAN2_TX_IRQHandler,                // CAN2 TX
        CAN2_RX0_IRQHandler,               // CAN2 RX0
        CAN2_RX1_IRQHandler,               // CAN2 RX1
        CAN2_EWMC_IRQHandler,              // CAN2 EWMC
        I2C2_EV_IRQHandler,                // I2C2 Event
        I2C2_ER_IRQHandler,                // I2C2 Error
        USART5_IRQHandler,                 // USART5
        I2C2_WKUP_IRQHandler,              // I2C2 Wakeup
        USART5_WKUP_IRQHandler,            // USART5 Wakeup
        TMU_IRQHandler,                    // TMU
#endif

#ifdef GD32EPRT
        WWDGT_IRQHandler,                  // Window Watchdog Timer
        LVD_IRQHandler,                    // LVD through EXTI Line detect
        TAMPER_IRQHandler,                 // Tamper through EXTI Line detect
        RTC_IRQHandler,                    // RTC through EXTI Line
        FMC_IRQHandler,                    // FMC
        RCU_CTC_IRQHandler,                // RCU and CTC
        EXTI0_IRQHandler,                  // EXTI Line 0
        EXTI1_IRQHandler,                  // EXTI Line 1
        EXTI2_IRQHandler,                  // EXTI Line 2
        EXTI3_IRQHandler,                  // EXTI Line 3
        EXTI4_IRQHandler,                  // EXTI Line 4
        DMA0_Channel0_IRQHandler,          // DMA0 Channel0
        DMA0_Channel1_IRQHandler,          // DMA0 Channel1
        DMA0_Channel2_IRQHandler,          // DMA0 Channel2
        DMA0_Channel3_IRQHandler,          // DMA0 Channel3
        DMA0_Channel4_IRQHandler,          // DMA0 Channel4
        DMA0_Channel5_IRQHandler,          // DMA0 Channel5
        DMA0_Channel6_IRQHandler,          // DMA0 Channel6
        ADC0_1_IRQHandler,                 // ADC0 and ADC1
        USBD_HP_IRQHandler,                // USBD HP
        USBD_LP_IRQHandler,                // USBD LP
        0,                                 // Reserved
        0,                                 // Reserved
        EXTI5_9_IRQHandler,                // EXTI5 to EXTI9
        TIMER0_BRK_IRQHandler,             // TIMER0 Break
        TIMER0_UP_IRQHandler,              // TIMER0 Update
        TIMER0_TRG_CMT_IRQHandler,         // TIMER0 Trigger and Commutation
        TIMER0_Channel_IRQHandler,         // TIMER0 Channel Capture Compare
        TIMER1_IRQHandler,                 // TIMER1
        TIMER2_IRQHandler,                 // TIMER2
        TIMER3_IRQHandler,                 // TIMER3
        I2C0_EV_IRQHandler,                // I2C0 Event
        I2C0_ER_IRQHandler,                // I2C0 Error
        I2C1_EV_IRQHandler,                // I2C1 Event
        I2C1_ER_IRQHandler,                // I2C1 Error
        SPI0_IRQHandler,                   // SPI0
        SPI1_I2S1ADD_IRQHandler,           // SPI1 or I2S1ADD
        USART0_IRQHandler,                 // USART0
        USART1_IRQHandler,                 // USART1
        USART2_IRQHandler,                 // USART2
        EXTI10_15_IRQHandler,              // EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,              // RTC Alarm
        USBD_WKUP_IRQHandler,              // USBD Wakeup
        TIMER7_BRK_IRQHandler,             // TIMER7 Break
        TIMER7_UP_IRQHandler,              // TIMER7 Update
        TIMER7_TRG_CMT_IRQHandler,         // TIMER7 Trigger and Commutation
        TIMER7_Channel_IRQHandler,         // TIMER7 Channel Capture Compare
        ADC2_IRQHandler,                   // ADC2
        EXMC_IRQHandler,                   // EXMC
        0,                                 // Reserved
        TIMER4_IRQHandler,                 // TIMER4
        SPI2_I2S2ADD_IRQHandler,           // SPI2 or I2S2ADD
        UART3_IRQHandler,                  // UART3
        UART4_IRQHandler,                  // UART4
        TIMER5_DAC_IRQHandler,             // TIMER5 or DAC
        TIMER6_IRQHandler,                 // TIMER6
        DMA1_Channel0_IRQHandler,          // DMA1 Channel0
        DMA1_Channel1_IRQHandler,          // DMA1 Channel1
        DMA1_Channel2_IRQHandler,          // DMA1 Channel2
        DMA1_Channel3_4_IRQHandler,        // DMA1 Channel3 and Channel4
        0,                                 // Reserved
        ENET_IRQHandler,                   // Ethernet
        ENET_WKUP_IRQHandler,              // Ethernet Wakeup through EXTI Line
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        0,                                 // Reserved
        I2C2_EV_IRQHandler,                // I2C2 Event
        I2C2_ER_IRQHandler,                // I2C2 Error
        USART5_IRQHandler,                 // USART5
        I2C2_WKUP_IRQHandler,              // I2C2 Wakeup
        USART5_WKUP_IRQHandler,            // USART5 Wakeup
        0,                                 // Reserved
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
