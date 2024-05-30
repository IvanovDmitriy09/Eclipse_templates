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
AVD_LVD_OVD_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TAMPER_STAMP_LXTAL_IRQHandler(void);

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
ADC0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXTI5_9_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_TRG_CMT_IRQHandler(void);

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
TIMER7_BRK_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_UP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_TRG_CMT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_Channel_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMA0_Channel7_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EXMC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER5_DAC_UDR_IRQHandler(void);

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
ENET0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET0_WKUP_IRQHandler(void);

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
USBHS0_EP1_OUT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS0_EP1_IN_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS0_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DCI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HAU_TRNG_IRQHandler(void);

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
SAI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TLI_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TLI_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
IPA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SAI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
OSPI0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EV_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ER_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RSPDIF_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
DMAMUX_OVR_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HPDF_INT3_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SAI2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER14_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER15_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER16_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
MDIO_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
MDMA_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
SDIO1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
HWSEM_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ADC2_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CMP0_1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CTC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RAMECCMU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
OSPI1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTDEC0_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
RTDEC1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
FAC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TMU_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER22_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER23_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER30_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER31_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER40_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER41_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER42_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER43_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER44_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER50_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER51_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS1_EP1_OUT_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS1_EP1_IN_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS1_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
USBHS1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET1_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
ENET1_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_Message_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_Busoff_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_Error_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_FastError_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_TEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_REC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_Message_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_Busoff_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_Error_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_FastError_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_TEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_REC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_Message_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_Busoff_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_Error_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_FastError_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_TEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
CAN2_REC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
EFUSE_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C0_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPDTS_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
LPDTS_WKUP_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER0_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER7_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER1_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER2_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER3_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER4_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER22_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER23_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER30_DEC_IRQHandler(void);

void __attribute__ ((weak, alias ("Default_Handler")))
TIMER31_DEC_IRQHandler(void);



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
        // gd32h7xx vectors
        WWDGT_IRQHandler,                             // 16:Window Watchdog Timer
        AVD_LVD_OVD_IRQHandler,                       // 17:AVD/LVD/OVD through EXTI Line detect
        TAMPER_STAMP_LXTAL_IRQHandler,                // 18:RTC Tamper and TimeStamp through EXTI Line detect, LXTAL clock security system interrupt
        RTC_WKUP_IRQHandler,                          // 19:RTC Wakeup from EXTI interrupt
        FMC_IRQHandler,                               // 20:FMC global interrupt
        RCU_IRQHandler,                               // 21:RCU global interrupt
        EXTI0_IRQHandler,                             // 22:EXTI Line 0,
        EXTI1_IRQHandler,                             // 23:EXTI Line 1
        EXTI2_IRQHandler,                             // 24:EXTI Line 2
        EXTI3_IRQHandler,                             // 25:EXTI Line 3
        EXTI4_IRQHandler,                             // 26:EXTI Line 4
        DMA0_Channel0_IRQHandler,                     // 27:DMA0 Channel 0,
        DMA0_Channel1_IRQHandler,                     // 28:DMA0 Channel 1
        DMA0_Channel2_IRQHandler,                     // 29:DMA0 Channel 2
        DMA0_Channel3_IRQHandler,                     // 30:DMA0 Channel 3
        DMA0_Channel4_IRQHandler,                     // 31:DMA0 Channel 4
        DMA0_Channel5_IRQHandler,                     // 32:DMA0 Channel 5
        DMA0_Channel6_IRQHandler,                     // 33:DMA0 Channel 6
        ADC0_1_IRQHandler,                            // 34:ADC0 and ADC1 interrupt
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        EXTI5_9_IRQHandler,                           // 39:EXTI5 to EXTI9
        TIMER0_BRK_IRQHandler,                        // 40:TIMER0 Break
        TIMER0_UP_IRQHandler,                         // 41:TIMER0 Update
        TIMER0_TRG_CMT_IRQHandler,                    // 42:TIMER0 Trigger and Commutation
        TIMER0_Channel_IRQHandler,                    // 43:TIMER0 Capture Compare
        TIMER1_IRQHandler,                            // 44:TIMER1
        TIMER2_IRQHandler,                            // 45:TIMER2
        TIMER3_IRQHandler,                            // 46:TIMER3
        I2C0_EV_IRQHandler,                           // 47:I2C0 Event
        I2C0_ER_IRQHandler,                           // 48:I2C0 Error
        I2C1_EV_IRQHandler,                           // 49:I2C1 Event
        I2C1_ER_IRQHandler,                           // 50:I2C1 Error
        SPI0_IRQHandler,                              // 51:SPI0
        SPI1_IRQHandler,                              // 52:SPI1
        USART0_IRQHandler,                            // 53:USART0 global and wakeup
        USART1_IRQHandler,                            // 54:USART1 global and wakeup
        USART2_IRQHandler,                            // 55:USART2 global and wakeup
        EXTI10_15_IRQHandler,                         // 56:EXTI10 to EXTI15
        RTC_Alarm_IRQHandler,                         // 57:RTC Alarm
        0,                                            // Reserved
        TIMER7_BRK_IRQHandler,                        // 59:TIMER7 Break
        TIMER7_UP_IRQHandler,                         // 60:TIMER7 Update
        TIMER7_TRG_CMT_IRQHandler,                    // 61:TIMER7 Trigger and Commutation
        TIMER7_Channel_IRQHandler,                    // 62:TIMER7 Channel Capture Compare
        DMA0_Channel7_IRQHandler,                     // 63:DMA0 Channel 7
        EXMC_IRQHandler,                              // 64:EXMC
        SDIO0_IRQHandler,                             // 65:SDIO0
        TIMER4_IRQHandler,                            // 66:TIMER4
        SPI2_IRQHandler,                              // 67:SPI2
        UART3_IRQHandler,                             // 68:UART3
        UART4_IRQHandler,                             // 69:UART4
        TIMER5_DAC_UDR_IRQHandler,                    // 70:TIMER5 global interrupt and DAC1/DAC0 underrun error
        TIMER6_IRQHandler,                            // 71:TIMER6
        DMA1_Channel0_IRQHandler,                     // 72:DMA1 Channel0
        DMA1_Channel1_IRQHandler,                     // 73:DMA1 Channel1
        DMA1_Channel2_IRQHandler,                     // 74:DMA1 Channel2
        DMA1_Channel3_IRQHandler,                     // 75:DMA1 Channel3
        DMA1_Channel4_IRQHandler,                     // 76:DMA1 Channel4
        ENET0_IRQHandler,                             // 77:Ethernet0
        ENET0_WKUP_IRQHandler,                        // 78:Ethernet0 Wakeup through EXTI Line
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        DMA1_Channel5_IRQHandler,                     // 84:DMA1 Channel5
        DMA1_Channel6_IRQHandler,                     // 85:DMA1 Channel6
        DMA1_Channel7_IRQHandler,                     // 86:DMA1 Channel7
        USART5_IRQHandler,                            // 87:USART5 global and wakeup
        I2C2_EV_IRQHandler,                           // 88:I2C2 Event
        I2C2_ER_IRQHandler,                           // 89:I2C2 Error
        USBHS0_EP1_OUT_IRQHandler,                    // 90:USBHS0 Endpoint 1 Out
        USBHS0_EP1_IN_IRQHandler,                     // 91:USBHS0 Endpoint 1 in
        USBHS0_WKUP_IRQHandler,                       // 92:USBHS0 Wakeup through EXTI Line
        USBHS0_IRQHandler,                            // 93:USBHS0
        DCI_IRQHandler,                               // 94:DCI
        CAU_IRQHandler,                               // 95:CAU
        HAU_TRNG_IRQHandler,                          // 96:HAU and TRNG
        FPU_IRQHandler,                               // 97:FPU
        UART6_IRQHandler,                             // 98:UART6
        UART7_IRQHandler,                             // 99:UART7
        SPI3_IRQHandler,                              // 100:SPI3
        SPI4_IRQHandler,                              // 101:SPI4
        SPI5_IRQHandler,                              // 102:SPI5
        SAI0_IRQHandler,                              // 103:SAI0
        TLI_IRQHandler,                               // 104:TLI
        TLI_ER_IRQHandler,                            // 105:TLI Error
        IPA_IRQHandler,                               // 106:IPA
        SAI1_IRQHandler,                              // 107:SAI1
        OSPI0_IRQHandler,                             // 108:OSPI0
        0,                                            // Reserved
        0,                                            // Reserved
        I2C3_EV_IRQHandler,                           // 111:I2C3 Event
        I2C3_ER_IRQHandler,                           // 112:I2C3 Error
        RSPDIF_IRQHandler,                            // 113:RSPDIF
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        DMAMUX_OVR_IRQHandler,                        // 118:DMAMUX Overrun interrupt
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        HPDF_INT0_IRQHandler,                         // 126:HPDF global interrupt 0,
        HPDF_INT1_IRQHandler,                         // 127:HPDF global interrupt 1
        HPDF_INT2_IRQHandler,                         // 128:HPDF global interrupt 2
        HPDF_INT3_IRQHandler,                         // 129:HPDF global interrupt 3
        SAI2_IRQHandler,                              // 130:SAI2 global interrupt
        0,                                            // Reserved
        TIMER14_IRQHandler,                           // 132:TIMER14
        TIMER15_IRQHandler,                           // 133:TIMER15
        TIMER16_IRQHandler,                           // 134:TIMER16
        0,                                            // Reserved
        MDIO_IRQHandler,                              // 136:MDIO
        0,                                            // Reserved
        MDMA_IRQHandler,                              // 138:MDMA
        0,                                            // Reserved
        SDIO1_IRQHandler,                             // 140:SDIO1
        HWSEM_IRQHandler,                             // 141:HWSEM
        0,                                            // Reserved
        ADC2_IRQHandler,                              // 143:ADC2
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        CMP0_1_IRQHandler,                            // 153:CMP0 and CMP1
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        CTC_IRQHandler,                               // 160:Clock Recovery System
        RAMECCMU_IRQHandler,                          // 161:RAMECCMU
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        OSPI1_IRQHandler,                             // 166:OSPI1
        RTDEC0_IRQHandler,                            // 167:RTDEC0
        RTDEC1_IRQHandler,                            // 168:RTDEC1
        FAC_IRQHandler,                               // 169:FAC
        TMU_IRQHandler,                               // 170:TMU
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        0,                                            // Reserved
        TIMER22_IRQHandler,                           // 177:TIMER22
        TIMER23_IRQHandler,                           // 178:TIMER23
        TIMER30_IRQHandler,                           // 179:TIMER30
        TIMER31_IRQHandler,                           // 180:TIMER31
        TIMER40_IRQHandler,                           // 181:TIMER40
        TIMER41_IRQHandler,                           // 182:TIMER41
        TIMER42_IRQHandler,                           // 183:TIMER42
        TIMER43_IRQHandler,                           // 184:TIMER43
        TIMER44_IRQHandler,                           // 185:TIMER44
        TIMER50_IRQHandler,                           // 186:TIMER50
        TIMER51_IRQHandler,                           // 187:TIMER51
        USBHS1_EP1_OUT_IRQHandler,                    // 188:USBHS1 endpoint 1 out
        USBHS1_EP1_IN_IRQHandler,                     // 189:USBHS1 endpoint 1 in
        USBHS1_WKUP_IRQHandler,                       // 190:USBHS1 wakeup
        USBHS1_IRQHandler,                            // 191:USBHS1
        ENET1_IRQHandler,                             // 192:Ethernet1
        ENET1_WKUP_IRQHandler,                        // 193:Ethernet1 wakeup
        0,                                            // Reserved
        CAN0_WKUP_IRQHandler,                         // 195:CAN0 wakeup
        CAN0_Message_IRQHandler,                      // 196:CAN0 interrupt for message buffer
        CAN0_Busoff_IRQHandler,                       // 197:CAN0 interrupt for Bus off / Bus off done
        CAN0_Error_IRQHandler,                        // 198:CAN0 interrupt for Error
        CAN0_FastError_IRQHandler,                    // 199:CAN0 interrupt for Error in fast transmission
        CAN0_TEC_IRQHandler,                          // 200:CAN0 interrupt for Transmit warning
        CAN0_REC_IRQHandler,                          // 201:CAN0 interrupt for Receive warning
        CAN1_WKUP_IRQHandler,                         // 202:CAN1 wakeup
        CAN1_Message_IRQHandler,                      // 203:CAN1 interrupt for message buffer
        CAN1_Busoff_IRQHandler,                       // 204:CAN1 interrupt for Bus off / Bus off done
        CAN1_Error_IRQHandler,                        // 205:CAN1 interrupt for Error
        CAN1_FastError_IRQHandler,                    // 206:CAN1 interrupt for Error in fast transmission
        CAN1_TEC_IRQHandler,                          // 207:CAN1 interrupt for Transmit warning
        CAN1_REC_IRQHandler,                          // 208:CAN1 interrupt for Receive warning
        CAN2_WKUP_IRQHandler,                         // 209:CAN2 wakeup
        CAN2_Message_IRQHandler,                      // 210:CAN2 interrupt for message buffer
        CAN2_Busoff_IRQHandler,                       // 211:CAN2 interrupt for Bus off / Bus off done
        CAN2_Error_IRQHandler,                        // 212:CAN2 interrupt for Error
        CAN2_FastError_IRQHandler,                    // 213:CAN2 interrupt for Error in fast transmission
        CAN2_TEC_IRQHandler,                          // 214:CAN2 interrupt for Transmit warning
        CAN2_REC_IRQHandler,                          // 215:CAN2 interrupt for Receive warning
        EFUSE_IRQHandler,                             // 216:EFUSE
        I2C0_WKUP_IRQHandler,                         // 217:I2C0 wakeup
        I2C1_WKUP_IRQHandler,                         // 218:I2C1 wakeup
        I2C2_WKUP_IRQHandler,                         // 219:I2C2 wakeup
        I2C3_WKUP_IRQHandler,                         // 220:I2C3 wakeup
        LPDTS_IRQHandler,                             // 221:LPDTS
        LPDTS_WKUP_IRQHandler,                        // 222:LPDTS wakeup
        TIMER0_DEC_IRQHandler,                        // 223:TIMER0 DEC
        TIMER7_DEC_IRQHandler,                        // 224:TIMER7 DEC
        TIMER1_DEC_IRQHandler,                        // 225:TIMER1 DEC
        TIMER2_DEC_IRQHandler,                        // 226:TIMER2 DEC
        TIMER3_DEC_IRQHandler,                        // 227:TIMER3 DEC
        TIMER4_DEC_IRQHandler,                        // 228:TIMER4 DEC
        TIMER22_DEC_IRQHandler,                       // 229:TIMER22 DEC
        TIMER23_DEC_IRQHandler,                       // 230:TIMER23 DEC
        TIMER30_DEC_IRQHandler,                       // 231:TIMER30 DEC
        TIMER31_DEC_IRQHandler,                       // 232:TIMER31 DEC

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
