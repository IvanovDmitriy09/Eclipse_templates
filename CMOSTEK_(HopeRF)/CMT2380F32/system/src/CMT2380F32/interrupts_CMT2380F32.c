/*******************************************************************************
 * Include files
 ******************************************************************************/
#include "ddl.h"
#include "interrupts_CMT2380F32.h"


/**
 *******************************************************************************
 ** \brief NVIC 中断使能
 **
 ** \param [in]  u32Irq         中断号
 ** \param [in]  u8Level        中断优先级
 ** \param [in]  bEn            中断开关
 ** \retval    Ok       设置成功
 **            其他值   设置失败
 ******************************************************************************/
void EnableNvic(uint32_t u32Irq,uint8_t u8Level,boolean_t bEn)
{
    IRQn_Type enIrq = (IRQn_Type)u32Irq;

    NVIC_ClearPendingIRQ(enIrq);
    NVIC_SetPriority(enIrq, u8Level);
    if (TRUE == bEn)
    {
        NVIC_EnableIRQ(enIrq);
    }else{
        NVIC_DisableIRQ(enIrq);
    }
}

/**
 *******************************************************************************
 ** \brief NVIC hardware fault 中断实现
 **        用于单步调试功能
 **
 ** \retval
 ******************************************************************************/
void HardFault_Handler(void)
{
    volatile int a = 0;

    while( 0 == a)
    {
        ;
    }
}

/**
 *******************************************************************************
 ** \brief GPIO Port0 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void PORT0_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO Port1 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void PORT1_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO Port2 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void PORT2_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO Port3 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void PORT3_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 串口0 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void UART0_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 串口1 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void UART1_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 低功耗串口 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void LPUART_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO SPI 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void SPI_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO I2C 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void I2C_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 基础时钟0 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM0_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 基础时钟1 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM1_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 基础时钟2 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM2_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 低功耗时钟 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void LPTIM_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 高级时钟4 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM4_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 高级时钟5 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM5_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 高级时钟6 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void TIM6_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO PCA 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void PCA_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO WDT 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void WDT_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO RTC 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void RTC_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO ADC 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void ADC_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 电压比较0 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void VC0_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 电压比较1 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void VC1_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 低电压检测 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void LVD_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO RAM 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void EF_RAM_IRQHandler(void)
{

}

/**
 *******************************************************************************
 ** \brief GPIO 时钟校准 中断处理函数
 ** 
 ** \retval
 ******************************************************************************/
void CLKTRIM_IRQHandler(void)
{

}



/******************************************************************************/
/* EOF (not truncated)                                                        */
/******************************************************************************/
