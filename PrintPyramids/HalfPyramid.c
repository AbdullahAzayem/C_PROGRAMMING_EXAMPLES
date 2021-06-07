/*include the standard input output library*/
#include <stdio.h>

/*Define 8 bit data type*/
typedef unsigned char u8;

/*Prototypes of file functions*/
void PrintHalfPyramid(u8 Copy_u8Pattern,u8 Copy_u8Length); 				/*function to print Half pyramid*/
void PrintLine(u8 Copy_u8Pattern,u8 Copy_u8ColumsNumber);  				/*Implementation of function to print Line*/
void PrintHalfPyramidNums(u8 Copy_u8Length); 							/*implementation of function to print Half pyramid*/
void PrintLineNums(u8 Copy_u8Start,u8 Copy_u8ColumsNumber); 			/*Implementation of function to print Line of numbers*/
void PrintHalfPyramidCharacters(u8 Copy_u8Length); 						/*implementation of function to print Half pyramid Characters*/
void PrintLineCharacters(u8 Copy_u8Start,u8 Copy_u8ColumsNumber); 		/*Implementation of function to print Line of characters*/
void PrintFullPyramidNumbers(u8 Copy_u8Length);    						/*Implementation of Full Pyramid of Numbers*/
void PrintLineNumsIncreDecre(u8 Copy_u8Start,u8 Copy_u8ColumsNumber); 	/*Implementation of function to print Line of numbers increment Decrement*/


/*implementation of main function*/
int main(void)
{
	
	PrintFullPyramidNumbers(5);	
	/*Return 0*/
	return 0;
}


/*implementation of function to print Half pyramid nums*/
void PrintHalfPyramidCharacters(u8 Copy_u8Length) 
{
	/*Line number*/
	u8 Local_u8LineNo =0;
	
	/*Print of Half pyramid*/
	for(Local_u8LineNo = 1 ; Local_u8LineNo <= Copy_u8Length ;Local_u8LineNo++)
	{
		/*Print the space pattern*/
		PrintLineCharacters('A',Local_u8LineNo);
		/*Print New Line*/
		printf("\n");
	}
}



/*implementation of function to print Half pyramid nums*/
void PrintHalfPyramidNums(u8 Copy_u8Length) 
{
	/*Loop counter to print Half Pyramid*/
	u8 Local_u8ShapeController = 0;
	/*Line number*/
	u8 Local_u8LineNo = Copy_u8Length;
	
	/*Print of Half pyramid*/
	for(Local_u8LineNo = 1 ; Local_u8LineNo <= Copy_u8Length ;Local_u8LineNo++)
	{
		/*Print the space pattern*/
		PrintLineNums(1,Local_u8LineNo);
		/*Print New Line*/
		printf("\n");
	}
	
	
}


/*implementation of function to print Half pyramid*/
void PrintHalfPyramid(u8 Copy_u8Pattern,u8 Copy_u8Length)
{
	/*Loop counter to print Half Pyramid*/
	u8 Local_u8ShapeController = 0;
	/*Line number*/
	u8 Local_u8LineNo = Copy_u8Length;
	
	/*Print of Half pyramid*/
	for(Local_u8LineNo=1; Local_u8LineNo <= Copy_u8Length;Local_u8LineNo++)
	{
		/*Print the space pattern*/
		PrintLine(Copy_u8Pattern,Local_u8LineNo);
		
		/*Print New Line*/
		printf("\n");
	}
	
	
}

/*Implementation of Full Pyramid of Numbers*/
void PrintFullPyramidNumbers(u8 Copy_u8Length)
{
	/*Line pointer*/
	u8 Local_u8LineNo = 1;
	/*Lines Length*/
	u8 Local_u8LineLength = Copy_u8Length;
	
	/*Right half of pyramid*/
	u8 Local_u8RightPart = 0;
	/*Print the pyramid pattern*/
	for(Local_u8LineNo = 1;Local_u8LineNo<=Copy_u8Length;Local_u8LineNo++)
	{
		/*Print space pattern*/
		PrintLine(' ',Local_u8LineLength);
		PrintLineNumsIncreDecre(Local_u8LineNo,Local_u8LineNo);
		Local_u8LineLength--;
		/*New line*/
		printf("\n");		
	}
	
}


/*Implementation of function to print Line*/
void PrintLine(u8 Copy_u8Pattern,u8 Copy_u8ColumsNumber)
{
	/*Loop counter*/
	u8 Local_u8LoopCounter = 0;
	/*Print Line */
	for(Local_u8LoopCounter =0 ;Local_u8LoopCounter<Copy_u8ColumsNumber;Local_u8LoopCounter++)
	{
		printf("%c ",Copy_u8Pattern);
	}
}


/*Implementation of function to print Line of numbers*/
void PrintLineNums(u8 Copy_u8Start,u8 Copy_u8ColumsNumber)
{
	/*Loop counter*/
	u8 Local_u8LoopCounter = 0;
	/*Print Line */
	for(Local_u8LoopCounter =0 ;Local_u8LoopCounter<Copy_u8ColumsNumber;Local_u8LoopCounter++)
	{
		printf("%d ",Copy_u8Start);
		Copy_u8Start++;
	}
}


/*Implementation of function to print Line of numbers Decrementaly*/
void PrintLineNumsIncreDecre(u8 Copy_u8Start,u8 Copy_u8ColumsNumber)
{
	/*Loop counter*/
	u8 Local_u8LoopCounter = 0;
	/*Print Line */
	for(Local_u8LoopCounter =0 ;Local_u8LoopCounter<Copy_u8ColumsNumber;Local_u8LoopCounter++)
	{
		printf("%d ",Copy_u8Start);
		Copy_u8Start++;
	}
	Copy_u8Start--;
	
	/*Print Line */
	for(Local_u8LoopCounter = Copy_u8ColumsNumber;Local_u8LoopCounter > 1 ;Local_u8LoopCounter--)
	{
		Copy_u8Start--;
		printf("%d ",Copy_u8Start);
	}
}


/*Implementation of function to print Line of numbers*/
void PrintLineCharacters(u8 Copy_u8Start,u8 Copy_u8ColumsNumber)
{
	/*Loop counter*/
	u8 Local_u8LoopCounter = 0;
	/*Print Line */
	for(Local_u8LoopCounter =0 ;Local_u8LoopCounter<Copy_u8ColumsNumber;Local_u8LoopCounter++)
	{
		printf("%c ",Copy_u8Start);
		Copy_u8Start++;
	}
}