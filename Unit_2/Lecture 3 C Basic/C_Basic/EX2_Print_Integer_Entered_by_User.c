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
	int x = 0;
	printf (" Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf ("\nYour Entered :%d",x);


	return 0;

}
