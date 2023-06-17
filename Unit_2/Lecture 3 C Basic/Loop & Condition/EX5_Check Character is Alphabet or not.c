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
		char ch;
		printf("Enter a character: \n");
		fflush(stdin); fflush(stdout);
		scanf("%c",&ch);

		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
		{
			printf("%c Is an Alphabit \n",ch);
		}

		else
		{
			printf("%c Is not Character \n",ch);
		}

	}
	return 0;
}

