/*!
    \file    system_gd32vf103.c
    \brief   RISC-V Device Peripheral Access Layer Source File for
             GD32VF103 Device Series

    \version 2025-02-10, V1.5.0, firmware for GD32VF103
*/

/*
 * Copyright (c) 2009-2018 Arm Limited. All rights reserved.
 * Copyright (c) 2019 Nuclei Limited. All rights reserved.
 * Copyright (c) 2024, GigaDevice Semiconductor Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This file refers the RISC-V standard, some adjustments are made according to GigaDevice chips */

#include "gd32vf103.h"

/* system frequency define */
#define __IRC8M           (IRC8M_VALUE)            /* internal 8 MHz RC oscillator frequency */
#define __HXTAL           (HXTAL_VALUE)            /* high speed crystal oscillator frequency */
#define __SYS_OSC_CLK     (__IRC8M)                /* main oscillator frequency */

/* select a system clock by uncommenting the following line */
/* use IRC8M */
#define __SYSTEM_CLOCK_48M_PLL_IRC8M            (uint32_t)(48000000)
//#define __SYSTEM_CLOCK_72M_PLL_IRC8M            (uint32_t)(72000000)
//#define __SYSTEM_CLOCK_108M_PLL_IRC8M           (uint32_t)(108000000)

/********************************************************************/
//#define __SYSTEM_CLOCK_HXTAL                    (HXTAL_VALUE)
//#define __SYSTEM_CLOCK_24M_PLL_HXTAL            (uint32_t)(24000000)
/********************************************************************/

//#define __SYSTEM_CLOCK_36M_PLL_HXTAL            (uint32_t)(36000000)
//#define __SYSTEM_CLOCK_48M_PLL_HXTAL            (uint32_t)(48000000)
//#define __SYSTEM_CLOCK_56M_PLL_HXTAL            (uint32_t)(56000000)
//#define __SYSTEM_CLOCK_72M_PLL_HXTAL            (uint32_t)(72000000)
//#define __SYSTEM_CLOCK_96M_PLL_HXTAL            (uint32_t)(96000000)
//#define __SYSTEM_CLOCK_108M_PLL_HXTAL           (uint32_t)(108000000)

/* The following is to prevent Vcore fluctuations caused by frequency switching. 
   It is strongly recommended to include it to avoid issues caused by self-removal. */
#define RCU_MODIFY_DE_2(__delay)  do{                                     \
                                      volatile uint32_t i,reg;            \
                                      if(0 != __delay){                   \
                                          /* Insert a software delay */   \
                                          for(i=0; i<__delay; i++){       \
                                          }                               \
                                          reg = RCU_CFG0;                 \
                                          reg &= ~(RCU_CFG0_AHBPSC);     \
                                          reg |= RCU_AHB_CKSYS_DIV2;     \
                                          /* AHB = SYSCLK/2 */           \
                                          RCU_CFG0 = reg;                \
                                          /* Insert a software delay */  \
                                          for(i=0; i<__delay; i++){      \
                                          }                              \
                                          reg = RCU_CFG0;                \
                                          reg &= ~(RCU_CFG0_AHBPSC);     \
                                          reg |= RCU_AHB_CKSYS_DIV4;     \
                                          /* AHB = SYSCLK/4 */           \
                                          RCU_CFG0 = reg;                \
                                          /* Insert a software delay */  \
                                          for(i=0; i<__delay; i++){      \
                                          }                              \
                                      }                                  \
                                  }while(0)

#define SEL_IRC8M       0x00U
#define SEL_HXTAL       0x01U
#define SEL_PLL         0x02U

/* set the system clock frequency and declare the system clock configuration function */
#ifdef __SYSTEM_CLOCK_48M_PLL_IRC8M
uint32_t SystemCoreClock = __SYSTEM_CLOCK_48M_PLL_IRC8M;
static void system_clock_48m_irc8m(void);
#elif defined (__SYSTEM_CLOCK_72M_PLL_IRC8M)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_72M_PLL_IRC8M;
static void system_clock_72m_irc8m(void);
#elif defined (__SYSTEM_CLOCK_108M_PLL_IRC8M)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_108M_PLL_IRC8M;
static void system_clock_108m_irc8m(void);

#elif defined (__SYSTEM_CLOCK_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_HXTAL;
static void system_clock_hxtal(void);
#elif defined (__SYSTEM_CLOCK_24M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_24M_PLL_HXTAL;
static void system_clock_24m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_36M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_36M_PLL_HXTAL;
static void system_clock_36m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_48M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_48M_PLL_HXTAL;
static void system_clock_48m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_56M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_56M_PLL_HXTAL;
static void system_clock_56m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_72M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_72M_PLL_HXTAL;
static void system_clock_72m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_96M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_96M_PLL_HXTAL;
static void system_clock_96m_hxtal(void);
#elif defined (__SYSTEM_CLOCK_108M_PLL_HXTAL)
uint32_t SystemCoreClock = __SYSTEM_CLOCK_108M_PLL_HXTAL;
static void system_clock_108m_hxtal(void);
#else
uint32_t SystemCoreClock = IRC8M_VALUE;
#endif /* __SYSTEM_CLOCK_48M_PLL_IRC8M */

/* configure the system clock */
static void system_clock_config(void);
/* software delay to prevent the impact of Vcore fluctuations.
   It is strongly recommended to include it to avoid issues caused by self-removal. */
static void _soft_delay_(uint32_t time)
{
    __IO uint32_t i;
    for(i=0; i<time*10; i++){
    }
}

/*!
    \brief      configure the system clock
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_config(void)
{
#ifdef __SYSTEM_CLOCK_HXTAL
    system_clock_hxtal();
#elif defined (__SYSTEM_CLOCK_24M_PLL_HXTAL)
    system_clock_24m_hxtal();
#elif defined (__SYSTEM_CLOCK_36M_PLL_HXTAL)
    system_clock_36m_hxtal();
#elif defined (__SYSTEM_CLOCK_48M_PLL_HXTAL)
    system_clock_48m_hxtal();
#elif defined (__SYSTEM_CLOCK_56M_PLL_HXTAL)
    system_clock_56m_hxtal();
#elif defined (__SYSTEM_CLOCK_72M_PLL_HXTAL)
    system_clock_72m_hxtal();
#elif defined (__SYSTEM_CLOCK_96M_PLL_HXTAL)
    system_clock_96m_hxtal();
#elif defined (__SYSTEM_CLOCK_108M_PLL_HXTAL)
    system_clock_108m_hxtal();

#elif defined (__SYSTEM_CLOCK_48M_PLL_IRC8M)
    system_clock_48m_irc8m();
#elif defined (__SYSTEM_CLOCK_72M_PLL_IRC8M)
    system_clock_72m_irc8m();
#elif defined (__SYSTEM_CLOCK_108M_PLL_IRC8M)
    system_clock_108m_irc8m();
#endif /* __SYSTEM_CLOCK_HXTAL */
}

/*!
    \brief      setup the microcontroller system, initialize the system
    \param[in]  none
    \param[out] none
    \retval     none
*/
void SystemInit(void)
{
    /* reset the RCC clock configuration to the default reset state */
    /* enable IRC8M */
    RCU_CTL |= RCU_CTL_IRC8MEN;
    while(0U == (RCU_CTL & RCU_CTL_IRC8MSTB)){
    }
    if(((RCU_CFG0 & RCU_CFG0_SCSS) == RCU_SCSS_PLL)){
        RCU_MODIFY_DE_2(0x50);
    }
    /* reset SCS, AHBPSC, APB1PSC, APB2PSC, ADCPSC, CKOUT0SEL bits */
    RCU_CFG0 &= ~(RCU_CFG0_SCS | RCU_CFG0_AHBPSC | RCU_CFG0_APB1PSC | RCU_CFG0_APB2PSC |
                  RCU_CFG0_ADCPSC | RCU_CFG0_ADCPSC_2 | RCU_CFG0_CKOUT0SEL);
    _soft_delay_(200);
    /* reset HXTALEN, CKMEN, PLLEN bits */
    RCU_CTL &= ~(RCU_CTL_HXTALEN | RCU_CTL_CKMEN | RCU_CTL_PLLEN);

    /* Reset HXTALBPS bit */
    RCU_CTL &= ~(RCU_CTL_HXTALBPS);

    /* reset PLLSEL, PREDV0_LSB, PLLMF, USBFSPSC bits */
    
    RCU_CFG0 &= ~(RCU_CFG0_PLLSEL | RCU_CFG0_PREDV0_LSB | RCU_CFG0_PLLMF |
                  RCU_CFG0_USBFSPSC | RCU_CFG0_PLLMF_4);
    RCU_CFG1 = 0x00000000U;

    /* Reset HXTALEN, CKMEN, PLLEN, PLL1EN and PLL2EN bits */
    RCU_CTL &= ~(RCU_CTL_PLLEN | RCU_CTL_PLL1EN | RCU_CTL_PLL2EN | RCU_CTL_CKMEN | RCU_CTL_HXTALEN);
    /* disable all interrupts */
    RCU_INT = 0x00FF0000U;

    /* Configure the System clock source, PLL Multiplier, AHB/APBx prescalers and Flash settings */
    system_clock_config();
}

/*!
    \brief      update the SystemCoreClock with current core clock retrieved from cpu registers
    \param[in]  none
    \param[out] none
    \retval     none
*/
void SystemCoreClockUpdate(void)
{
    uint32_t scss = 0U;
    uint32_t pllsel = 0U, predv0sel = 0U, pllmf = 0U, ck_src = 0U;
    uint32_t predv0 = 0U, predv1 = 0U, pll1mf = 0U,idx = 0U,clk_exp = 0U;
    /* exponent of AHB clock divider */
    const uint8_t ahb_exp[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};

    scss = GET_BITS(RCU_CFG0, 2, 3);

    switch (scss)
    {
        /* IRC8M is selected as CK_SYS */
        case SEL_IRC8M:
            SystemCoreClock = IRC8M_VALUE;
            break;
            
        /* HXTAL is selected as CK_SYS */
        case SEL_HXTAL:
            SystemCoreClock = HXTAL_VALUE;
            break;
            
        /* PLL is selected as CK_SYS */
        case SEL_PLL:
            /* PLL clock source selection, HXTAL or IRC8M/2 */
            pllsel = (RCU_CFG0 & RCU_CFG0_PLLSEL);


            if(RCU_PLLSRC_IRC8M_DIV2 == pllsel){
                /* PLL clock source is IRC8M/2 */
                ck_src = IRC8M_VALUE / 2U;
            }else{
                /* PLL clock source is HXTAL */
                ck_src = HXTAL_VALUE;

                predv0sel = (RCU_CFG1 & RCU_CFG1_PREDV0SEL);

                /* source clock use PLL1 */
                if(RCU_PREDV0SRC_CKPLL1 == predv0sel){
                    predv1 = ((RCU_CFG1 & RCU_CFG1_PREDV1) >> 4) + 1U;
                    pll1mf = ((RCU_CFG1 & RCU_CFG1_PLL1MF) >> 8) + 2U;
                    if(17U == pll1mf){
                        pll1mf = 20U;
                    }
                    ck_src = (ck_src / predv1) * pll1mf;
                }
                predv0 = (RCU_CFG1 & RCU_CFG1_PREDV0) + 1U;
                ck_src /= predv0;
            }

            /* PLL multiplication factor */
            pllmf = GET_BITS(RCU_CFG0, 18, 21);

            if((RCU_CFG0 & RCU_CFG0_PLLMF_4)){
                pllmf |= 0x10U;
            }

            if(pllmf >= 15U){
                pllmf += 1U;
            }else{
                pllmf += 2U;
            }

            SystemCoreClock = ck_src * pllmf;

            if(15U == pllmf){
                /* PLL source clock multiply by 6.5 */
                SystemCoreClock = ck_src * 6U + ck_src / 2U;
            }

            break;

        /* IRC8M is selected as CK_SYS */
        default:
            SystemCoreClock = IRC8M_VALUE;
            break;
    }
    /* calculate AHB clock frequency */
    idx = GET_BITS(RCU_CFG0, 4, 7);
    clk_exp = ahb_exp[idx];
    SystemCoreClock >>= clk_exp;
}

#ifdef __SYSTEM_CLOCK_HXTAL
/*!
    \brief      configure the system clock to HXTAL
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp; 
    
    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;
    
    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));
    
    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }
    
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;  
    
    reg_temp = RCU_CFG0;    
    /* select HXTAL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_HXTAL;
    RCU_CFG0 = reg_temp;
    
    /* wait until HXTAL is selected as system clock */
    while(0 == (RCU_CFG0 & RCU_SCSS_HXTAL)){
    }
}

#elif defined (__SYSTEM_CLOCK_24M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 24M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_24m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 6 = 24 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL6);

    if(HXTAL_VALUE==25000000){
        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);

        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }
    
    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_36M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 36M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_36m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 9 = 36 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL9);

    if(HXTAL_VALUE==25000000){
        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);

        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }
 
    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;
    
    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_48M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 48M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_48m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 12 = 48 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL12);

    if(HXTAL_VALUE==25000000){

        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);

        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }



    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }
    
    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_56M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 56M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_56m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 14 = 56 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL14);

    if(HXTAL_VALUE==25000000){

        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);

        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }
    
    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_72M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 72M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_72m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 18 = 72 MHz */ 
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL18);


    if(HXTAL_VALUE==25000000){

        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);

        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_96M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 96M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_96m_hxtal(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    if(HXTAL_VALUE==25000000){

        /* CK_PLL = (CK_PREDIV0) * 24 = 96 MHz */
        RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
        RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL24);

        /* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
        RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV1 | RCU_CFG1_PREDV0);
        RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PLL1_MUL8 | RCU_PREDV1_DIV5 | RCU_PREDV0_DIV10);
        /* enable PLL1 */
        RCU_CTL |= RCU_CTL_PLL1EN;
        /* wait till PLL1 is ready */
        while((RCU_CTL & RCU_CTL_PLL1STB) == 0){
        }

    }else if(HXTAL_VALUE==8000000){
        /* CK_PLL = (CK_PREDIV0) * 24 = 96 MHz */
        RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
        RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL24);

		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 );
    }

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_108M_PLL_HXTAL)
/*!
    \brief      configure the system clock to 108M by PLL which selects HXTAL(MD/HD/XD:8M; CL:25M) as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/

static void system_clock_108m_hxtal(void)
{
    uint32_t timeout   = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable HXTAL */
    RCU_CTL |= RCU_CTL_HXTALEN;

    /* wait until HXTAL is stable or the startup time is longer than HXTAL_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_HXTALSTB);
    }while((0U == stab_flag) && (HXTAL_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_HXTALSTB)){
        while(1){
        }
    }

    /* HXTAL is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_PREDIV0) * 27 = 108 MHz */ 
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= (RCU_PLLSRC_HXTAL | RCU_PLL_MUL27);

    if(HXTAL_VALUE==25000000){
		/* CK_PREDIV0 = (CK_HXTAL)/5 *8 /10 = 4 MHz */
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_CKPLL1 | RCU_PREDV1_DIV5 | RCU_PLL1_MUL8 | RCU_PREDV0_DIV10);

		/* enable PLL1 */
		RCU_CTL |= RCU_CTL_PLL1EN;
		/* wait till PLL1 is ready */
		while(0U == (RCU_CTL & RCU_CTL_PLL1STB)){
		}

		/* enable PLL1 */
		RCU_CTL |= RCU_CTL_PLL2EN;
		/* wait till PLL1 is ready */
		while(0U == (RCU_CTL & RCU_CTL_PLL2STB)){
		}
    }else if(HXTAL_VALUE==8000000){
		RCU_CFG1 &= ~(RCU_CFG1_PREDV0SEL | RCU_CFG1_PREDV1 | RCU_CFG1_PLL1MF | RCU_CFG1_PREDV0);
		RCU_CFG1 |= (RCU_PREDV0SRC_HXTAL | RCU_PREDV0_DIV2 | RCU_PREDV1_DIV2 | RCU_PLL1_MUL20 | RCU_PLL2_MUL20);

		/* enable PLL1 */
		RCU_CTL |= RCU_CTL_PLL1EN;
		/* wait till PLL1 is ready */
		while(0U == (RCU_CTL & RCU_CTL_PLL1STB)){
		}

		/* enable PLL2 */
		RCU_CTL |= RCU_CTL_PLL2EN;
		/* wait till PLL1 is ready */
		while(0U == (RCU_CTL & RCU_CTL_PLL2STB)){
		}

    }
    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_48M_PLL_IRC8M)
/*!
    \brief      configure the system clock to 48M by PLL which selects IRC8M as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_48m_irc8m(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable IRC8M */
    RCU_CTL |= RCU_CTL_IRC8MEN;

    /* wait until IRC8M is stable or the startup time is longer than IRC8M_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_IRC8MSTB);
    }
    while((0U == stab_flag) && (IRC8M_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_IRC8MSTB)){
      while(1){
      }
    }

    /* IRC8M is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_IRC8M/2) * 12 = 48 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= RCU_PLL_MUL12;

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_72M_PLL_IRC8M)
/*!
    \brief      configure the system clock to 72M by PLL which selects IRC8M as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_72m_irc8m(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable IRC8M */
    RCU_CTL |= RCU_CTL_IRC8MEN;

    /* wait until IRC8M is stable or the startup time is longer than IRC8M_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_IRC8MSTB);
    }
    while((0U == stab_flag) && (IRC8M_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_IRC8MSTB)){
      while(1){
      }
    }

    /* IRC8M is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_IRC8M/2) * 18 = 72 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= RCU_PLL_MUL18;

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}

#elif defined (__SYSTEM_CLOCK_108M_PLL_IRC8M)
/*!
    \brief      configure the system clock to 108M by PLL which selects IRC8M as its clock source
    \param[in]  none
    \param[out] none
    \retval     none
*/
static void system_clock_108m_irc8m(void)
{
    uint32_t timeout = 0U;
    uint32_t stab_flag = 0U;
    __IO uint32_t reg_temp;

    /* enable IRC8M */
    RCU_CTL |= RCU_CTL_IRC8MEN;

    /* wait until IRC8M is stable or the startup time is longer than IRC8M_STARTUP_TIMEOUT */
    do{
        timeout++;
        stab_flag = (RCU_CTL & RCU_CTL_IRC8MSTB);
    }
    while((0U == stab_flag) && (IRC8M_STARTUP_TIMEOUT != timeout));

    /* if fail */
    if(0U == (RCU_CTL & RCU_CTL_IRC8MSTB)){
      while(1){
      }
    }

    /* IRC8M is stable */
    /* AHB = SYSCLK */
    RCU_CFG0 |= RCU_AHB_CKSYS_DIV1;
    /* APB2 = AHB/1 */
    RCU_CFG0 |= RCU_APB2_CKAHB_DIV1;
    /* APB1 = AHB/2 */
    RCU_CFG0 |= RCU_APB1_CKAHB_DIV2;

    /* CK_PLL = (CK_IRC8M/2) * 27 = 108 MHz */
    RCU_CFG0 &= ~(RCU_CFG0_PLLMF | RCU_CFG0_PLLMF_4);
    RCU_CFG0 |= RCU_PLL_MUL27;

    /* enable PLL */
    RCU_CTL |= RCU_CTL_PLLEN;

    /* wait until PLL is stable */
    while(0U == (RCU_CTL & RCU_CTL_PLLSTB)){
    }

    reg_temp = RCU_CFG0;
    /* select PLL as system clock */
    reg_temp &= ~RCU_CFG0_SCS;
    reg_temp |= RCU_CKSYSSRC_PLL;
    RCU_CFG0 = reg_temp;

    /* wait until PLL is selected as system clock */
    while(0U == (RCU_CFG0 & RCU_SCSS_PLL)){
    }
}
#endif

#ifdef __FIRMWARE_VERSION_DEFINE
/*!
    \brief      get firmware version
    \param[in]  none
    \param[out] none
    \retval     firmware version
*/
uint32_t gd32vf103_firmware_version_get(void)
{
    return __GD32VF103_STDPERIPH_VERSION;
}
#endif /* __FIRMWARE_VERSION_DEFINE */
