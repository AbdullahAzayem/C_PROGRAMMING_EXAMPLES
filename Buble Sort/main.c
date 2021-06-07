/*include standard i/o library*/
#include <stdio.h>

/*include buble sort files*/
#include "BubleSort.h"

/*define main function*/
int main(void)
{
	/*Error state*/
	u8 Local_u8ErrorState = OK;
	
	/*Define Arr storage*/
	u32 Local_u32Array[10] = {6,9,7,8,4,5,3,2,1,0};
	
	/*Loop Counter*/
	u8 Local_u8LoopCounter=0;
	
	/*Sort the array*/
	Local_u8ErrorState = BubleSort(Local_u32Array, (sizeof(Local_u32Array)/sizeof(Local_u32Array[0])));
	

	/*check error state*/
	if(NULL_POINTER != Local_u8ErrorState)
	{
		/*print sorted array*/
		for(Local_u8LoopCounter=0;Local_u8LoopCounter < (sizeof(Local_u32Array)/sizeof(Local_u32Array[0]));Local_u8LoopCounter++ )
		{
			printf("%d ",Local_u32Array[Local_u8LoopCounter]);
		}
		/*new line*/
		printf("\n\n");
	}
	else
	{
		/*Set null pointer to check*/
		printf("Null pointer error. \n");
	}

	return 0;
}