/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <SysTick_Cfg.h>
 *       Module:  SysTick
 *
 *  Description:  Header File For Configurations Of SysTick Timer Module     
 *  
 *********************************************************************************************************************/
#ifndef SYSTICK_CFG_H
#define SYSTICK_CFG_H
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* These are SysTick Timer clock options to be chosen from */
#define SYSTICK_PIOSC_DIV4              (0x00U)
#define SYSTIC_SYS_CLK                  (0x01U)

/************************************************************************/
/* This macro will be filled with the clock source option */
#define SYSTICK_CLK_SRC                 SYSTIC_SYS_CLK
/************************************************************************/ 


#endif  /* SYSTICK_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: SysTick_Cfg.h
 *********************************************************************************************************************/