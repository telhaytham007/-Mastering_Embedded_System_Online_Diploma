/*
 * main.c
 *
 *  Created on: 17/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main ()
{

while (1)
{
	float num1 , num2 , num3;
	fflush(stdin); fflush(stdout);
	printf("Enter Three Numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	if (num1 >= num2 && num1 >= num3)
		printf(" Largest Number = %f \n ", num1);

	if (num2 >= num1 && num2 >= num3)
		printf(" Largest Number = %f \n ", num2);
	if (num3 >= num1 && num3 >= num2)
		printf(" Largest Number = %f \n ", num3);

}
}
