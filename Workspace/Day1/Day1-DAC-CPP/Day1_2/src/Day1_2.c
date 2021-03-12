/*
 ============================================================================
 Name        : Day1_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
	int dd;
	int mm;
	int yy;
}DATE;

DATE accept(); // returning structure from a function

DATE accept()
{
	DATE d;////creating a structure variable using alias/nick name
	//struct Date dt; //creating a structure variable using real name
	printf("Enter dd ");
	scanf("%d",d.dd);

	printf("\n Enter mm ");
	scanf("%d",d.mm);

	printf("\n Enter yy ");
	scanf("%d",d.yy);

	return d;
}

int main()
{
	DATE d1;
	d1=accept();

	return 0;
}

/*

struct Student
{
	int id;
	int marks;
};

void accept_data(struct Student *s) //s is formal argument
{
	printf("\n Enter Student id");
	scanf("%d",&s->id);

	printf("\n Enter Student marks");
	scanf("%d",&s->marks);


}
void disp_data(struct Student *s)
{
	printf("ID = %d Marks = %d",s->id,s->marks);
}

int main(void)
{
	struct Student s1; //structure variable
	accept_data(&s1); //s1 actual argument
	disp_data(&s1);

	return EXIT_SUCCESS;
}
*/
