////////////////////////////////////////////////////////////////////////////////
/// @file     reg_syscfg.h
/// @author   AE TEAM
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE SERIES OF
///           MM32 FIRMWARE LIBRARY.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

// Define to prevent recursive inclusion

#ifndef __REG_SYSCFG_H
#define __REG_SYSCFG_H

// Files includes

#include <stdint.h>
#include <stdbool.h>
#include "types.h"




#if defined ( __CC_ARM )
#pragma anon_unions
#endif









#define SYSCFG_BASE                     (APB2PERIPH_BASE + 0x0000)              ///< Base Address: 0x40010000






////////////////////////////////////////////////////////////////////////////////
/// @brief SysTem Configuration Register Structure Definition
////////////////////////////////////////////////////////////////////////////////
typedef struct {
    union {
        __IO u32 CFGR;                                                          ///< SYSCFG configuration register                  offset: 0x00
        __IO u32 CFGR1;
    };
    __IO u32 RESERVED0x04;                                                      ///< RESERVED register                              offset: 0x04
    __IO u32 EXTICR[4];                                                         ///< EXTI Control register                          offset: 0x08-0x14
    __IO u32 PADHYS;                                                            ///< PADHYS register                                offset: 0x18
    __IO u32 PDETCSR;                                                           ///< PDETCSR register                               offset: 0x1C
} SYSCFG_TypeDef;


#define SYSCFG                             ((SYSCFG_TypeDef *) SYSCFG_BASE)



////////////////////////////////////////////////////////////////////////////////
///@brief System Configuration (SYSCFG)
////////////////////////////////////////////////////////////////////////////////

/// @brief SYSCFG_CFGR Register Bit definition
#define SYSCFG_CFGR_MEM_MODE_Pos           (0)
#define SYSCFG_CFGR_MEM_MODE               ((u32)0x00000003)               ///< SYSCFG_Memory Remap Config
#define SYSCFG_CFGR_MEM_MODE_0             ((u32)0x00000001)               ///< SYSCFG_Memory Remap Config Bit 0
#define SYSCFG_CFGR_MEM_MODE_1             ((u32)0x00000002)               ///< SYSCFG_Memory Remap Config Bit 1
///
#define SYSCFG_CFGR_PA11_PIN_RMP_Pos             (3)
#define SYSCFG_CFGR_PA11_PIN_RMP                 (0x01U  << SYSCFG_CFGR_PA11_PIN_RMP_Pos)                       ///< PIN PA11 to PIN PA9 remap
#define SYSCFG_CFGR_PA12_PIN_RMP_Pos             (4)
#define SYSCFG_CFGR_PA12_PIN_RMP                 (0x01U  << SYSCFG_CFGR_PA12_PIN_RMP_Pos)                       ///< PIN PA12 to PIN PA10 remap

#define SYSCFG_CFGR_ADC_DMA_RMP_Pos             (8)
#define SYSCFG_CFGR_ADC_DMA_RMP                 (0x01U  << SYSCFG_CFGR_ADC_DMA_RMP_Pos)                         ///< ADC DMA remap
#define SYSCFG_CFGR_UART1TX_DMA_RMP_Pos         (9)
#define SYSCFG_CFGR_UART1TX_DMA_RMP             (0x01U  << SYSCFG_CFGR_UART1TX_DMA_RMP_Pos)                     ///< UART1 TX DMA remap
#define SYSCFG_CFGR_UART1RX_DMA_RMP_Pos         (10)
#define SYSCFG_CFGR_UART1RX_DMA_RMP             (0x01U  << SYSCFG_CFGR_UART1RX_DMA_RMP_Pos)                     ///< UART1 RX DMA remap
#define SYSCFG_CFGR_TIM16_DMA_RMP_Pos           (11)
#define SYSCFG_CFGR_TIM16_DMA_RMP               (0x01U  << SYSCFG_CFGR_TIM16_DMA_RMP_Pos)                       ///< Timer 16 DMA remap
#define SYSCFG_CFGR_TIM17_DMA_RMP_Pos           (12)
#define SYSCFG_CFGR_TIM17_DMA_RMP               (0x01U  << SYSCFG_CFGR_TIM17_DMA_RMP_Pos)                       ///< Timer 17 DMA remap

#define SYSCFG_CFGR_CSMCH1_DMA_RMP_Pos             (13)
#define SYSCFG_CFGR_CSMCH1_DMA_RMP                 (0x01U  << SYSCFG_CFGR_CSMCH1_DMA_RMP_Pos)                   ///< CSMCH1 DMA remap
#define SYSCFG_CFGR_CSMCH2_DMA_RMP_Pos             (14)
#define SYSCFG_CFGR_CSMCH2_DMA_RMP                 (0x01U  << SYSCFG_CFGR_CSMCH2_DMA_RMP_Pos)                   ///< CSMCH1 DMA remap


/// @brief SYSCFG_EXTICR1 Register Bit definition
#define SYSCFG_EXTICR1_EXTI0               ((u16)0x000F)                   ///< EXTI 0 configuration
#define SYSCFG_EXTICR1_EXTI1               ((u16)0x00F0)                   ///< EXTI 1 configuration
#define SYSCFG_EXTICR1_EXTI2               ((u16)0x0F00)                   ///< EXTI 2 configuration
#define SYSCFG_EXTICR1_EXTI3               ((u16)0xF000)                   ///< EXTI 3 configuration

///  @brief  EXTI0 configuration
#define SYSCFG_EXTICR1_EXTI0_PA            ((u16)0x0000)                   ///< PA[0] pin
#define SYSCFG_EXTICR1_EXTI0_PB            ((u16)0x0001)                   ///< PB[0] pin
#define SYSCFG_EXTICR1_EXTI0_PC            ((u16)0x0002)                   ///< PC[0] pin
#define SYSCFG_EXTICR1_EXTI0_PD            ((u16)0x0003)                   ///< PD[0] pin
#define SYSCFG_EXTICR1_EXTI0_PE            ((u16)0x0004)                   ///< PE[0] pin
#define SYSCFG_EXTICR1_EXTI0_PF            ((u16)0x0005)                   ///< PF[0] pin

///  @brief  EXTI1 configuration
#define SYSCFG_EXTICR1_EXTI1_PA            ((u16)0x0000)                   ///< PA[1] pin
#define SYSCFG_EXTICR1_EXTI1_PB            ((u16)0x0010)                   ///< PB[1] pin
#define SYSCFG_EXTICR1_EXTI1_PC            ((u16)0x0020)                   ///< PC[1] pin
#define SYSCFG_EXTICR1_EXTI1_PD            ((u16)0x0030)                   ///< PD[1] pin
#define SYSCFG_EXTICR1_EXTI1_PE            ((u16)0x0040)                   ///< PE[1] pin
#define SYSCFG_EXTICR1_EXTI1_PF            ((u16)0x0050)                   ///< PF[1] pin

///  @brief  EXTI2 configuration
#define SYSCFG_EXTICR1_EXTI2_PA            ((u16)0x0000)                   ///< PA[2] pin
#define SYSCFG_EXTICR1_EXTI2_PB            ((u16)0x0100)                   ///< PB[2] pin
#define SYSCFG_EXTICR1_EXTI2_PC            ((u16)0x0200)                   ///< PC[2] pin
#define SYSCFG_EXTICR1_EXTI2_PD            ((u16)0x0300)                   ///< PD[2] pin
#define SYSCFG_EXTICR1_EXTI2_PE            ((u16)0x0400)                   ///< PE[2] pin
#define SYSCFG_EXTICR1_EXTI2_PF            ((u16)0x0500)                   ///< PF[2] pin


///  @brief  EXTI3 configuration
#define SYSCFG_EXTICR1_EXTI3_PA            ((u16)0x0000)                   ///< PA[3] pin
#define SYSCFG_EXTICR1_EXTI3_PB            ((u16)0x1000)                   ///< PB[3] pin
#define SYSCFG_EXTICR1_EXTI3_PC            ((u16)0x2000)                   ///< PC[3] pin
#define SYSCFG_EXTICR1_EXTI3_PD            ((u16)0x3000)                   ///< PD[3] pin
#define SYSCFG_EXTICR1_EXTI3_PE            ((u16)0x4000)                   ///< PE[3] pin
#define SYSCFG_EXTICR1_EXTI3_PF            ((u16)0x5000)                   ///< PF[3] pin


/// @brief SYSCFG_EXTICR2 Register Bit definition
#define SYSCFG_EXTICR2_EXTI4               ((u16)0x000F)                   ///< EXTI 4 configuration
#define SYSCFG_EXTICR2_EXTI5               ((u16)0x00F0)                   ///< EXTI 5 configuration
#define SYSCFG_EXTICR2_EXTI6               ((u16)0x0F00)                   ///< EXTI 6 configuration
#define SYSCFG_EXTICR2_EXTI7               ((u16)0xF000)                   ///< EXTI 7 configuration

/// @brief  EXTI4 configuration
#define SYSCFG_EXTICR2_EXTI4_PA            ((u16)0x0000)                   ///< PA[4] pin
#define SYSCFG_EXTICR2_EXTI4_PB            ((u16)0x0001)                   ///< PB[4] pin
#define SYSCFG_EXTICR2_EXTI4_PC            ((u16)0x0002)                   ///< PC[4] pin
#define SYSCFG_EXTICR2_EXTI4_PD            ((u16)0x0003)                   ///< PD[4] pin
#define SYSCFG_EXTICR2_EXTI4_PE            ((u16)0x0004)                   ///< PE[4] pin
#define SYSCFG_EXTICR2_EXTI4_PF            ((u16)0x0005)                   ///< PF[4] pin


/// @brief  EXTI5 configuration
#define SYSCFG_EXTICR2_EXTI5_PA            ((u16)0x0000)                   ///< PA[5] pin
#define SYSCFG_EXTICR2_EXTI5_PB            ((u16)0x0010)                   ///< PB[5] pin
#define SYSCFG_EXTICR2_EXTI5_PC            ((u16)0x0020)                   ///< PC[5] pin
#define SYSCFG_EXTICR2_EXTI5_PD            ((u16)0x0030)                   ///< PD[5] pin
#define SYSCFG_EXTICR2_EXTI5_PE            ((u16)0x0040)                   ///< PE[5] pin
#define SYSCFG_EXTICR2_EXTI5_PF            ((u16)0x0050)                   ///< PF[5] pin

/// @brief  EXTI6 configuration

#define SYSCFG_EXTICR2_EXTI6_PA            ((u16)0x0000)                   ///< PA[6] pin
#define SYSCFG_EXTICR2_EXTI6_PB            ((u16)0x0100)                   ///< PB[6] pin
#define SYSCFG_EXTICR2_EXTI6_PC            ((u16)0x0200)                   ///< PC[6] pin
#define SYSCFG_EXTICR2_EXTI6_PD            ((u16)0x0300)                   ///< PD[6] pin
#define SYSCFG_EXTICR2_EXTI6_PE            ((u16)0x0400)                   ///< PE[6] pin
#define SYSCFG_EXTICR2_EXTI6_PF            ((u16)0x0500)                   ///< PF[6] pin


/// @brief  EXTI7 configuration
#define SYSCFG_EXTICR2_EXTI7_PA            ((u16)0x0000)                   ///< PA[7] pin
#define SYSCFG_EXTICR2_EXTI7_PB            ((u16)0x1000)                   ///< PB[7] pin
#define SYSCFG_EXTICR2_EXTI7_PC            ((u16)0x2000)                   ///< PC[7] pin
#define SYSCFG_EXTICR2_EXTI7_PD            ((u16)0x3000)                   ///< PD[7] pin
#define SYSCFG_EXTICR2_EXTI7_PE            ((u16)0x4000)                   ///< PE[7] pin
#define SYSCFG_EXTICR2_EXTI7_PF            ((u16)0x5000)                   ///< PF[7] pin

/// @brief SYSCFG_EXTICR3 Register Bit definition
#define SYSCFG_EXTICR3_EXTI8               ((u16)0x000F)                   ///< EXTI 8 configuration
#define SYSCFG_EXTICR3_EXTI9               ((u16)0x00F0)                   ///< EXTI 9 configuration
#define SYSCFG_EXTICR3_EXTI10              ((u16)0x0F00)                   ///< EXTI 10 configuration
#define SYSCFG_EXTICR3_EXTI11              ((u16)0xF000)                   ///< EXTI 11 configuration

///  @brief  EXTI8 configuration
#define SYSCFG_EXTICR3_EXTI8_PA            ((u16)0x0000)                   ///< PA[8] pin
#define SYSCFG_EXTICR3_EXTI8_PB            ((u16)0x0001)                   ///< PB[8] pin
#define SYSCFG_EXTICR3_EXTI8_PC            ((u16)0x0002)                   ///< PC[8] pin
#define SYSCFG_EXTICR3_EXTI8_PD            ((u16)0x0003)                   ///< PD[8] pin
#define SYSCFG_EXTICR3_EXTI8_PE            ((u16)0x0004)                   ///< PE[8] pin
#define SYSCFG_EXTICR3_EXTI8_PF            ((u16)0x0005)                   ///< PF[8] pin


///  @brief  EXTI9 configuration

#define SYSCFG_EXTICR3_EXTI9_PA            ((u16)0x0000)                   ///< PA[9] pin
#define SYSCFG_EXTICR3_EXTI9_PB            ((u16)0x0010)                   ///< PB[9] pin
#define SYSCFG_EXTICR3_EXTI9_PC            ((u16)0x0020)                   ///< PC[9] pin
#define SYSCFG_EXTICR3_EXTI9_PD            ((u16)0x0030)                   ///< PD[9] pin
#define SYSCFG_EXTICR3_EXTI9_PE            ((u16)0x0040)                   ///< PE[9] pin
#define SYSCFG_EXTICR3_EXTI9_PF            ((u16)0x0050)                   ///< PF[9] pin

///  @brief  EXTI10 configuration
#define SYSCFG_EXTICR3_EXTI10_PA           ((u16)0x0000)                   ///< PA[10] pin
#define SYSCFG_EXTICR3_EXTI10_PB           ((u16)0x0100)                   ///< PB[10] pin
#define SYSCFG_EXTICR3_EXTI10_PC           ((u16)0x0200)                   ///< PC[10] pin
#define SYSCFG_EXTICR3_EXTI10_PD           ((u16)0x0300)                   ///< PD[10] pin
#define SYSCFG_EXTICR3_EXTI10_PE           ((u16)0x0400)                   ///< PE[10] pin
#define SYSCFG_EXTICR3_EXTI10_PF           ((u16)0x0500)                   ///< PF[10] pin

///  @brief  EXTI11 configuration
#define SYSCFG_EXTICR3_EXTI11_PA           ((u16)0x0000)                   ///< PA[11] pin
#define SYSCFG_EXTICR3_EXTI11_PB           ((u16)0x1000)                   ///< PB[11] pin
#define SYSCFG_EXTICR3_EXTI11_PC           ((u16)0x2000)                   ///< PC[11] pin
#define SYSCFG_EXTICR3_EXTI11_PD           ((u16)0x3000)                   ///< PD[11] pin
#define SYSCFG_EXTICR3_EXTI11_PE           ((u16)0x4000)                   ///< PE[11] pin
#define SYSCFG_EXTICR3_EXTI11_PF           ((u16)0x5000)                   ///< PF[11] pin


/// @brief SYSCFG_EXTICR4 Register Bit definition
#define SYSCFG_EXTICR4_EXTI12               ((u16)0x000F)                  ///< EXTI 12 configuration
#define SYSCFG_EXTICR4_EXTI13               ((u16)0x00F0)                  ///< EXTI 13 configuration
#define SYSCFG_EXTICR4_EXTI14               ((u16)0x0F00)                  ///< EXTI 14 configuration
#define SYSCFG_EXTICR4_EXTI15               ((u16)0xF000)                  ///< EXTI 15 configuration

#define SYSCFG_EXTICR4_EXTI12_PA            ((u16)0x0000)                  ///< PA[12] pin for EXTI12
#define SYSCFG_EXTICR4_EXTI12_PB            ((u16)0x0001)                  ///< PB[12] pin for EXTI12
#define SYSCFG_EXTICR4_EXTI12_PC            ((u16)0x0002)                  ///< PC[12] pin for EXTI12
#define SYSCFG_EXTICR4_EXTI12_PD            ((u16)0x0003)                  ///< PD[12] pin for EXTI12
#define SYSCFG_EXTICR4_EXTI12_PE            ((u16)0x0004)                  ///< PE[12] pin for EXTI12
#define SYSCFG_EXTICR4_EXTI12_PF            ((u16)0x0005)                  ///< PF[12] pin for EXTI12

#define SYSCFG_EXTICR4_EXTI13_PA            ((u16)0x0000)                  ///< PA[13] pin for EXTI13
#define SYSCFG_EXTICR4_EXTI13_PB            ((u16)0x0010)                  ///< PB[13] pin for EXTI13
#define SYSCFG_EXTICR4_EXTI13_PC            ((u16)0x0020)                  ///< PC[13] pin for EXTI13
#define SYSCFG_EXTICR4_EXTI13_PD            ((u16)0x0030)                  ///< PD[13] pin for EXTI13
#define SYSCFG_EXTICR4_EXTI13_PE            ((u16)0x0040)                  ///< PE[13] pin for EXTI13
#define SYSCFG_EXTICR4_EXTI13_PF            ((u16)0x0050)                  ///< PF[13] pin for EXTI13

#define SYSCFG_EXTICR4_EXTI14_PA            ((u16)0x0000)                  ///< PA[14] pin for EXTI14
#define SYSCFG_EXTICR4_EXTI14_PB            ((u16)0x0100)                  ///< PB[14] pin for EXTI14
#define SYSCFG_EXTICR4_EXTI14_PC            ((u16)0x0200)                  ///< PC[14] pin for EXTI14
#define SYSCFG_EXTICR4_EXTI14_PD            ((u16)0x0300)                  ///< PD[14] pin for EXTI14
#define SYSCFG_EXTICR4_EXTI14_PE            ((u16)0x0400)                  ///< PE[14] pin for EXTI14
#define SYSCFG_EXTICR4_EXTI14_PF            ((u16)0x0500)                  ///< PF[14] pin for EXTI14

#define SYSCFG_EXTICR4_EXTI15_PA            ((u16)0x0000)                  ///< PA[15] pin for EXTI15
#define SYSCFG_EXTICR4_EXTI15_PB            ((u16)0x1000)                  ///< PB[15] pin for EXTI15
#define SYSCFG_EXTICR4_EXTI15_PC            ((u16)0x2000)                  ///< PC[15] pin for EXTI15
#define SYSCFG_EXTICR4_EXTI15_PD            ((u16)0x3000)                  ///< PD[15] pin for EXTI15
#define SYSCFG_EXTICR4_EXTI15_PE            ((u16)0x4000)                  ///< PE[15] pin for EXTI15
#define SYSCFG_EXTICR4_EXTI15_PF            ((u16)0x5000)                  ///< PF[15] pin for EXTI15

#define SYSCFG_PADHYS_I2C1_MODE_SEL_Pos     (16)
#define SYSCFG_PADHYS_I2C1_MODE_SEL         (0x01U  << SYSCFG_PADHYS_I2C1_MODE_SEL_Pos)                   ///< I2C1 Enable PushPull mode

#define SYSCFG_PDETCSR_PVDE_Pos             (0)
#define SYSCFG_PDETCSR_PVDE                 (0x01U  << SYSCFG_PDETCSR_PVDE_Pos)                     ///< Power Voltage Detector Enable

#define SYSCFG_PDETCSR_PLS_Pos              (1)
#define SYSCFG_PDETCSR_PLS                  (0x0FU  << SYSCFG_PDETCSR_PLS_Pos)

#define SYSCFG_PDETCSR_PLS_1V7              (0x00U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 1.7V
#define SYSCFG_PDETCSR_PLS_2V0              (0x01U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 2.0V
#define SYSCFG_PDETCSR_PLS_2V3              (0x02U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 2.3V
#define SYSCFG_PDETCSR_PLS_2V6              (0x03U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 2.6V
#define SYSCFG_PDETCSR_PLS_2V9              (0x04U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 2.9V
#define SYSCFG_PDETCSR_PLS_3V2              (0x05U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 3.2V
#define SYSCFG_PDETCSR_PLS_3V5              (0x06U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 3.5V
#define SYSCFG_PDETCSR_PLS_3V8              (0x07U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 3.8V
#define SYSCFG_PDETCSR_PLS_4V1              (0x08U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 4.1V
#define SYSCFG_PDETCSR_PLS_4V4              (0x09U  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 4.4V
#define SYSCFG_PDETCSR_PLS_4V7              (0x0AU  << SYSCFG_PDETCSR_PLS_Pos)              ///< PVD level 4.7V


#define SYSCFG_PDETCSR_PVDO_Pos             (5)
#define SYSCFG_PDETCSR_PVDO                 (0x01U  << SYSCFG_PDETCSR_PVDO_Pos)             ///< PVD Output

#define SYSCFG_PDETCSR_VDTO_Pos             (6)
#define SYSCFG_PDETCSR_VDTO                 (0x01U  << SYSCFG_PDETCSR_VDTO_Pos)             ///< VDT Output Enable

#define SYSCFG_PDETCSR_VDTE_Pos             (8)
#define SYSCFG_PDETCSR_VDTE                 (0x01U  << SYSCFG_PDETCSR_VDTE_Pos)             ///< VDT Output

#define SYSCFG_PDETCSR_VDTLS_Pos            (9)
#define SYSCFG_PDETCSR_VDTLS                (0x0FU  << SYSCFG_PDETCSR_VDTLS_Pos)
#define SYSCFG_PDETCSR_VDTLS_0V9            (0x00U  << SYSCFG_PDETCSR_VDTLS_Pos)            ///< VDT level 0.9V
#define SYSCFG_PDETCSR_VDTLS_1V0            (0x01U  << SYSCFG_PDETCSR_VDTLS_Pos)            ///< VDT level 1.0V
#define SYSCFG_PDETCSR_VDTLS_1V1            (0x02U  << SYSCFG_PDETCSR_VDTLS_Pos)            ///< VDT level 1.1V
#define SYSCFG_PDETCSR_VDTLS_1V2            (0x03U  << SYSCFG_PDETCSR_VDTLS_Pos)            ///< VDT level 1.2V

#define SYSCFG_PDETCSR_VBATDIV3EN_Pos       (11)
#define SYSCFG_PDETCSR_VBATDIV3EN           (0x01U  << SYSCFG_PDETCSR_VBATDIV3EN_Pos)       ///< VBATDIV3 Enable

#define SYSCFG_VOSDLY_CNT_Pos               (0)
#define SYSCFG_VOSDLY_CNT                   (0x03FFU << SYSCFG_VOSDLY_CNT_Pos)              ///< SYSCFG VOSDLY CNT




/// @}

/// @}

/// @}

////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
