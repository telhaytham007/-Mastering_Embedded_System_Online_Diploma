/*
 * EX5_Find The Frequancy of characters.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
 char text[100], ch ;
 int i ,  counter=0 ;

 //Enter The String
 printf("Enter The Stering : \n");
 fflush(stdin); fflush(stdout);
 gets(text);

 //Enter a character to find frequancy
 printf("Enter a character to find frequancy: \n");
 fflush(stdin); fflush(stdout);
 scanf("%c",&ch);

 //Calc Frequancy to Character
 for (i=0 ; i < sizeof(text) ; i++)
 {
	 if(text[i]==ch)
	 {
		 counter ++;
	 }
 }

 //Print Frequancy of Character
 printf("Frequancy of %c : %d", ch , counter);
return 0 ;

}
