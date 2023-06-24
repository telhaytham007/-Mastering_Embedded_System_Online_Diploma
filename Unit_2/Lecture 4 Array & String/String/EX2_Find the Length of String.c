/*
 * EX2_Find the Length of String.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
 char text[100] , length =0 ;
 int i;

 //Enter a String
 printf("Enter a String : \n");
 fflush(stdin); fflush(stdout);
 gets(text);

 //Calc The Length of String
 for(i=0 ; text[i]!='\0' ; i++ )
 {
	 length ++ ;
 }
 //Print Length of String
 printf("Length of String = %d", length);
 return 0 ;
}


