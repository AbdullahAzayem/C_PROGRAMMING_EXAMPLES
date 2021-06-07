/*********************************************************************************************************/
/******                                 AUTHOR: ABDULLAH AZAYEM ALI 								 *****/
/******									DATE:4-12-2020											     *****/
/******									TITLE: 	MAIN FILE                   						 *****/
/*********************************************************************************************************/

/*include the check header file*/
#include "CheckEvenOrOdd.h"
/*include IO lib*/
#include <stdio.h>



int main(void)
{
	/*Define error status*/
	u8 Local_u8ErrorStatus= OK;
	/*Define flag*/
	u8 Local_u8Flag = 'Y';
	
	while(Local_u8Flag == 'Y')
	{
		Local_u8ErrorStatus = CK_u8Even_OddStatus();
		
		if(NOK == Local_u8ErrorStatus)
		{
			/*Wrong enterence*/
			printf("wrong entrance, please try again. \n");
		}
		else
		{
			printf("Do you want to try again: Y or N \n");
			fflush(stdin);
			scanf("%c",&Local_u8Flag);	
		}		
	}
		return 0;
}