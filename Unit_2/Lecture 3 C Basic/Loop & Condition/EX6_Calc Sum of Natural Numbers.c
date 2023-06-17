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

	while(1)
	{
		int num ,i , sum=0;
		fflush(stdin); fflush(stdout);
		printf("Enter an Integer : \n");
		fflush(stdin); fflush(stdout);
		scanf("%d",&num);

		for (i=1 ; i <=num ; ++i )
		{
			sum= sum+i;

		}
		printf ("Sum = %d \n",sum);
	}
	return 0;
}
