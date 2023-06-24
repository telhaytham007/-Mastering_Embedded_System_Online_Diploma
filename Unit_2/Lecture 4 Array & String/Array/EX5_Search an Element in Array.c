/*
 * EX5_Search an Element in Array.c
 *
 *  Created on: 23/6/2023
 *      Author: Tayseer Elhaytham
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
 int a[100];
 int n , i , element ;
 //Enter Number of element
 printf("Enter Number of Element : ");
 fflush(stdin); fflush(stdout);
 scanf("%d",&n);
 //Enter the Value of Element
 for (i=0 ; i<n ; i++)
 {
	 scanf("%d",&a[i]);
 }
 //Enter the elemnt to search
 printf("Enter The Element to be Search ");
 fflush(stdin); fflush(stdout);
 scanf("%d",&element);
 //Search to Location to element
 for (i=0 ; i<n ; i++)
 {
	 if(a[i]==element)
	 {
		 printf("Number Found at the location %d",i+1);
	 }
 }
  return 0 ;
}

