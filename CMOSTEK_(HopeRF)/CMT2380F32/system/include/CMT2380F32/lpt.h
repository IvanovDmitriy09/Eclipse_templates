#ifndef __LPT_H__
#define __LPT_H__

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
 *******************************************************************************
 ** \defgroup LptGroup Low Power Timer (LPT)
 **
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
 ** \brief GATE 极性控制数据类型重定义 (GATE_P)
 *****************************************************************************/
typedef enum en_lpt_gatep
{
    LptPositive = 0u,            ///< 高电平有效
    LptOpposite = 1u,            ///< 低电平有效
}en_lpt_gatep_t;

/**
 ******************************************************************************
 ** \brief 定时器门控数据类型重定义 (GATE)
 *****************************************************************************/
typedef enum en_lpt_gate
{
    LptGateDisable = 0u,            ///< 无门控
    LptGateEnable  = 1u,            ///< 门控使能
}en_lpt_gate_t;

/**
 ******************************************************************************
 ** \brief Lptimer 时钟选择数据类型重定义 (TCK_SEL)
 *****************************************************************************/
typedef enum en_lpt_clksel
{
    LptPCLK   = 0u,           ///< PCLK
    LptXIL32K = 2u,           ///< XIL32K
    LptIRC32K = 3u,           ///< IRC32K
}en_lpt_clksel_t;

/**
 ******************************************************************************
 ** \brief 翻转输出使能数据类型重定义 (TOG_EN)
 *****************************************************************************/
typedef enum en_lpt_toggle
{
    LptTogDisable = 0u,            ///< 翻转输出禁止
    LptTogEnable  = 1u,            ///< 翻转输出使能
}en_lpt_toggle_t;

/**
 ******************************************************************************
 ** \brief 计数/定时器功能选择数据类型重定义 (CT)
 *****************************************************************************/
typedef enum en_lpt_function
{
    LptTimer   = 0u,            ///< 定时器功能
    LptCounter = 1u,            ///< 计数器功能
}en_lpt_function_t;


/**
 ******************************************************************************
 ** \brief 定时器工作模式数据类型重定义 (MD)
 *****************************************************************************/
typedef enum en_lpt_mode
{
    LptMode1  = 0u,         ///< 16位计数器/定时器
    LptMode2  = 1u,         ///< 自动重装载16位计数器/定时器
}en_lpt_mode_t;

/**
 ******************************************************************************
 ** \brief 定时器运行控制数据类型重定义 (TR)
 *****************************************************************************/
typedef enum en_lpt_start
{
    LptTRDisable = 0u,            ///< 停止
    LptTREnable  = 1u,            ///< 运行
}en_lpt_start_t;

/**
 ******************************************************************************
 ** \brief Lptimer 配置结构体定义 
 *****************************************************************************/
typedef struct stc_lpt_config
{
    en_lpt_gatep_t    enGateP;      ///< 门控极性控制
    en_lpt_gate_t     enGate;       ///< 门控使能
    en_lpt_clksel_t   enTckSel;     ///< 时钟选择
    en_lpt_toggle_t   enTog;        ///< 翻转输出使能
    en_lpt_function_t enCT;         ///< 定时/计数模式选择
    en_lpt_mode_t     enMD;         ///< 工作模式选择
    
    func_ptr_t pfnLpTimCb;          ///< LpTimer中断服务回调函数[void function(void)]
}stc_lpt_config_t;


/******************************************************************************
 * Global variable declarations ('extern', definition in C source)
 *****************************************************************************/

/******************************************************************************
 * Global function prototypes (definition in C source)
 *****************************************************************************/
//中断相关函数 
//中断标志获取
boolean_t Lpt_GetIntFlag(void);
//中断标志清除
en_result_t Lpt_ClearIntFlag(void);
//中断使能/禁止
en_result_t Lpt_EnableIrq (void);
en_result_t Lpt_DisableIrq(void);

//初始化及相关功能操作
//Lptimer配置及初始化
en_result_t Lpt_Init(stc_lpt_config_t* pstcConfig);
//Lptimer 启动/停止
en_result_t Lpt_Run(void);
en_result_t Lpt_Stop(void);
//重载值设置
en_result_t Lpt_ARRSet(uint16_t u16Data);
//计数值获取
uint16_t Lpt_Cnt16Get(void);

//@} // LptGroup

#ifdef __cplusplus
#endif


#endif /* __LPT_H__ */
/******************************************************************************
 * EOF (not truncated)
 *****************************************************************************/


