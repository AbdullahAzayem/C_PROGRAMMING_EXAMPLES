/*Include the header file of check even or odd function*/
#include "CheckEvenOrOdd.h"

/*Include the standard IO library*/
#include <stdio.h>


/*Implementation of function to check even or odd*/
u8 CK_u8Even_OddStatus(void)
{
	/*Define local error status*/
	u8 Local_u8ErrorStatus = OK;
	
	/*Define variable to store number got from user*/
	u16 Copy_u16Number = 0;
	
		/*Ask user to enter number*/
		printf("Enter number to check. \n");
		scanf("%d",&Copy_u16Number);
		
		/*Check the range of the number*/
		if(Copy_u16Number >= 0)
		{
			/*Check the status of the number*/
			if(Copy_u16Number %2 == 0)
			{
				/*Even*/
				printf("Even number. \n");
			}
			else 
			{
				/*Odd*/
				printf("Odd number. \n");
			}
		}
		else
		{
			/*Set error status*/
			Local_u8ErrorStatus = NOK;
		}
		return Local_u8ErrorStatus;
}

