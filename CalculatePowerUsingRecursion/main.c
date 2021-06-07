/**********************************************************************************************/
/**********************************************************************************************/
/******************** Auther: Abdullah Azayem Ali Mohamed				   	 ******************/
/******************** Component: Calculate power recursivily main file	     ******************/
/******************** Date: 16/8/2020									   	 ******************/
/**********************************************************************************************/
/**********************************************************************************************/

/*include standard input output function*/
#include <stdio.h>

/*include Calculate power interface file*/
#include "Cal_Pow_Recur_interface.h"

/*calling the main function*/
int main(void)
{
	/*tester*/
	u16 Local_u16Num = 0;
	u16 Local_u16OrderPower=0;
	u16 Local_u16Res;

	while(1)
	{
		/*Enter base*/
		printf("Enter base: ");
		scanf("%d",&Local_u16Num);
	

		/*Enter number*/
		printf("Enter power: ");
		scanf("%d",&Local_u16OrderPower);

		
		/*Call the function*/
		Local_u16Res = CalPowRecur(Local_u16Num,Local_u16OrderPower);		
		printf("Result: %d\n",Local_u16Res);
		/*new line*/
		printf("\n\n");
	}
	/*return 0*/
	return 0;
}