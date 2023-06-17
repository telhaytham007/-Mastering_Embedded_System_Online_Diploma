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

	float a , b ,temp;

	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);

	fflush(stdin);
	fflush(stdout);

	printf("\nEnter value of b:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);

	temp=a;
	a=b ;
	b=temp;

	printf("\nAfter swapping, value of a: %f ",a);
	printf("\r\nAfter swapping, value of b: %f ",b);
	return 0;

}
