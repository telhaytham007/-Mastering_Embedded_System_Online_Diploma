/*
 * main.c
 *
 *  Created on: 17/6/23
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main ()
{
	while(1)
	{
		int num ,i , fact=1;
		fflush(stdin); fflush(stdout);
		printf("Enter an Integer : \n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);
		if (num < 0)
		{
			printf("Error!!! Factorial of negative number dosen't exit \n");
		}
		else if (num ==0)
		{
			printf("Fectorial of 0 = 1 \n");
		}
		else if (num > 0)
		{
			for (i=1 ; i <=num ; ++i )
			{
				fact= fact*i;
			}
			printf ("Factorial = %d \n",fact);
		}

	}
	return 0 ;
}

