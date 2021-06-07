/*include the standard input output libraray*/
#include <stdio.h>

/*Some standards types for specified purpose*/
typedef unsigned char u8; // data type of one byte
typedef unsigned long int u16; //data type of two bytes 


/*Prototype of Sum natural numbers recursivily*/
u16 SumNaturalNumsRecur(u16 Copy_u16StartNum,u16 Copy_u16EndNum);



/*implementation of main function*/
int main(void)
{
	/*Define the start and end variables*/
	u16 Local_u16StartNum = 0;
	u16 Local_u16EndNum = 0;
	
	/*Define result variable*/
	u16 Local_u16Result = 0;
	
	while(1) //repeat the project periodically
	{
		
		/*1- Ask user to enter the start and the end of the natural numbers*/
			printf("Enter the start and end number: ");
			scanf("%d %d",&Local_u16StartNum,&Local_u16EndNum);
		
		/*2- Sum numbers recursivily*/
		Local_u16Result = SumNaturalNumsRecur(Local_u16StartNum,Local_u16EndNum);
		
		/*3- Print the result of summition*/
		printf("The result equal: %d \n",Local_u16Result);
	}
	/*To make sure the process done*/
	return 0;
}



/*Prototype of Sum natural numbers recursivily*/
u16 SumNaturalNumsRecur(u16 Copy_u16StartNum,u16 Copy_u16EndNum)
{
	/*Define the local Result*/
	static u16 Local_u16Result = 0;
	
	static u8 Local_u8Flag = 0;
	
	if(1==Local_u8Flag)
	{
		Local_u16Result=0;
		Local_u8Flag=0;
		/*Call the same function*/
		SumNaturalNumsRecur(Copy_u16StartNum,Copy_u16EndNum);
	}
	else
	{
		if(Copy_u16StartNum <= Copy_u16EndNum)
		{
			/*Store the new result*/
			Local_u16Result += Copy_u16StartNum;
			/*increment the start until reach the end number*/
			Copy_u16StartNum++;
			/*Call the same function*/
			SumNaturalNumsRecur(Copy_u16StartNum,Copy_u16EndNum);
		}
		else
		{
			return 1;
		}
		Local_u8Flag = 1;
	}
	/*Return result*/
	return Local_u16Result;
}
