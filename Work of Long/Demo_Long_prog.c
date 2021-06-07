/*include the interface file of demo long*/
#include "Demo_Long_int.h"

/*include stdio file*/
#include <stdio.h>

/*Function to demonstrate the work of some datatypes*/
u16 GetLengthOfDataType(u16 Copy_u16DataType)
{
	u16 Local_u16DataType = 0;
	
	switch(Copy_u16DataType)
	{
		case INTEGER:
			/*integer data type*/
			Local_u16DataType = sizeof(int);
		break;
		case LONG_INTEGER:
			/*long integer data type*/
			Local_u16DataType = sizeof(long int);
		break;
		case LONG_LONG_INTEGER:
			/*long long integer data type*/
			Local_u16DataType = sizeof(long long int);
		break;
		case DOUBLE:
			/*double data type*/
			Local_u16DataType = sizeof(double);
		break;
		case LONG_DOUBLE:
			/*integer data type*/
			Local_u16DataType = sizeof(long double);
		break;
		default:
			/*Not catogorized data type*/
			printf("Not categorized data type. \n");
		break;
	}
	
	/*Return the length*/
	return Local_u16DataType;
}
