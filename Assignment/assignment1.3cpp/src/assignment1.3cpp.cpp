//============================================================================
// Name        : 3cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*3) Write a menu driven program for Date in a C++ language.
Declare a class Date having data members day, month, year. Implement the following
member functions.
Date();
Date(int day, int month, int year);
void PrintDateOnConsole();
void AcceptDateFromConsole();
bool IsLeapYear();
*/

#include <iostream>
#include"date.h"
using namespace std;

int init_menu_list(void)
{
	    int choice;
	    cout<<"\n 0.exit \n 1.set date \n 2.input date \n 3.print date \n 4.check if year is a leap year \n enter choice ";
	    cin>>choice;
	    return choice;
}
void date::InitDate()
{
cout<<"date inbuilt \n ";
cout<<day;
cout<<"-"<<month;
cout<<"-"<<year;
cout<<"\n";
}
void date::AcceptDateFromConsole()
{   cout<<"enter the present date \n ";
	cout<<"day \n ";
	cin>>day;
	cout<<"month \n";
	cin>>month;
	cout<<"day \n ";
	cin>>year;
}
void date::PrintDateOnConsole()
{   printf("\n user entered date \n");
	cout<<day;
	cout<<"-"<<month;
	cout<<"-"<<year;
}

bool date::IsLeapYear()
{
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

