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

	while (1)
	{
		char ch;
		fflush(stdin); fflush(stdout);
		printf("Enter an alphabet : \n");
		fflush(stdin); fflush(stdout);
		scanf("%c",&ch);

		switch (ch)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		{
			printf("%c Is Vowl \n",ch);
		}
		break;

		default :
		{
			printf("%c Is Consonant \n",ch);
		}
		}
	}
	return 0;
}
