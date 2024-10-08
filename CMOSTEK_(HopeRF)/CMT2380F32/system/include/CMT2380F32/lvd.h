#ifndef __LVD_H__
#define __LVD_H__

/******************************************************************************
 * Include files
 ******************************************************************************/
#include "ddl.h"
#include "interrupts_CMT2380F32.h"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 ******************************************************************************
 ** \defgroup LvdGroup Low Voltage Detector (LVD)
 **
 ******************************************************************************/
//@{

/******************************************************************************
 * Global type definitions
 ******************************************************************************/

/**
 ******************************************************************************
 ** \brief LVD输入电压源
 **
 ** \note
 ******************************************************************************/
typedef enum en_lvd_input
{
    LvdInputVCC,                ///< Vcc
    LvdInputP03,                ///< P0.3
    LvdInputP23,                ///< P2.3
    LvdInputP25,                ///< P2.5
}en_lvd_input_t;

/**
 ******************************************************************************
 ** \brief LVD监测电压选择
 **
 ** \note
 ******************************************************************************/
typedef enum en_lvd_threshold
{
    LvdTH1p8V = 0,              ///< 1.8V
    LvdTH1p9V,                  ///< 1.9V
    LvdTH2p0V,                  ///< 2.0V
    LvdTH2p1V,                  ///< 2.1V
    LvdTH2p2V,                  ///< 2.2V
    LvdTH2p3V,                  ///< 2.3V
    LvdTH2p4V,                  ///< 2.4V
    LvdTH2p5V,                  ///< 2.5V
    LvdTH2p6V,                  ///< 2.6V 默认电压
    LvdTH2p7V,                  ///< 2.7V
    LvdTH2p8V,                  ///< 2.8V
    LvdTH2p9V,                  ///< 2.9V
    LvdTH3p0V,                  ///< 3.0V
    LvdTH3p1V,                  ///< 3.1V
    LvdTH3p2V,                  ///< 3.2V
    LvdTH3p3V,                  ///< 3.3V
}en_lvd_threshold_t;

/**
 ******************************************************************************
 ** \brief LVD输出滤波时间
 **
 ** \note
 ******************************************************************************/
typedef enum en_lvd_filter_time
{
    LvdFilter30us,              ///< 30us
    LvdFilter40us,              ///< 40us
    LvdFilter50us,              ///< 50us
    LvdFilter130us,             ///< 130us
    LvdFilter480us,             ///< 480us
    LvdFilter1800us,            ///< 1.8ms
    LvdFilter7d3ms,             ///< 7.3ms
    LvdFilter29ms,              ///< 29ms
}en_lvd_filter_time_t;

/**
 ******************************************************************************
 ** \brief LVD中断触发方式
 **
 ** \note
 ******************************************************************************/
typedef enum en_lvd_irq_type
{
    LvdIrqHigh,                 ///< 高电平触发
    LvdIrqRise,                 ///< 上升沿触发
    LvdIrqFall,                 ///< 下降沿触发
}en_lvd_irq_type_t;

/**
 ******************************************************************************
 ** \brief LVD配置
 ** \note
 ******************************************************************************/
typedef struct stc_lvd_config
{
    boolean_t               bLvdReset;      ///< TRUE-重启,FALSE-中断
    en_lvd_input_t          enInput;        ///< LVD输入电压源
    en_lvd_threshold_t      enThreshold;    ///< LVD监测电压
    boolean_t               bFilter;        ///< 是否使用输出滤波
    en_lvd_filter_time_t    enFilterTime;   ///< 输出滤波时间
    en_lvd_irq_type_t       enIrqType;      ///< 中断触发方式
    func_ptr_t              pfnIrqCbk;      ///< 中断回调函数
}stc_lvd_config_t;


/******************************************************************************
 * Global definitions
 ******************************************************************************/

/******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/

/******************************************************************************
 * Global variable definitions ('extern')
 ******************************************************************************/

/******************************************************************************
 * Global function prototypes (definition in C source)
 ******************************************************************************/
//irq enable/disable
en_result_t Lvd_EnableIrq(en_lvd_irq_type_t enType);
void Lvd_DisableIrq(void);

// irq function
void Lvd_ClearIrq(void);
boolean_t Lvd_GetIrqStat(void);

//init/deinit function
void Lvd_Init(stc_lvd_config_t *pstcConfig);
void Lvd_DeInit(void);

//LVD function enable/disable
void Lvd_Enable(void);
void Lvd_Disable(void);

//@} // LvdGroup

#ifdef __cplusplus
}
#endif

#endif /* __LVD_H__ */
/******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/
