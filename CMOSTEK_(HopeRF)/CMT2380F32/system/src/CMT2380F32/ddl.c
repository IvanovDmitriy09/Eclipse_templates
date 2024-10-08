/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "ddl.h"

/**
 ******************************************************************************
 ** \addtogroup DDL Common Functions
 ******************************************************************************/
//@{

/******************************************************************************/
/* Local pre-processor symbols/macros ('#define')                             */
/******************************************************************************/

/******************************************************************************/
/* Global variable definitions (declared in header file with 'extern')        */
/******************************************************************************/

/******************************************************************************/
/* Local type definitions ('typedef')                                         */
/******************************************************************************/

/******************************************************************************/
/* Local variable definitions ('static')                                      */
/******************************************************************************/

/******************************************************************************/
/* Local function prototypes ('static')                                       */
/******************************************************************************/

/******************************************************************************/
/* Function implementation - global ('extern') and local ('static')           */
/******************************************************************************/
#ifndef __DEBUG
#define __DEBUG
//#define __CC_ARM
#endif






uint32_t Log2(uint32_t u32Val)
{
    uint32_t u32V1 = 0;
    
    if(0u == u32Val)
    {
        return 0;
    }
    
    while(u32Val > 1u)
    {
        u32V1++;
        u32Val /=2;
    }
    
    return u32V1;
}


/**
 *******************************************************************************
 ** \brief Memory clear function for DDL_ZERO_STRUCT()
 ******************************************************************************/
void ddl_memclr(void *pu8Address, uint32_t u32Count)
{
    uint8_t *pu8Addr = (uint8_t *)pu8Address;
    
    if(NULL == pu8Addr)
    {
        return;
    }
    
    while (u32Count--)
    {
        *pu8Addr++ = 0;
    }
}

/**
 *****************************************************************************
 ** \brief Hook function, which is called in polling loops
 *****************************************************************************/
void DDL_WAIT_LOOP_HOOK(void)
{
    // Place code for triggering Watchdog counters here, if needed
}

/**
 *****************************************************************************
 ** \brief debug printf function.
 *****************************************************************************/
void Debug_UartInit(void)
{
#ifdef __DEBUG
    uint32_t u32Pclk1 =  0;
    volatile uint32_t u32ReloadVal = 0;

    // UART0_TXD/P35, 19200bps
    M0P_GPIO->P3ADS_f.P35 = 0;
    M0P_GPIO->P35_SEL_f.SEL = 3;
    M0P_GPIO->P3DIR_f.P35 = 0;

    u32Pclk1 = Clk_GetPClkFreq();
    u32ReloadVal = 65536 - u32Pclk1 * 2 / 19200 / 32;

    M0P_BT0->CR_f.CT = 0;
    M0P_BT0->CR_f.MD = 1;
    M0P_BT0->CR_f.TOG_EN = 1;
    M0P_BT0->ARR = u32ReloadVal;
    M0P_BT0->CNT = u32ReloadVal;
    M0P_BT0->CR_f.TR = 1;

    M0P_UART0->SCON_f.DBAUD = 1;
    M0P_UART0->SCON_f.SM01 = 1;
#endif
}

void Debug_Output(uint8_t u8Data)
{
    M0P_UART0->SCON_f.REN = 0;
    M0P_UART0->SBUF = u8Data;

    while (TRUE != M0P_UART0->ISR_f.TI)
    {
        ;
    }
    M0P_UART0->ICR_f.TICLR = 0;
}

//#ifdef __DEBUG
///**
// ******************************************************************************
// ** \brief  Re-target putchar function
// ******************************************************************************/
//int fputc(int ch, FILE *f)
//{

//    if (((uint8_t)ch) == '\n')
//    {
//        Debug_Output('\r');
//    }
//    Debug_Output(ch);

//    return ch;
//}
//#endif



extern void Debug_UartInit(void);
extern void Debug_Output(uint8_t u8Data);

#if defined (__CC_ARM)          //KEIL
#pragma import(__use_no_semihosting)
void _sys_exit(int x)
{
    x = x;
}
struct __FILE
{
    int handle;
    /* Whatever you require here. If the only file you are using is */
    /* standard output using printf() for debugging, no file handling */
/* is required. */
};
/* FILE is typedef?d in stdio.h. */
FILE __stdout;

#endif

#ifdef __DEBUG
/**
 ******************************************************************************
 ** \brief  Re-target putchar function
 ******************************************************************************/
int fputc(int ch, FILE *f)
{

    if (((uint8_t)ch) == '\n')
    {
        Debug_Output('\r');
    }
    Debug_Output(ch);

    return ch;
}
#endif

void _ttywrch(int c)
{
}


int __backspace(void)
{
    return 0;
}



/**
 * \brief   delay1ms
 *          delay approximately 1ms.
 * \param   [in]  u32Cnt
 * \retval  void
 */
void delay1ms(uint32_t u32Cnt)
{
    uint32_t u32end;
    while(u32Cnt-- > 0)
    {
        SysTick->VAL = 0;

        u32end = 0x1000000 - SystemCoreClock/1000;
        while(SysTick->VAL > u32end)
        {
            ;
        }
    }
}

/**
 * \brief   delay100us
 *          delay approximately 100us.
 * \param   [in]  u32Cnt
 * \retval  void
 */
void delay100us(uint32_t u32Cnt)
{
    uint32_t u32end;
    while(u32Cnt-- > 0)
    {
        SysTick->VAL = 0;

        u32end = 0x1000000 - SystemCoreClock/10000;
        while(SysTick->VAL > u32end)
        {
            ;
        }
    }
}

//@} // DDL Functions

/******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/

