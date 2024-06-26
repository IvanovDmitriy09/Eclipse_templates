/********************************** (C) COPYRIGHT  *******************************
 * File Name          : ch32f10x_dbgmcu.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2019/10/15
 * Description        : This file provides all the DBGMCU firmware functions.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/
#include "ch32f10x_dbgmcu.h"

#define IDCODE_DEVID_MASK    ((uint32_t)0x00000FFF)

/*********************************************************************
 * @fn      DBGMCU_GetREVID
 *
 * @brief   Returns the device identifier.
 *
 * @return Revision identifier.
 */
uint32_t DBGMCU_GetREVID( void )
{
    return( DBGMCU->IDCODE >> 16 );
}

/*********************************************************************
 * @fn      DBGMCU_GetDEVID
 *
 * @brief   Returns the device identifier.
 *
 * @return Device identifier.
 */
uint32_t DBGMCU_GetDEVID( void )
{
    return( DBGMCU->IDCODE & IDCODE_DEVID_MASK );
}

/*********************************************************************
 * @fn      DBGMCU_Config
 *
 * @brief   Configures the specified peripheral and low power mode behavior
 *        when the MCU under Debug mode.
 *
 * @param   DBGMCU_Periph - specifies the peripheral and low power mode.
 *          DBGMCU_SLEEP -  Keep debugger connection during SLEEP mode
 *          DBGMCU_STOP - Keep debugger connection during STOP mode
 *          DBGMCU_STANDBY -  Keep debugger connection during STANDBY mode
 *          DBGMCU_IWDG_STOP - Debug IWDG stopped when Core is halted
 *          DBGMCU_WWDG_STOP -  Debug WWDG stopped when Core is halted
 *          DBGMCU_TIM1_STOP - TIM1 counter stopped when Core is halted
 *          DBGMCU_TIM2_STOP - TIM2 counter stopped when Core is halted
 *          DBGMCU_TIM3_STOP - TIM3 counter stopped when Core is halted
 *          DBGMCU_TIM4_STOP - TIM4 counter stopped when Core is halted
 *          DBGMCU_CAN1_STOP -Debug CAN2 stopped when Core is halted
 *          DBGMCU_I2C1_SMBUS_TIMEOUT - I2C1 SMBUS timeout mode stopped when Core is halted
 *          DBGMCU_I2C2_SMBUS_TIMEOUT - I2C2 SMBUS timeout mode stopped when Core is halted
 *          DBGMCU_TIM5_STOP - TIM5 counter stopped when Core is halted
 *          DBGMCU_TIM6_STOP - TIM6 counter stopped when Core is halted
 *          DBGMCU_TIM7_STOP - TIM7 counter stopped when Core is halted
 *          DBGMCU_TIM8_STOP - TIM8 counter stopped when Core is halted
 *          DBGMCU_CAN2_STOP - Debug CAN2 stopped when Core is halted
 *          DBGMCU_TIM15_STOP - TIM15 counter stopped when Core is halted
 *          DBGMCU_TIM16_STOP - TIM16 counter stopped when Core is halted
 *          DBGMCU_TIM17_STOP - TIM17 counter stopped when Core is halted
 *          DBGMCU_TIM9_STOP - TIM9 counter stopped when Core is halted
 *          DBGMCU_TIM10_STOP - TIM10 counter stopped when Core is halted
 *          DBGMCU_TIM11_STOP - TIM11 counter stopped when Core is halted
 *          DBGMCU_TIM12_STOP - TIM12 counter stopped when Core is halted
 *          DBGMCU_TIM13_STOP -  TIM13 counter stopped when Core is halted
 *          DBGMCU_TIM14_STOP - TIM14 counter stopped when Core is halted
 *          NewState - ENABLE or DISABLE.
 *
 * @return  none
 */
void DBGMCU_Config( uint32_t DBGMCU_Periph, FunctionalState NewState )
{
    if( NewState != DISABLE )
    {
        DBGMCU->CFGR |= DBGMCU_Periph;
    }
    else
    {
        DBGMCU->CFGR &= ~DBGMCU_Periph;
    }
}
/*********************************************************************
 * @fn      DBGMCU_GetCHIPID
 *
 * @brief   Returns the CHIP identifier.
 *
 * @return  Device identifier.
 *          ChipID List-
 *          CH32F103C8T6-0x20004102
 *          CH32F103R8T6-0x2000410F
 *
 */
uint32_t DBGMCU_GetCHIPID( void )
{
    return( *( uint32_t * )0x1FFFF884 );
}






