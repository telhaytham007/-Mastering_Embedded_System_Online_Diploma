/*
 * EX1_Check  Number Even or Odd.c
 *
 *  Created on: 17/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main ()
{

	while(1)
	{
		int x;
		printf("Enter Number : \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&x);
		if(x & 1 == 1)
		{
			printf("%d is odd \n",x);
		}

		else
		{
			printf("%d is even \n",x);
		}
	}

}
