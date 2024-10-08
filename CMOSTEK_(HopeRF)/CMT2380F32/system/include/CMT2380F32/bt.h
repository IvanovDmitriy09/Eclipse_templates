#ifndef __BT_H__
#define __BT_H__

/*****************************************************************************
 * Include files
 *****************************************************************************/
#include "ddl.h"
#include "interrupts_CMT2380F32.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 ******************************************************************************
 ** \defgroup BtGroup Base Timer (BT)
  **
 ******************************************************************************/
//@{
    
/******************************************************************************/
/* Global pre-processor symbols/macros ('#define')                            */
/******************************************************************************/

/******************************************************************************
 * Global type definitions
 ******************************************************************************/

/**
 ******************************************************************************
 ** \brief 定时器选择数据类型重定义
 *****************************************************************************/
typedef enum en_bt_unit
{
    TIM0    = 0u,           ///< Timer 0
    TIM1    = 1u,           ///< Timer 1
    TIM2    = 2u,           ///< Timer 2
}en_bt_unit_t;

/**
 ******************************************************************************
 ** \brief 极性控制数据类型重定义 (GATE_P)
 *****************************************************************************/
typedef enum en_bt_gatep
{
    BtPositive = 0u,            ///< 高电平有效
    BtOpposite = 1u,            ///< 低电平有效
}en_bt_gatep_t;

/**
 ******************************************************************************
 ** \brief 定时器门控数据类型重定义 (GATE)
 *****************************************************************************/
typedef enum en_bt_gate
{
    BtGateDisable = 0u,            ///< 无门控
    BtGateEnable  = 1u,            ///< 门控使能
}en_bt_gate_t;

/**
 ******************************************************************************
 ** \brief TIM 预除频选择 (PRS)
 *****************************************************************************/
typedef enum en_bt_timclkdiv
{
    BtPCLKDiv1   = 0u,           ///< Div 1
    BtPCLKDiv2   = 1u,           ///< Div 2
    BtPCLKDiv4   = 2u,           ///< Div 4
    BtPCLKDiv8   = 3u,           ///< Div 8
    BtPCLKDiv16  = 4u,           ///< Div 16
    BtPCLKDiv32  = 5u,           ///< Div 32
    BtPCLKDiv64  = 6u,           ///< Div 64
    BtPCLKDiv256 = 7u,           ///< Div 256
}en_bt_timclkdiv_t;

/**
 ******************************************************************************
 ** \brief 翻转输出使能数据类型重定义 (TOG_EN)
 *****************************************************************************/
typedef enum en_bt_toggle
{
    BtTogDisable = 0u,            ///< 翻转输出禁止
    BtTogEnable  = 1u,            ///< 翻转输出使能
}en_bt_toggle_t;

/**
 ******************************************************************************
 ** \brief 计数/定时器功能选择数据类型重定义 (CT)
 *****************************************************************************/
typedef enum en_bt_function
{
    BtTimer   = 0u,            ///< 定时器功能
    BtCounter = 1u,            ///< 计数器功能
}en_bt_function_t;


/**
 ******************************************************************************
 ** \brief 定时器工作模式数据类型重定义 (MD)
 *****************************************************************************/
typedef enum en_bt_mode
{
    BtMode1  = 0u,         ///< 32位计数器/定时器
    BtMode2  = 1u,         ///< 自动重装载16位计数器/定时器
}en_bt_mode_t;

/**
 ******************************************************************************
 ** \brief 定时器运行控制数据类型重定义 (TR)
 *****************************************************************************/
typedef enum en_bt_start
{
    BtTRDisable = 0u,            ///< 停止
    BtTREnable  = 1u,            ///< 运行
}en_bt_start_t;

/**
 ******************************************************************************
 ** \brief Timer 配置结构体定义 
 *****************************************************************************/
typedef struct stc_bt_config
{
    en_bt_gatep_t     enGateP;          ///< 门控极性控制
    en_bt_gate_t      enGate;           ///< 门控使能
    en_bt_timclkdiv_t enPRS;            ///< 预除频配置
    en_bt_toggle_t    enTog;            ///< 反转输出使能
    en_bt_function_t  enCT;             ///< 定时/计数功能选择
    en_bt_mode_t      enMD;             ///< 计数模式配置
    
    func_ptr_t        pfnTim0Cb;        ///< Timer0中断服务回调函数[void function(void)]
    func_ptr_t        pfnTim1Cb;        ///< Timer1中断服务回调函数[void function(void)]
    func_ptr_t        pfnTim2Cb;        ///< Timer2中断服务回调函数[void function(void)]
}stc_bt_config_t;


/******************************************************************************
 * Global variable declarations ('extern', definition in C source)
 *****************************************************************************/

/******************************************************************************
 * Global function prototypes (definition in C source)
 *****************************************************************************/
//中断相关函数 
//中断标志获取
boolean_t Bt_GetIntFlag(en_bt_unit_t enUnit);
//中断标志清除
en_result_t Bt_ClearIntFlag(en_bt_unit_t enUnit);
//中断使能/禁止
en_result_t Bt_EnableIrq (en_bt_unit_t enUnit);
en_result_t Bt_DisableIrq(en_bt_unit_t enUnit);

//初始化及相关功能操作
//timer配置及初始化
en_result_t Bt_Init(en_bt_unit_t enUnit, stc_bt_config_t* pstcConfig);
//Lptimer 启动/停止
en_result_t Bt_Run(en_bt_unit_t enUnit);
en_result_t Bt_Stop(en_bt_unit_t enUnit);
//重载值设置
en_result_t Bt_ARRSet(en_bt_unit_t enUnit, uint16_t u16Data);
//16位计数值设置/获取
en_result_t Bt_Cnt16Set(en_bt_unit_t enUnit, uint16_t u16Data);
uint16_t Bt_Cnt16Get(en_bt_unit_t enUnit);
//32位计数值设置/获取
en_result_t Bt_Cnt32Set(en_bt_unit_t enUnit, uint32_t u32Data);
uint32_t Bt_Cnt32Get(en_bt_unit_t enUnit); 

//@} // BtGroup

#ifdef __cplusplus
#endif


#endif /* __BT_H__ */
/******************************************************************************
 * EOF (not truncated)
 *****************************************************************************/


