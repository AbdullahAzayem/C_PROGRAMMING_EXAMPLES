/*preprocessor file guard*/
#ifndef BUBLESORT_H_
#define BUBLESORT_H_


/*1- Standards Data types file*/
/*8 bits data type*/
typedef unsigned char u8;
/*16 bits data type*/
typedef signed short int u16;
/*32 bit data type*/
typedef signed long int u32;

/*2- Error states File*/
#ifndef NULL
#define NULL 			0
#endif

#define OK 				1
#define NOK 			2
#define NULL_POINTER 	3


/*3- File prototypes*/
/*sort array*/
u8 BubleSort(u32* Copy_pu32Arr,u8 Copy_u8ElementsNo);
		
/*prototype of swap function*/		
void Swap(u32* Copy_pu32Element1,u32* Copy_pu32Element2);

#endif //end of file