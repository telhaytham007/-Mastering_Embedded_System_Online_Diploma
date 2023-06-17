/*
12 * main.c
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
	float x;
	printf("Enter a Number : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);

	if (x==0)
		{
			printf("You Entered Zero \n");
		}
	if (x>0)
	{
		printf("%f is Postive \n",x);
	}
	if (x<0)
		{
			printf("%f is Negative \n",x);
		}

	}
return 0;
}




