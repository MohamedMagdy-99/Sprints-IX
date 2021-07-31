/*****************************************************************************
* Module: Utility Module
* File Name: Utlity.c
* Description: Source file for Utility Module
* Author: Mohamed Magdy
* Date: 23-July-2021
******************************************************************************/

/*- INCLUDES
----------------------------------------------*/
#include "Utility.h"

#define A		65
#define B		66	
#define C		67
#define D		68
#define E		69
#define F		70

/*- LOCAL FUNCTIONS IMPLEMENTATION
------------------------*/ 

uint16_t String_3ByteHexAddress_ToDecimal(uint8_t* u8_tempAddress)
{
	sint8_t u8_loopCounter = Initial_Value;
	
	for(u8_loopCounter = 2; u8_loopCounter >= 0; u8_loopCounter--)
	{
		if(u8_tempAddress[u8_loopCounter] >= 65 && u8_tempAddress[u8_loopCounter] <= 70)
		{
			switch(u8_tempAddress[u8_loopCounter])
			{
				case(A):
				{
					u8_tempAddress[u8_loopCounter] = 10;
					break;
				}
				case(B):
				{
					u8_tempAddress[u8_loopCounter] = 11;
					break;
				}
				case(C):
				{
					u8_tempAddress[u8_loopCounter] = 12;
					break;
				}
				case(D):
				{
					u8_tempAddress[u8_loopCounter] = 13;
					break;
				}
				case(E):
				{
					u8_tempAddress[u8_loopCounter] = 14;
					break;
				}
				case(F):
				{
					u8_tempAddress[u8_loopCounter] = 15;
					break;
				}
				default: break;
			}
		}
		else
		{
			u8_tempAddress[u8_loopCounter] -= 48;
		}
	}

	return ((u8_tempAddress[2]*1) + (u8_tempAddress[1]*16) + ( u8_tempAddress[0]*256));
}



void integerToString(uint16_t u16_Num, uint8_t *pu8_String, uint8_t u8_base)
{
	if(u8_base == DEC)
	{
		uint16_t i=Initial_Value, n=Initial_Value;
		
		n=u16_Num;
		
		for(i=Initial_Value;;i++)
		{
			n/=10;
			if(n==Initial_Value) break;
		}
		i++;
		pu8_String[i] = '\0';
		i--;
		while (u16_Num)
		{
			pu8_String[i--] = (u16_Num % 10) + '0';
			u16_Num /= 10;
		}
	}
	else if(u8_base == BIN)
	{

	}
	else if(u8_base == HEX)
	{

	}
}



uint32_t nPowerM(uint32_t n, uint32_t m)
{
	uint64_t result = 1;
	while(m != 0)
	{
		result  *= n;
		--m;
	}

	return result;
}



void stringToInteger(uint8_t* au8_string, uint32_t* u32_integer)
{
	uint32_t u32_loopCounter = Initial_Value;
	*u32_integer = Initial_Value;
	while(au8_string[u32_loopCounter]!= '\0')
	{
		u32_loopCounter++;
	}
	uint16_t numberOfchars = u32_loopCounter;
	uint16_t u16_power = numberOfchars;

	for(u32_loopCounter = 0; u32_loopCounter < numberOfchars; u32_loopCounter++)
	{
		*u32_integer += (au8_string[u32_loopCounter] - 48)* nPowerM(10,u16_power-1);
		--u16_power;

	}
}



uint8_t stringCmp(uint8_t * str1, uint8_t * str2)
{
	uint8_t u8_counter = Initial_Value;
	uint8_t u8_isEqual = TRUE;

	while(str1[u8_counter] != END_OF_STRING)
	{
		if(str1[u8_counter] != str2[u8_counter])
		{
			u8_isEqual = FALSE;
			u8_counter++;
			break;
		}
		u8_counter++;
	}
// 	if( str2[u8_counter] != END_OF_STRING )
// 	{
// 		u8_isEqual = FALSE;
// 	}
	return u8_isEqual;
}



void separateInteger(uint8_t* pau8_floatString, uint8_t* pau8_integerString, uint16_t u16_lengthToStop)
{
	uint16_t u16_loopCounter = Initial_Value;
	for(u16_loopCounter = Initial_Value; u16_loopCounter < u16_lengthToStop; u16_loopCounter++)
	{
		pau8_integerString[u16_loopCounter] = pau8_floatString[u16_loopCounter];
	}
	pau8_integerString[u16_lengthToStop] = END_OF_STRING;
}


void separateDecimal(uint8_t* pau8_floatString, uint8_t* pau8_decimalString, uint16_t u16_lengthToStart,  uint16_t u16_floatArraySize)
{
	uint16_t u16_loopCounter = Initial_Value;
	uint8_t u8_decimalLength = u16_floatArraySize-u16_lengthToStart;
	
	for(u16_loopCounter = Initial_Value; u16_loopCounter < u8_decimalLength; u16_loopCounter++)
	{
		pau8_decimalString[u16_loopCounter] = pau8_floatString[u16_lengthToStart-1];
		u16_lengthToStart++;
	}
	pau8_decimalString[u8_decimalLength] = END_OF_STRING;
}