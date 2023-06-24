/*
 * EX2_Calc Average Using Arrays.c
 *
 *  Created on: 24/6/2023
 *      Author: Tayseer ELhaytham
 */


#include "stdio.h"
#include "stdlib.h"

int main ()
{
 float arr[100], sum=0, avr;
 int i , n;

 printf("Enter The Number of Data: ");
 fflush(stdin); fflush(stdout);
 scanf("%d",&n);

 while (n<100 || n>0)
 {
	 for (i=0 ; i<n ; i++)
	 {
		 printf("Enter Numer %d : ",i+1);
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&arr[i]);
		 sum = sum + arr[i];
	 }
	 avr = sum / n ;
	 printf("Average = %0.2f \n",avr);
 }
printf("ERROR");

}

