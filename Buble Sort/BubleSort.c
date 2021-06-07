/*include buble sort interface file*/
#include "BubleSort.h"

/*sort array*/
u8 BubleSort(u32* Copy_pu32Arr,u8 Copy_u8ElementsNo)
{
	/*Error state*/
	u8 Local_u8ErrorState = OK;
	/*define two counter to sort array*/
	u8 Local_u8Counter1 = 0;
	u8 Local_u8Counter2 = 0;
		
	/*Array elements*/
	u8 Local_u8ArrayElement = 0;
	
	/*Check null pointer*/
	if(NULL != Copy_pu32Arr)
	{
		/*process on elements*/
		for(Local_u8Counter1 = 0;Local_u8Counter1 < (Copy_u8ElementsNo-1);Local_u8Counter1++)
		{
			for(Local_u8Counter2=0;Local_u8Counter2 < (Copy_u8ElementsNo - Local_u8Counter1-1);Local_u8Counter2++)
			{
				if(Copy_pu32Arr[Local_u8Counter2] < Copy_pu32Arr[Local_u8Counter2+1])
				{
					
				}
				else
				{
					Swap(&Copy_pu32Arr[Local_u8Counter2],&Copy_pu32Arr[Local_u8Counter2+1]);
				}
			}
		}
	}
	else
	{
		/*Set null pointer error state*/
		Local_u8ErrorState = NULL_POINTER;
	}
	
	/*return error state*/
	return Local_u8ErrorState;
}

/*implementation of swap function*/		
void Swap(u32* Copy_pu32Element1,u32* Copy_pu32Element2)
{
	/*Store Element1 --> temperory variable*/
	u32 Local_u32TempVariable = (*Copy_pu32Element1);
	/*Swap elment2 value --> element1 location*/
	(*Copy_pu32Element1) = (*Copy_pu32Element2);
	/*Swap Element1 value --> element2 Localtion*/
	(*Copy_pu32Element2) = Local_u32TempVariable;
}