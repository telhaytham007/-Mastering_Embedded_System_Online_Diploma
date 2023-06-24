/*
 * E3_Find Transpose of Matrix.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhauyham
 */

#include "stdio.h"
#include "stdlib.h"

int main ()
{

int a[100][100] , t[100][100];
int row , colume , i , j ;

// Enter Row and Colume from User
printf("Enter the Row of Matrix : ");
fflush(stdin); fflush(stdout);
scanf("%d",&row);
printf("Enter the Colume of Matrix : ");
fflush(stdin); fflush(stdout);
scanf("%d",&colume);
// Enter Element of Matrix
printf("Enter Element of Matrix \n");
for (i=0 ; i<row ; i++)
{
	for (j=0 ; j<colume ; j++)
	{
		printf("Enter element a%d%d :",i+1 , j+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i][j]);
	}
}
// Display The Matrix
printf("The Element of Matrix \n");
for (i=0 ; i<row ; i++)
{
	for (j=0 ; j<colume ; j++)
	{
		printf("%d \t",a[i][j]);
	}
	printf("\n");
}
// Transpose of Matrix
for (i=0 ; i<row ; i++)
{
	for (j=0 ; j<colume ; j++)
	{
		t[j][i] = a[i][j];
	}
}
//Display Transpose of Matrix
printf("The Transpose of Matrix \n");
for (i=0 ; i<colume ; i++)
{
	for (j=0 ; j<row ; j++)
	{
		printf("%d \t",t[i][j]);
	}
	printf("\n");
}
return 0 ;
}


