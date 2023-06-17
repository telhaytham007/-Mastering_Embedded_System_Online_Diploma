/*
 * main.c
 *
 *  Created on: 17/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main (void)
{
	int Num1 , Num2 , Sum;
	printf (" Enter two integer: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&Num1 , &Num2);
	Sum = Num1 + Num2 ;

	printf ("\nSum = %d",Sum);


return 0;

}
