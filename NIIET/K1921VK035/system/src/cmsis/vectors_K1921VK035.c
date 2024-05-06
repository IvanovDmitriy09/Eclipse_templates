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
				MFLASH_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				GPIOB_IRQHandler(void);

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
				TMR0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				TMR3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART0_E_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_TD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				UART1_E_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI_RO_RT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI_RX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				SPI_TX_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				I2C_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ECAP2_IRQHandler(void);

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
				QEP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_SEQ1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
				ADC_DC_IRQHandler(void);

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
        // K1921VK035 vectors
        			 WDT_IRQHandler, // Watchdog timer interrupt
				     RCU_IRQHandler, // Reset and clock unit interrupt
				     MFLASH_IRQHandler, // MFLASH interrupt
				     GPIOA_IRQHandler, // GPIO A interrupt
				     GPIOB_IRQHandler, // GPIO B interrupt
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
				     TMR0_IRQHandler, // Timer 0, interrupt
				     TMR1_IRQHandler, // Timer 1 interrupt
				     TMR2_IRQHandler, // Timer 2 interrupt
				     TMR3_IRQHandler, // Timer 3 interrupt
				     UART0_TD_IRQHandler, // UART0 Transmit Done interrupt
				     UART0_RX_IRQHandler, // UART0 Recieve interrupt
				     UART0_TX_IRQHandler, // UART0 Transmit interrupt
				     UART0_E_RT_IRQHandler, // UART0 Error and Receive Timeout interrupt
				     UART1_TD_IRQHandler, // UART1 Transmit Done interrupt
				     UART1_RX_IRQHandler, // UART1 Recieve interrupt
				     UART1_TX_IRQHandler, // UART1 Transmit interrupt
				     UART1_E_RT_IRQHandler, // UART1 Error and Receive Timeout interrupt
				     SPI_RO_RT_IRQHandler, // SPI RX FIFO overrun and Receive Timeout interrupt
				     SPI_RX_IRQHandler, // SPI Receive interrupt
				     SPI_TX_IRQHandler, // SPI Transmit interrupt
				     I2C_IRQHandler, // I2C interrupt
				     ECAP0_IRQHandler, // ECAP0 interrupt
				     ECAP1_IRQHandler, // ECAP1 interrupt
				     ECAP2_IRQHandler, // ECAP2 interrupt
				     PWM0_IRQHandler, // PWM0 interrupt
				     PWM0_HD_IRQHandler, // PWM0 HD interrupt
				     PWM0_TZ_IRQHandler, // PWM0 TZ interrupt
				     PWM1_IRQHandler, // PWM1 interrupt
				     PWM1_HD_IRQHandler, // PWM1 HD interrupt
				     PWM1_TZ_IRQHandler, // PWM1 TZ interrupt
				     PWM2_IRQHandler, // PWM2 interrupt
				     PWM2_HD_IRQHandler, // PWM2 HD interrupt
				     PWM2_TZ_IRQHandler, // PWM2 TZ interrupt
				     QEP_IRQHandler, // QEP interrupt
				     ADC_SEQ0_IRQHandler, // ADC Sequencer 0, interrupt
				     ADC_SEQ1_IRQHandler, // ADC Sequencer 1 interrupt
				     ADC_DC_IRQHandler, // ADC Digital Comparator interrupt
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
