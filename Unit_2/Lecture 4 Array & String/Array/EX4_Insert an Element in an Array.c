/*
 * EX4_Incert an Element in an Array.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer ELhaytham
 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
 int a[100];
 int n , i , element , location ;

 //Enter Number of Elememt
 printf("Enter Number of Elememt : ");
 fflush(stdin); fflush(stdout);
 scanf("%d",&n);

 //Entet the Value of Element
 for(i=0 ; i<n ; i++)
 {
	 fflush(stdin); fflush(stdout);
	 scanf("%d",&a[i]);
 }

 //Enter Element to be Insert
 printf("Enter Element to be Insert :  ");
 fflush(stdin); fflush(stdout);
 scanf("%d",&element);
 //Enter The Location
  printf("Enter The Location :  ");
  fflush(stdin); fflush(stdout);
  scanf("%d",&location);

 // Creat Space at Location
 for (i=n ; i>=location ; i--)
 {
	 a[i] = a[i-1];              // Shifting Space to add new value
 }
 n++;                             // Expand the array to add new value
 a[location - 1] = element;      // Array start from 0

 // Print The Result
 for(i=0 ; i<n ; i++)
 {
	printf("%d \t",a[i]);
 }
 return 0 ;
}
