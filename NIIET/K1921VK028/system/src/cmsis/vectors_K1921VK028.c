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
				WDT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				RCU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				RTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				MFLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				BFLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOB_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOF_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOG_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOJ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOL_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH11_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH12_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH13_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH17_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH18_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH19_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH20_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH21_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH22_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH23_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH24_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH25_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH26_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH27_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH28_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH29_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH30_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				DMA_CH31_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ETMR0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ETMR1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ETMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ETMR3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_MX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_E_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_MX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_E_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_MX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_E_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_MX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_E_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART0_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART0_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART0_TO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART1_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART1_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART1_TO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TUART1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI0_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI0_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI0_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI1_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI1_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI1_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI2_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI2_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI2_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI2_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI3_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI3_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI3_RO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI3_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				I2C0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				I2C1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPWR0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPWR1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				MILSTD0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				MILSTD1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM0_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM0_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM1_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM1_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM2_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM2_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM3_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM3_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM4_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM4_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM5_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM5_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM6_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM6_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM7_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM7_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM8_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM8_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM9_HD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				PWM9_TZ_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				QEP0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				QEP1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				QEP2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				QEP3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_DC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ETH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN5_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN6_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN8_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN10_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN11_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN12_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN13_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				CAN15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				FPU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				LAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SDFM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				OWI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				OWI1_IRQHandler(void);



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
        // K1921VK028 vectors
				     WDT_IRQHandler, // Watchdog timer interrupt
				     RCU_IRQHandler, // Reset and clock unit interrupt
				     RTC_IRQHandler, // RTC interrupt
				     MFLASH_IRQHandler, // MFLASH interrupt
				     BFLASH_IRQHandler, // BFLASH interrupt
				     GPIOA_IRQHandler, // GPIO A interrupt
				     GPIOB_IRQHandler, // GPIO B interrupt
				     GPIOC_IRQHandler, // GPIO C interrupt
				     GPIOD_IRQHandler, // GPIO D interrupt
				     GPIOE_IRQHandler, // GPIO E interrupt
				     GPIOF_IRQHandler, // GPIO F interrupt
				     GPIOG_IRQHandler, // GPIO G interrupt
				     GPIOH_IRQHandler, // GPIO H interrupt
				     GPIOJ_IRQHandler, // GPIO J interrupt
				     GPIOK_IRQHandler, // GPIO K interrupt
				     GPIOL_IRQHandler, // GPIO L interrupt
				     GPIOM_IRQHandler, // GPIO M interrupt
				     DMA_CH0_IRQHandler, // DMA channel 0, interrupt
				     DMA_CH1_IRQHandler, // DMA channel 1 interrupt
				     DMA_CH2_IRQHandler, // DMA channel 2 interrupt
				     DMA_CH3_IRQHandler, // DMA channel 3 interrupt
				     DMA_CH4_IRQHandler, // DMA channel 4 interrupt
				     DMA_CH5_IRQHandler, // DMA channel 5 interrupt
				     DMA_CH6_IRQHandler, // DMA channel 6 interrupt
				     DMA_CH7_IRQHandler, // DMA channel 7 interrupt
				     DMA_CH8_IRQHandler, // DMA channel 8 interrupt
				     DMA_CH9_IRQHandler, // DMA channel 9 interrupt
				     DMA_CH10_IRQHandler, // DMA channel 10 interrupt
				     DMA_CH11_IRQHandler, // DMA channel 11 interrupt
				     DMA_CH12_IRQHandler, // DMA channel 12 interrupt
				     DMA_CH13_IRQHandler, // DMA channel 13 interrupt
				     DMA_CH14_IRQHandler, // DMA channel 14 interrupt
				     DMA_CH15_IRQHandler, // DMA channel 15 interrupt
				     DMA_CH16_IRQHandler, // DMA channel 16 interrupt
				     DMA_CH17_IRQHandler, // DMA channel 17 interrupt
				     DMA_CH18_IRQHandler, // DMA channel 18 interrupt
				     DMA_CH19_IRQHandler, // DMA channel 19 interrupt
				     DMA_CH20_IRQHandler, // DMA channel 20 interrupt
				     DMA_CH21_IRQHandler, // DMA channel 21 interrupt
				     DMA_CH22_IRQHandler, // DMA channel 22 interrupt
				     DMA_CH23_IRQHandler, // DMA channel 23 interrupt
				     DMA_CH24_IRQHandler, // DMA channel 24 interrupt
				     DMA_CH25_IRQHandler, // DMA channel 25 interrupt
				     DMA_CH26_IRQHandler, // DMA channel 26 interrupt
				     DMA_CH27_IRQHandler, // DMA channel 27 interrupt
				     DMA_CH28_IRQHandler, // DMA channel 28 interrupt
				     DMA_CH29_IRQHandler, // DMA channel 29 interrupt
				     DMA_CH30_IRQHandler, // DMA channel 30 interrupt
				     DMA_CH31_IRQHandler, // DMA channel 31 interrupt
				     TMR0_IRQHandler, // Timer 0, interrupt
				     TMR1_IRQHandler, // Timer 1 interrupt
				     TMR2_IRQHandler, // Timer 2 interrupt
				     TMR3_IRQHandler, // Timer 3 interrupt
				     ETMR0_IRQHandler, // Enhanced Timer 0, interrupt
				     ETMR1_IRQHandler, // Enhanced Timer 1 interrupt
				     ETMR2_IRQHandler, // Enhanced Timer 2 interrupt
				     ETMR3_IRQHandler, // Enhanced Timer 3 interrupt
				     UART0_TD_IRQHandler, // UART0 Transmit Done interrupt
				     UART0_MX_IRQHandler, // UART0 Modem interrupt
				     UART0_RX_IRQHandler, // UART0 Recieve interrupt
				     UART0_TX_IRQHandler, // UART0 Transmit interrupt
				     UART0_RT_IRQHandler, // UART0 Recieve interrupt
				     UART0_E_IRQHandler, // UART0 Error interrupt
				     UART0_IRQHandler, // UART0 interrupt
				     UART1_TD_IRQHandler, // UART1 Transmit Done interrupt
				     UART1_MX_IRQHandler, // UART1 Modem interrupt
				     UART1_RX_IRQHandler, // UART1 Recieve interrupt
				     UART1_TX_IRQHandler, // UART1 Transmit interrupt
				     UART1_RT_IRQHandler, // UART1 Recieve interrupt
				     UART1_E_IRQHandler, // UART1 Error interrupt
				     UART1_IRQHandler, // UART1 interrupt
				     UART2_TD_IRQHandler, // UART2 Transmit Done interrupt
				     UART2_MX_IRQHandler, // UART2 Modem interrupt
				     UART2_RX_IRQHandler, // UART2 Recieve interrupt
				     UART2_TX_IRQHandler, // UART2 Transmit interrupt
				     UART2_RT_IRQHandler, // UART2 Recieve interrupt
				     UART2_E_IRQHandler, // UART2 Error interrupt
				     UART2_IRQHandler, // UART2 interrupt
				     UART3_TD_IRQHandler, // UART3 Transmit Done interrupt
				     UART3_MX_IRQHandler, // UART3 Modem interrupt
				     UART3_RX_IRQHandler, // UART3 Recieve interrupt
				     UART3_TX_IRQHandler, // UART3 Transmit interrupt
				     UART3_RT_IRQHandler, // UART3 Recieve interrupt
				     UART3_E_IRQHandler, // UART3 Error interrupt
				     UART3_IRQHandler, // UART3 interrupt
				     TUART0_RX_IRQHandler, // Tiny UART0 Receive interrupt
				     TUART0_TX_IRQHandler, // Tiny UART0 Transmit interrupt
				     TUART0_RO_IRQHandler, // Tiny UART0 Receive Overrun interrupt
				     TUART0_TO_IRQHandler, // Tiny UART0 Transmit Overrun interrupt
				     TUART0_IRQHandler, // Tiny UART0 interrupt
				     TUART1_RX_IRQHandler, // Tiny UART1 Receive interrupt
				     TUART1_TX_IRQHandler, // Tiny UART1 Transmit interrupt
				     TUART1_RO_IRQHandler, // Tiny UART1 Receive Overrun interrupt
				     TUART1_TO_IRQHandler, // Tiny UART1 Transmit Overrun interrupt
				     TUART1_IRQHandler, // Tiny UART1 interrupt
				     SPI0_IRQHandler, // SPI0 interrupt
				     SPI0_RX_IRQHandler, // SPI0 Receive interrupt
				     SPI0_TX_IRQHandler, // SPI0 Transmit interrupt
				     SPI0_RO_IRQHandler, // SPI0 Receive Overrun interrupt
				     SPI0_RT_IRQHandler, // SPI0 Receive Timeout interrupt
				     SPI1_IRQHandler, // SPI1 interrupt
				     SPI1_RX_IRQHandler, // SPI1 Receive interrupt
				     SPI1_TX_IRQHandler, // SPI1 Transmit interrupt
				     SPI1_RO_IRQHandler, // SPI1 Receive Overrun interrupt
				     SPI1_RT_IRQHandler, // SPI1 Receive Timeout interrupt
				     SPI2_IRQHandler, // SPI2 interrupt
				     SPI2_RX_IRQHandler, // SPI2 Receive interrupt
				     SPI2_TX_IRQHandler, // SPI2 Transmit interrupt
				     SPI2_RO_IRQHandler, // SPI2 Receive Overrun interrupt
				     SPI2_RT_IRQHandler, // SPI2 Receive Timeout interrupt
				     SPI3_IRQHandler, // SPI3 interrupt
				     SPI3_RX_IRQHandler, // SPI3 Receive interrupt
				     SPI3_TX_IRQHandler, // SPI3 Transmit interrupt
				     SPI3_RO_IRQHandler, // SPI3 Receive Overrun interrupt
				     SPI3_RT_IRQHandler, // SPI3 Receive Timeout interrupt
				     I2C0_IRQHandler, // I2C0 interrupt
				     I2C1_IRQHandler, // I2C1 interrupt
				     SPWR0_IRQHandler, // SpaceWire0 interrupt
				     SPWR1_IRQHandler, // SpaceWire1 interrupt
				     MILSTD0_IRQHandler, // MIL-STD 1553 0, interrupt
				     MILSTD1_IRQHandler, // MIL-STD 1553 1 interrupt
				     ECAP0_IRQHandler, // Capture Unit 0, interrupt
				     ECAP1_IRQHandler, // Capture Unit 1 interrupt
				     ECAP2_IRQHandler, // Capture Unit 2 interrupt
				     ECAP3_IRQHandler, // Capture Unit 3 interrupt
				     ECAP4_IRQHandler, // Capture Unit 4 interrupt
				     ECAP5_IRQHandler, // Capture Unit 5 interrupt
				     PWM0_IRQHandler, // PWM0 interrupt
				     PWM0_HD_IRQHandler, // PWM0 HD interrupt
				     PWM0_TZ_IRQHandler, // PWM0 TZ interrupt
				     PWM1_IRQHandler, // PWM1 interrupt
				     PWM1_HD_IRQHandler, // PWM1 HD interrupt
				     PWM1_TZ_IRQHandler, // PWM1 TZ interrupt
				     PWM2_IRQHandler, // PWM2 interrupt
				     PWM2_HD_IRQHandler, // PWM2 HD interrupt
				     PWM2_TZ_IRQHandler, // PWM2 TZ interrupt
				     PWM3_IRQHandler, // PWM3 interrupt
				     PWM3_HD_IRQHandler, // PWM3 HD interrupt
				     PWM3_TZ_IRQHandler, // PWM3 TZ interrupt
				     PWM4_IRQHandler, // PWM4 interrupt
				     PWM4_HD_IRQHandler, // PWM4 HD interrupt
				     PWM4_TZ_IRQHandler, // PWM4 TZ interrupt
				     PWM5_IRQHandler, // PWM5 interrupt
				     PWM5_HD_IRQHandler, // PWM5 HD interrupt
				     PWM5_TZ_IRQHandler, // PWM5 TZ interrupt
				     PWM6_IRQHandler, // PWM6 interrupt
				     PWM6_HD_IRQHandler, // PWM6 HD interrupt
				     PWM6_TZ_IRQHandler, // PWM6 TZ interrupt
				     PWM7_IRQHandler, // PWM7 interrupt
				     PWM7_HD_IRQHandler, // PWM7 HD interrupt
				     PWM7_TZ_IRQHandler, // PWM7 TZ interrupt
				     PWM8_IRQHandler, // PWM8 interrupt
				     PWM8_HD_IRQHandler, // PWM8 HD interrupt
				     PWM8_TZ_IRQHandler, // PWM8 TZ interrupt
				     PWM9_IRQHandler, // PWM9 interrupt
				     PWM9_HD_IRQHandler, // PWM9 HD interrupt
				     PWM9_TZ_IRQHandler, // PWM9 TZ interrupt
				     QEP0_IRQHandler, // QEP0 interrupt
				     QEP1_IRQHandler, // QEP1 interrupt
				     QEP2_IRQHandler, // QEP2 interrupt
				     QEP3_IRQHandler, // QEP3 interrupt
				     ADC_SEQ0_IRQHandler, // ADC Sequencer 0, interrupt
				     ADC_SEQ1_IRQHandler, // ADC Sequencer 1 interrupt
				     ADC_SEQ2_IRQHandler, // ADC Sequencer 2 interrupt
				     ADC_SEQ3_IRQHandler, // ADC Sequencer 3 interrupt
				     ADC_SEQ4_IRQHandler, // ADC Sequencer 4 interrupt
				     ADC_SEQ5_IRQHandler, // ADC Sequencer 5 interrupt
				     ADC_SEQ6_IRQHandler, // ADC Sequencer 6 interrupt
				     ADC_SEQ7_IRQHandler, // ADC Sequencer 7 interrupt
				     ADC_DC_IRQHandler, // ADC Digital Comparator interrupt
				     ETH_IRQHandler, // Ethernet interrupt
				     CAN0_IRQHandler, // CAN0 interrupt
				     CAN1_IRQHandler, // CAN1 interrupt
				     CAN2_IRQHandler, // CAN2 interrupt
				     CAN3_IRQHandler, // CAN3 interrupt
				     CAN4_IRQHandler, // CAN4 interrupt
				     CAN5_IRQHandler, // CAN5 interrupt
				     CAN6_IRQHandler, // CAN6 interrupt
				     CAN7_IRQHandler, // CAN7 interrupt
				     CAN8_IRQHandler, // CAN8 interrupt
				     CAN9_IRQHandler, // CAN9 interrupt
				     CAN10_IRQHandler, // CAN10 interrupt
				     CAN11_IRQHandler, // CAN11 interrupt
				     CAN12_IRQHandler, // CAN12 interrupt
				     CAN13_IRQHandler, // CAN13 interrupt
				     CAN14_IRQHandler, // CAN14 interrupt
				     CAN15_IRQHandler, // CAN15 interrupt
				     FPU_IRQHandler, // FPU exception interrupt
				     TMU_IRQHandler, // TMU interrupt
				     LAU_IRQHandler, // LAU interrupt
				     SDFM_IRQHandler, // SDFM interrupt
				     OWI0_IRQHandler, // OWI0 interrupt
				     OWI1_IRQHandler, // OWI1 interrupt
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
