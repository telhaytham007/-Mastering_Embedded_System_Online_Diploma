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
	float Num1 , Num2 , Mult;
	printf ("Enter two float:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&Num1 , &Num2);
	Mult = Num1 * Num2 ;

	printf ("Mult = %f",Mult);


	return 0;

}
