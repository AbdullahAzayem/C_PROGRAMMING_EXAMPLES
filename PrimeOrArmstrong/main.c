/*stdio file*/
#include <stdio.h>

/*data type 16 bits*/
typedef unsigned char u8;
/*16 bits*/
typedef unsigned short int u16;
/*32 bits*/
typedef unsigned long int u32;


/*States of number*/
#define PRIME 		1
#define NOT_PRIME 	2

/*State of arm_strong*/
#define ARMSTRONG 		1
#define NOT_ARMSTRONG 	2

/*Power function*/
u16 POW(u16 Copy_u16Base,u8 Copy_u8Power);


/*return true or false*/
u8 CheckPrime(u16 Copy_u16Counter);

/*prototype of function to get prime numbers interval*/
void PrintPrimeNumsInterval(u8 Copy_u8StartVal,u8 Copy_u8EndVal);

/*check arm_strong number*/
u8 CheckArmstrongNum(u16 Copy_u16Number);


/*implement main function*/
int main(void)
{
	/*Interval start*/
	u32 Local_u8Start,Local_u8End;
	
	/*Number*/
	u16 Local_u16Number = 0;
	
	/*Number state*/
	u8 Local_u8State=0;
	
	/*Save the program work*/
	while(1)
	{

		
		/*Get the number*/
		printf("Enter number: \n");
		scanf("%d", &Local_u16Number);
		
		
		/*Check armstrong*/
		Local_u8State = CheckArmstrongNum(Local_u16Number);
		
		/*Check the state of number*/
		if(Local_u8State == ARMSTRONG)
		{
			/*Number is an armstrong*/
			printf("Number %d is an armstrong number.\n",Local_u16Number);
		}
		else
		{
			/*Number is not armstrong*/
			printf("Number %d is not armstrong number. \n",Local_u16Number);
		}
		
		
		Local_u8State = CheckPrime(Local_u16Number);
				
		/*Check the state of number*/
		if(Local_u8State == PRIME)
		{
			/*Number is an armstrong*/
			printf("Number %d is prime number.\n",Local_u16Number);
		}
		else
		{
			/*Number is not armstrong*/
			printf("Number %d is not prime number. \n",Local_u16Number);
		}

	}
	
	
	/*Return 0*/
	return 0;
}



/*function to get prime numbers interval*/
void PrintPrimeNumsInterval(u8 Copy_u8StartVal,u8 Copy_u8EndVal)
{
	/*Counter */
	static u8 Local_u8Counter = 0 ;
	
	/*State*/
	u8 Local_u8StateOfNumber=0;
	
	/*Search and print prime numbers interval*/
	for(Local_u8Counter = Copy_u8StartVal; Local_u8Counter <= Copy_u8EndVal ;Local_u8Counter++)
	{
		/*return true or false*/
		Local_u8StateOfNumber = CheckPrime(Local_u8Counter);
		
		/*Check the number state*/
		if(PRIME == Local_u8StateOfNumber)
		{
			printf("%d ",Local_u8Counter);
		}
		else
		{
			/*Do nothing*/
		}
		
	}
	/*new line*/
	printf("\n\n");	
}

/*return true or false*/
u8 CheckPrime(u16 Copy_u16Counter)
{
	/*Counter */
	u8 Local_u8Counter = 0 ;
	/*State of number*/
	u8 Local_u8State = PRIME;
	/*Flag*/
	u8 Local_u8Flag=0;
	
	/*Loop on the numbers*/
	for(Local_u8Counter=2; ( (Local_u8Flag != NOT_PRIME) && (Local_u8Counter <= Copy_u16Counter/2) );Local_u8Counter++)
	{
		if(Copy_u16Counter % Local_u8Counter == 0)
		{
			Local_u8Flag = NOT_PRIME;
			Local_u8State = NOT_PRIME;
		}
		else
		{
		}
	}
	/*Return result*/
	return Local_u8State ;	
}


/*check arm_strong number*/
u8 CheckArmstrongNum(u16 Copy_u16Number)
{
	/*Temp number*/
	u16 Local_u16Temperory=Copy_u16Number;
	/*Result*/
	u16 Local_u16Result = 0;
	
	/*Number state*/
	u8 Local_u8NumberState = 1;
	
	/*number level counter*/
	u8 Local_u8NumberLevel=0;
	
	/*Counter loop*/
	u8 Local_u8LoopCounter=0;
	
	while(Copy_u16Number != 0)
	{
		/*Divide number*/
		Copy_u16Number /= 10;
		Local_u8NumberLevel++;	
	}
	
	/*Return the number value*/
	Copy_u16Number = Local_u16Temperory;

	/*Calculate the number*/
	for(Local_u8LoopCounter = Local_u8NumberLevel;Local_u8LoopCounter > 0; Local_u8LoopCounter--)
	{
		/*Process on the number*/
		Local_u16Result += POW( (Copy_u16Number%10) , Local_u8NumberLevel);
		Copy_u16Number /=10;
	}
	
	/*Return the number value*/
	Copy_u16Number = Local_u16Temperory;
	
	/*Check the state*/
	if(Copy_u16Number == Local_u16Result)
	{
		/*Set the state to be ARMSTRONG*/
		Local_u8NumberState = ARMSTRONG;
	}
	else
	{
		Local_u8NumberState = NOT_ARMSTRONG;
	}
	
	/*Number state*/
	return Local_u8NumberState;
}

/*Power function*/
u16 POW(u16 Copy_u16Base,u8 Copy_u8Power)
{
	/*Result*/
	u16 Local_u16Result = 1;
	
	while(Copy_u8Power != 0)
	{
		/*Process on number*/
		Local_u16Result *= Copy_u16Base;		
		
		/*Decrement the power*/
		Copy_u8Power--;
	}
	/*Return the result*/
	return Local_u16Result;
}