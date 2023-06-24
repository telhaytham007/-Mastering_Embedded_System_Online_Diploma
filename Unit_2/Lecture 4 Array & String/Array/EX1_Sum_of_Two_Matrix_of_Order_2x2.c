/*
 * Sum_of_Two_Matrix_of_Order_2x2.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhaytham
 */


#include "stdio.h"
#include "stdlib.h"

int main ()
{
 float arr_1[2][2];
 float arr_2[2][2];
 int i , j ;

 //First Matrix
 printf("Enter your elements in 1st matrix : \n");
 for (i=0 ; i<2 ; i++)
 {
	 for (j=0 ; j<2 ; j++)
	 {
		 printf("Enter a%d%d : ", i+1 , j+1);
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&arr_1[i][j]);
	 }
 }
 //Second Matrix
 printf("\nEnter your elements in 2st matrix : \n");
 for (i=0 ; i<2 ; i++)
 {
	 for (j=0 ; j<2 ; j++)
	 {
		 printf("Enter b%d%d : ", i+1 , j+1);
		 fflush(stdin); fflush(stdout);
		 scanf("%f",&arr_2[i][j]);
	 }
 }

 //Calc Sum of Matrix
 printf("\nThe Sum of Matrix \n");
 for (i=0 ; i<2 ; i++)
 {
	 for (j=0 ; j<2 ; j++)
	 {
		 arr_1[i][j] = arr_1[i][j] + arr_2[i][j];
		 printf("%0.1f \t",arr_1[i][j]);
	 }
	 printf("\n");
 }



}
