/*include demo interface file*/
#include "Demo_Long_int.h"

/*include standard i/o library*/
#include <stdio.h>

/*Calling the main function*/
int main(void)
{	
	/*print the integer size*/
	printf("Size of INTEGER: %d Bytes.\n",GetLengthOfDataType(INTEGER));
	/*print the long inteegr*/
	printf("Size of LONG_INTEGER: %d Bytes.\n",GetLengthOfDataType(LONG_INTEGER));
	/*print the size of LONG_LONG_INTEGER*/
	printf("Size of LONG_LONG_INTEGER: %d Bytes.\n",GetLengthOfDataType(LONG_LONG_INTEGER));
	/*print the size of DOUBLE*/
	printf("Size of DOUBLE: %d Bytes.\n",GetLengthOfDataType(DOUBLE));
	/*print the size LONG_DOUBLE*/
	printf("Size of LONG_DOUBLE: %d Bytes.\n",GetLengthOfDataType(LONG_DOUBLE));
	
	/*save program*/
	while(1);
	/*return 0*/
	return 0;
}