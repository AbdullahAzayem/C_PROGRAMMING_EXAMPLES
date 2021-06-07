/******************************************************************************************************/
/**                                 AUTHOR: ABDULLAH AZAYEM ALI                                      **/
/**                                 DATE: 5-12-2020                                                  **/
/**                                 TITLE: FABONACCI PROGRAM FILE                                    **/
/******************************************************************************************************/





/*Include the fabonacci interface file*/
#include "Fibonacci_int.h"

/*include the standard input output function*/
#include <stdio.h>


/*Implementation of fabonacci function*/
void FibonacciFunc(void)
{
	
	/*Define start and end*/
	u16 Local_u16End   = 0 ;
	
	/*Define the state value*/
	u16 Local_u16StateVal = 0;
	
	/*Define the next value*/
	u16 Local_u16NextVal = 1;
	
	/*Define the new value*/
	u16 Local_u16NewVal = 0;
	
	/*Ask user to enter the range*/
	printf("Enter the end of range: \n");
	scanf("%d",&Local_u16End);
		
	/*Print the state value*/
	printf("%d  ",Local_u16StateVal);
	
	while(Local_u16NewVal < Local_u16End)
	{
		/*Calculate the next value*/
		Local_u16NewVal = Local_u16StateVal + Local_u16NextVal;
		/*Print the next value*/
        printf("%d  ",Local_u16NewVal);
		
		Local_u16StateVal = Local_u16NextVal;
		Local_u16NextVal = Local_u16NewVal;
	}
}