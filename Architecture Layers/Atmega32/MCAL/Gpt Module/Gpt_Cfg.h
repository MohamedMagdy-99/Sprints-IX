/*****************************************************************************
* Module: Gpt Module
* File Name: Gpt_Cfg.h
* Description: Header file for GPT Module
* Author: Mohamed Magdy
* Date: 14-July-2021
******************************************************************************/


#ifndef GPT_LCFG_H_
#define GPT_LCFG_H_

/* CONSTANTS */

/* user set the number of pins used in the project */

#define GPT_USED_CHANNELS		1
#define SYS_CLOCK_FREQUENCY		8000000

#define PRESCALER_1     1
#define PRESCALER_8     8
#define PRESCALER_32    32
#define PRESCALER_64    64
#define PRESCALER_128   128
#define PRESCALER_256   256
#define PRESCALER_1024	1024

#define NORMAL_MODE   0

/* timer channels to be used in function calls */
#define TIMER_CHANNEL_0_ID	0




#endif /* GPT_LCFG_H_ */