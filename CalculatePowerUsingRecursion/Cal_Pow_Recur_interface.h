/**********************************************************************************************/
/**********************************************************************************************/
/******************** Auther: Abdullah Azayem Ali Mohamed				   	 ******************/
/******************** Component: Calculate power recursivily Interface file	 ******************/
/******************** Date: 16/8/2020									   	 ******************/
/**********************************************************************************************/
/**********************************************************************************************/

/*Preprocessor file guard*/
#ifndef CAL_POW_RECUR_INTERFACE_H_
#define	CAL_POW_RECUR_INTERFACE_H_

/*Type of u8 bits*/
typedef signed char u8;

/*Type of unsigned 16 bits*/
typedef unsigned short int u16;

/*Define LOW*/
#define LOW 	0
#define HIGH 	1

/*Cal power recursivily*/
u16 CalPowRecur(u16 Copy_u16Number,u16 Copy_u16Degree);

#endif //end of file