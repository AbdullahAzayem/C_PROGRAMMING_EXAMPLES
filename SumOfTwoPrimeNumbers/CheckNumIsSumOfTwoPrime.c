/*include standard i/o library*/
#include <stdio.h>

/*Standards data types*/
typedef unsigned char u8; 			// Data type of one byte size 
typedef unsigned short int u16; 	// Data type of two byte size 


/*program Preprocessor definition*/
#define LIST_MAX_NUMBER 1000 //maximum list numbers


/*Error States*/
#define OK 				1	 
#define NOK 			2
#define NULL_POINTER 	3
#define YES 			4
#define NO 				5

  
/*1- Gather all prime number before that number in list*/  
u8 GatherPrimeList(u16* Copy_pu16PrimeList,u16 Copy_u16Number,u8* Copy_pu8ListLength);
/*2- Check sum of every number in list with others in same list*/
u8 CheckList(u16* Copy_pu16PrimeList,u8 Copy_u8ListLength,u16 Copy_u16Number);
/*3- Check prime*/
u8 CheckPrime(u16 Copy_u16Number);



/*implement the main function*/
int main(void)
{
	/*Define varible to store number from user*/
	u16 Local_u16Number = 0;
	/*Define array to store the list of prime numbers*/
	u16 Local_u16PrimeList[LIST_MAX_NUMBER]={0};
	/*Define error state variable*/
	u8 Local_u8ErrorState = OK;
	/*Number list*/
	u8 Local_u8ListLength = 0;
	
	/*Print program functionality*/
	printf("          \"This program to check number as sum of two prime number or not\"              \n\n");
	
	/*1- Read number from user*/
		/*Ask user to enter number*/
		printf("Enter number:");
		scanf("%d",&Local_u16Number);
		
	/*2- Gather all prime number before that number in list*/
		/*Gather the list*/
		Local_u8ErrorState = GatherPrimeList(Local_u16PrimeList,Local_u16Number,&Local_u8ListLength);
		/*Check error state*/
		if(NULL_POINTER != Local_u8ErrorState)
		{
			/*3- Check sum of every number in list with others in same list*/
				Local_u8ErrorState = CheckList(Local_u16PrimeList,Local_u8ListLength,Local_u16Number);
			/*4- Return the result of processing Yes or No*/
				/*Check state or check function*/
				if(YES == Local_u8ErrorState)
				{
					printf("Yes.\n");
				}
				else
				{
					/*Set No result*/
					printf("No.\n");
				}
		}
		else
		{
			/*Return error state Null pointer*/
			printf("NULL pointer error. \n");
		}	
		
	/*Return 0 means code is done*/
	return 0;
	
}



/*1- Gather all prime number before that number in list*/  
u8 GatherPrimeList(u16* Copy_pu16PrimeList,u16 Copy_u16Number,u8* Copy_pu8ListLength)
{
	/*Loop Counter*/
	u8 Local_u8LoopCounter =0;
	/*List pointer*/
	u8 Local_u8ListPointer = 0;
	/*Local_u8NumState*/
	u8 Local_u8NumState = OK;
	/*Error state*/
	u8 Local_u8ErrorState = OK;
	
	if((NULL != Copy_pu16PrimeList) && (NULL != Copy_pu8ListLength))
	{
		/*Gather list of prime numbers*/
		for(Local_u8LoopCounter=0;Local_u8LoopCounter < Copy_u16Number;Local_u8LoopCounter++)
		{
			/*Check prime*/
			Local_u8NumState = CheckPrime(Local_u8LoopCounter);
			/*check number state*/
			if(YES == Local_u8NumState)
			{
				/*Store the prime number in list*/
				Copy_pu16PrimeList[Local_u8ListPointer] = Local_u8LoopCounter;
				/*increment the list pointer*/
				Local_u8ListPointer++;
			}
			else
			{
				/*Do nothing*/
			}
		}
		
		/*Set prime list length*/
		(*Copy_pu8ListLength) = Local_u8ListPointer;
	}
	else
	{
		/*Set null pointer*/
		Local_u8ErrorState = NULL_POINTER;
	}
	
	/*Return the function state*/
	return Local_u8ErrorState;
}

/*2- Check sum of every number in list with others in same list*/
u8 CheckList(u16* Copy_pu16PrimeList,u8 Copy_u8ListLength,u16 Copy_u16Number)
{
	/*Big loop counter */
	u8 Local_u8BigLoopCounter=0;
	/*Small loop counter*/
	u8 Local_u8SmallLoopCounter=0;
	/*Result state*/
	u8 Local_u8NumState = OK;
	
	
	/*Check numbers list*/
	for(Local_u8BigLoopCounter=0;Local_u8BigLoopCounter<Copy_u8ListLength-1;Local_u8BigLoopCounter++)
	{
		for(Local_u8SmallLoopCounter=Local_u8BigLoopCounter+1;Local_u8SmallLoopCounter<Copy_u8ListLength-1;Local_u8SmallLoopCounter++)
		{
			if((Copy_pu16PrimeList[Local_u8BigLoopCounter]+Copy_pu16PrimeList[Local_u8SmallLoopCounter])==Copy_u16Number)
			{
				Local_u8NumState = YES; 
			}
			else
			{
				/*Do nothing*/
			}
			
		}
		
	}
	
	/*Return result*/
	return Local_u8NumState;
}

/*3- Check prime*/
u8 CheckPrime(u16 Copy_u16Number)
{
	/*Loop counter*/
	u8 Local_u8LoopCounter = 0;
	
	/*Number state*/
	u8 Local_u8NumState = YES;
	
	for(Local_u8LoopCounter=2;Local_u8LoopCounter<= (Copy_u16Number/2) ;Local_u8LoopCounter++)
	{
		/*Check state*/
		if(Copy_u16Number%Local_u8LoopCounter==0)
		{
			Local_u8NumState = NO;
		}
		else
		{
			/*Do nothing*/
		}
	}
	/*Return number state*/
	return Local_u8NumState;
}