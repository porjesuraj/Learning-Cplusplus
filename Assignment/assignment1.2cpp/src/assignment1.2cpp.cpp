//============================================================================
// Name        : 2cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*Write a menu driven program for Date in a C++ language.
Declare a structure Date having data members day, month, year. Implement the
following member functions.
void
void
void
bool
InitDate();
PrintDateOnConsole();
AcceptDateFromConsole();
IsLeapYear();*/

#include <iostream>
using namespace std;
typedef struct date
{
	int day;
	int month;
	int year;
}date_t;
date_t d1;

int init_menu_list(void)
{
	    int choice;
	    cout<<"\n 0.exit \n 1.set date \n 2.input date \n 3.print date \n 4.check if year is a leap year \n enter choice ";
	    cin>>choice;
	    return choice;
}

void InitDate(date_t* ptr)
{
  d1.day = 4;
   d1.month = 3;
   d1.year = 2020;
cout<<"date inbuilt \n ";
cout<<ptr->day;
cout<<"-"<<ptr->month;
cout<<"-"<<ptr->year;
cout<<"\n";
}
void AcceptDateFromConsole(date_t* ptr)
{   cout<<"enter the present date \n ";
	cout<<"day \n ";
	cin>>ptr->day;
	cout<<"month \n";
	cin>>ptr->month;
	cout<<"day \n ";
	cin>>ptr->year;
}
void PrintDateOnConsole(date_t* ptr)
{   printf("\n user entered date \n");
	cout<<ptr->day;
	cout<<"-"<<ptr->month;
	cout<<"-"<<ptr->year;
}

bool IsLeapYear(date_t* ptr)
{
	if((ptr->year % 4 == 0 && ptr->year % 100 != 0) || ptr->year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}


}
int main()
{   int choice;
	while((choice = init_menu_list()) != 0)

  switch(choice)

	{
	case 1:
	InitDate(&d1);
	break;
	case 2:
	AcceptDateFromConsole(&d1);
	break;
	case 3:
    PrintDateOnConsole(&d1);
    break;
	case 4:
     {if(IsLeapYear(&d1) == true)
    {
    	cout<<"its a leap year";
    }
    else
    cout<<"not a leap year";
     }
     break;
	}
	return 0;


}
