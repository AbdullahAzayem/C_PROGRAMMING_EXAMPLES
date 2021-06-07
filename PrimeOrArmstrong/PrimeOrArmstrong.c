/*Define Low*/
#define LOW 									0
#define HIGH 									1


/*Define number states*/
#define PRIME 					1
#define NOT_PRIME 				2

#define ARMSTRONG 				3
#define NOT_ARMSTRONG 			4

#define PRIME_AND_ARMSTRONG 	5


/*Error in inputs*/
#define INPUT_ERROR 			6


/*include the standard libraray input output*/
#include <stdio.h>

/*standard type of data*/
typedef long int u32;
typedef unsigned char u8;

/*prototype of function to check prime or armstrong number*/
u8 CheckPrimeOrArmstrongNum(u32 Copy_u32Number);

/*prototype of check prime number function */
u8 CheckPrime(u32 Copy_u32Number);

/*prototype of Check armsrong function*/
u8 CheckArmstrong(u32 Copy_u32Number);

/*prototype of Power function*/
u32 POW(u32 Copy_u32Base,u8 Copy_u8Digits);

/*Prototype of Calculate number digits function*/
u8 CalDigits(u32 Copy_u32Number);

/*prototype of check the armstrong function*/
u32 CheckArmstrongState(u32 Copy_u32Number,u8 Copy_u8Digits);


/*implementation of main function*/
int main(void)
{
	/*define variable to store number got from user*/
	u32 Local_u32Number = LOW;
	/*number state*/
	u8 Local_u8NumberStatus = LOW;
	
	while(1)
	{
		/*Ask user to enter number*/
		printf("Please enter number to check its state: \n");
		scanf("%d",&Local_u32Number);
		
		/*Check the number*/
		Local_u8NumberStatus = CheckPrimeOrArmstrongNum(Local_u32Number);
		
		/*Check number states*/
		switch(Local_u8NumberStatus)
		{
			case PRIME:
				printf("Number is prime and not armstrong. \n");
			break;
			case ARMSTRONG:		
				printf("Number is armstrong and not prime. \n");
			break;
			case PRIME_AND_ARMSTRONG:
				printf("Number is prime and armstrong. \n");
			break;
			case NOT_ARMSTRONG:
				printf("Number is Neither prime and not armstrong. \n");			
			break;
			default:
				printf("Error in input number less than or equal zero. \n");
			break;
		}
		
		/*New entrance*/
		printf("\n\n");
	}
	
	/*return 0*/
	return 0;
}



/*prototype of function to check prime or armstrong number*/
u8 CheckPrimeOrArmstrongNum(u32 Copy_u32Number)
{			
	/*Number state*/
	u8 Local_u8NumberStatus = PRIME_AND_ARMSTRONG;		
	
	/*Check negative error*/
	if(Copy_u32Number > 0)
	{	

		/*1- Check prime state*/
		Local_u8NumberStatus = CheckPrime(Copy_u32Number);
		
		/*2- Check result state*/
		if(PRIME == Local_u8NumberStatus)
		{
			/*3- Check armstrong*/
			Local_u8NumberStatus = CheckArmstrong(Copy_u32Number);
			
			/*4- check result state*/
			if(ARMSTRONG == Local_u8NumberStatus)
			{
				Local_u8NumberStatus = PRIME_AND_ARMSTRONG;
			}
			else
			{
				Local_u8NumberStatus = PRIME;
			}
		}
		else
		{
			/*3- Check armstrong*/
			Local_u8NumberStatus = CheckArmstrong(Copy_u32Number);
		}
	}
	else
	{
		Local_u8NumberStatus  = INPUT_ERROR;
	}
	
	/*Return states of number*/
	return Local_u8NumberStatus;
}


/*Implementation of check prime number function */
u8 CheckPrime(u32 Copy_u32Number)
{
	/*define loop counter*/
	u8 Local_u8Counter = 0;
	
	/*Number state*/
	u8 Local_u8NumberStatus = PRIME;
	
	/*Flag*/
	u8 Local_u8Flag = LOW;
	
	/*Process of checking the number state*/
	for(Local_u8Counter = 2;(Local_u8Flag == LOW)&&(Local_u8Counter <= (Copy_u32Number/2));Local_u8Counter++)
	{
		/*check number*/
		if(LOW == (Copy_u32Number%Local_u8Counter) )
		{
			/*Set flag*/
			Local_u8Flag = HIGH;
			/*set not prime*/
			Local_u8NumberStatus = NOT_PRIME; 
		}
		else
		{
			/*do nothing*/
		}
	}
	
	/*return the state*/
	return Local_u8NumberStatus;
}


/*implementation of Check armsrong function*/
u8 CheckArmstrong(u32 Copy_u32Number)
{
	/*Digits number*/
	u8 Local_u8Digits = 0;
	/*Counter*/
	u8 Local_u8Counter = 0;
	/*define number state*/
	u8 Local_u8NumberStatus = 0; 

	/*define Armstrong process result variable*/
	u32 Local_u32ArmstrongProcessRes = 0;
	
	/*1- Calculate number digits */
	Local_u8Digits = CalDigits(Copy_u32Number);
	
	/*2- check the armstrong state*/
	Local_u32ArmstrongProcessRes = CheckArmstrongState(Copy_u32Number,Local_u8Digits);

	if(Local_u32ArmstrongProcessRes == Copy_u32Number)
	{
		/*Set armstrong*/
		Local_u8NumberStatus = ARMSTRONG;
	}
	else
	{
		/*set not armstrong*/
		Local_u8NumberStatus = NOT_ARMSTRONG;
	}
	
	/*return states*/
	return Local_u8NumberStatus;
}

/*implementation of Calculate number digits function*/
u8 CalDigits(u32 Copy_u32Number)
{
	/*Define digits*/
	u8 Local_u8Digits = 0;
	
	while(LOW != Copy_u32Number)
	{
		/*Increment digit counter*/
		Local_u8Digits++;
		
		/*remove number digit*/
		Copy_u32Number/=10;
	}
	
	/*return digits number*/
	return Local_u8Digits;
}


/*implementation of check the armstrong function*/
u32 CheckArmstrongState(u32 Copy_u32Number,u8 Copy_u8Digits)
{
	/*define result variable*/
	u32 Local_u32ArmstrongProcessRes = 0;
	/*Loop Counter*/
	u8 Local_u8Counter = 0;
	
	/*Process to cal result*/
	for(Local_u8Counter=0; Local_u8Counter<Copy_u8Digits;Local_u8Counter++)
	{
		Local_u32ArmstrongProcessRes += POW( (Copy_u32Number%10),Copy_u8Digits);
		Copy_u32Number /=10;
	}
	
	/*Return result*/
	return Local_u32ArmstrongProcessRes;
}


/*Power function implementation*/
u32 POW(u32 Copy_u32Base,u8 Copy_u8Digits)
{
	/*LoopCounter*/
	u8 Local_u8LoopCounter = LOW;
	
	/*Result value*/
	u32 Local_u32Result = HIGH;
		
	for(Local_u8LoopCounter=0;Local_u8LoopCounter < Copy_u8Digits;Local_u8LoopCounter++)
	{
		Local_u32Result *= Copy_u32Base; 
	}
	/*return result*/
	return Local_u32Result;
}