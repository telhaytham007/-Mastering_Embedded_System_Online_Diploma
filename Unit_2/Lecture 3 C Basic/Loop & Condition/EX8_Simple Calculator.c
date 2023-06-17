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
	float num1 , num2 , x ;
	char op;
	while(1)
	{
		printf("Enter Operator either + or - or * or / \n");
		  fflush(stdin); fflush(stdout);
		scanf("%c",&op);
		printf("Enter Two Operands \n");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&num1 , &num2);

		switch (op)
		{
		case '+':
			x = num1 + num2;
			break;

		case '-':
			x = num1 - num2;
			break;

		case '*':
			x = num1 * num2;
			break;

		case '/':
			x = num1 / num2;
			break;
		default :
			printf("Error \n");
		}
		printf("Result = %f \n" , x);

	}
	return 0 ;

}

