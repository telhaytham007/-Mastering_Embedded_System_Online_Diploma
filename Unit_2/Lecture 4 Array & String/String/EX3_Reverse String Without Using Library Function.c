/*
 * EX3_Reverse String Without Using Library Function.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhaytham
 */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main ()
{
 char text[10] , reverce_text[10];
 int i , j=0 ;

 //Enter The String
 printf("Enter The String : ");
 fflush(stdin); fflush(stdout);
 gets(text);

 //Reverce The Length
 for (i=strlen(text) ; i>0 ; i--)
 {
	 reverce_text[j] = text[i-1];
	 j++;
 }
 //Print Reverce Text
 printf("Reverse String is : %s", reverce_text);


}
