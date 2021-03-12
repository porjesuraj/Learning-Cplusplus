/*
 ============================================================================
 Name        : assignment 1
 Author      : suraj
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Write a menu driven program for Date in a C language.
Declare a structure Date having data members day, month, year. Implement the
following functions.
void InitDate(struct Date* ptDate);
void PrintDateOnConsole(struct Date* ptDate);
void AcceptDateFromConsole(struct Date* ptDate);*/

#include <stdio.h>
#include <stdlib.h>
typedef struct Date
{
	int day;
	int month;
	int year;

}date_t;
date_t d1;

void InitDate(date_t* ptr)
{
  d1.day = 4;
   d1.month = 3;
   d1.year = 2020;
printf("date inbuilt \n ");
printf("%d-%d-%d \n ",ptr->day,ptr->month,ptr->year);
}
void AcceptDateFromConsole(struct Date* ptr)
{   printf("enter the present date \n ");
	printf("day \n ");
	scanf("%d",&ptr->day);
	printf("month \n");
	scanf("%d",&ptr->month);
	printf("day \n ");
	scanf("%d",&ptr->year);
}
void PrintDateOnConsole(struct Date* ptr)
{   printf("\nuser entered date \n");
	printf("%d-%d-%d \n",ptr->day,ptr->month,ptr->year);
}
int main(void)
{

	InitDate(&d1);
	AcceptDateFromConsole(&d1);
	PrintDateOnConsole(&d1);
	return 0;
}
