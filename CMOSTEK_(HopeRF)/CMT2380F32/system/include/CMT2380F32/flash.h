#ifndef __FLASH_H__
#define __FLASH_H__

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "ddl.h"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 ******************************************************************************
 ** \defgroup FlashGroup Flash Controller (Flash)
 **
 **
 ******************************************************************************/
//@{

/******************************************************************************
 * Global type definitions
 ******************************************************************************/
/**
 ******************************************************************************
  ** \brief Flash中断类型重定义
 *****************************************************************************/
typedef enum en_flash_int_type
{
    flash_int0 = 0u,        ///<擦写保护报警中断
    flash_int1 = 1u,        ///<擦写PC地址报警中断
} en_flash_int_type_t;
  
  
/**
 ******************************************************************************
 ** \brief Redefinition of FLASH register structure 
 ******************************************************************************/


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
//中断相关函数 
//中断标志获取
boolean_t Flash_GetIntFlag(en_flash_int_type_t enFlashIntType);
//中断标志清除
en_result_t Flash_ClearIntFlag(en_flash_int_type_t enFlashIntType);
//中断使能/禁止
en_result_t Flash_EnableIrq(en_flash_int_type_t enFlashIntType);
en_result_t Flash_DisableIrq(en_flash_int_type_t enFlashIntType);

/* Flash 初始化配置 */
en_result_t Flash_Init(func_ptr_t pfnFlashCb, uint8_t u8FreqCfg);

/* Flash 字节/半字/字写 */
en_result_t Flash_WriteByte(uint32_t u32Addr, uint8_t u8Data);
en_result_t Flash_WriteHalfWord(uint32_t u32Addr, uint16_t u16Data);
en_result_t Flash_WriteWord(uint32_t u32Addr, uint32_t u32Data);

/* Flash 页/全片擦除 */
en_result_t Flash_SectorErase(uint32_t u32SectorAddr);
en_result_t Flash_ChipErase(void);



//@} // FlashGroup

#ifdef __cplusplus
}
#endif

#endif /* __FLASH_H__ */
/******************************************************************************/
/* EOF (not truncated)                                                        */
/******************************************************************************/
