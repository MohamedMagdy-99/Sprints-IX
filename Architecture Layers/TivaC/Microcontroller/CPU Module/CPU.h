/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <CPU.h>
 *       Module:  CPU
 *
 *  Description:  Header File For CPU Module     
 *  
 *********************************************************************************************************************/
#ifndef CPU_H
#define CPU_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "TM4C123GH6PM.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef uint8 CPU_State_t;

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/******************************************************************************
* \Syntax          : Std_ReturnType Cpu_EnterNonPrivilege(void)                                    
* \Description     : Makes Cpu Enter Privilege Mode.                                                                                            
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : E_OK or E_NOT_OK
*******************************************************************************/
Std_ReturnType Cpu_EnterNonPrivilege(void);

/******************************************************************************
* \Syntax          : Std_ReturnType Cpu_EnterPrivilege(void)                                    
* \Description     : Makes Cpu Enter NonPrivilege Mode.                                                                                                      
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : E_OK or E_NOT_OK
*******************************************************************************/
Std_ReturnType Cpu_EnterPrivilege(void);



#endif  /* CPU_H */

/**********************************************************************************************************************
 *  END OF FILE: CPU.h
 *********************************************************************************************************************/
