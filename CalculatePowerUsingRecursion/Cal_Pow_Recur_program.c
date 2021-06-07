/**********************************************************************************************/
/**********************************************************************************************/
/******************** Auther: Abdullah Azayem Ali Mohamed				   	 ******************/
/******************** Component: Calculate power recursivily Program file	 ******************/
/******************** Date: 16/8/2020									   	 ******************/
/**********************************************************************************************/
/**********************************************************************************************/

/*Include interface file of Calculate the power*/
#include "Cal_Pow_Recur_interface.h"

/*Cal power recursivily*/
u16 CalPowRecur(u16 Copy_u16Number,u16 Copy_u16Degree)
{
	/*Result variable*/
	u16 Local_u16Result = LOW;
	
	/*Out from condition when getting the result*/
	if( LOW != Copy_u16Degree)
	{
		/*Process of Recursion*/
		Local_u16Result = (Copy_u16Number * CalPowRecur(Copy_u16Number,Copy_u16Degree-1));
	}
	else
	{
		Local_u16Result = HIGH;
	}
	/*Return the result*/
	return Local_u16Result;
}
