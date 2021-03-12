//============================================================================
// Name        : 1.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
#include"emp_date.h"
using namespace std;


employee::employee()
{
	this->id = 1;
	this->sal = 1000;
	strcpy(this->dept,"manager");
	this->joining = joining;
}
void employee::accept()
{
	cout<<"enter employee id";
	cin>>id;
	cout<<"enter employee department";
		cin>>dept;
		cout<<"enter employee salary";
			cin>>sal;
               joining.AcceptDate();


}
void employee::display()
{
	cout<<"employee id :";
		cout<<id<<endl;
		cout<<"employee department : ";
			cout<<dept<<endl;
			cout<<"employee salary : ";
				cout<<sal<<endl;
	               joining.PrintDate();

}
void employee::get_joining_date()
{
   this->joining.PrintDate();

}

void employee::set_joining_date(date)
{
  this->joining.AcceptDate();
}
void employee::set_id(int new_id)
{
	this->id = new_id;
}

int employee::get_id()
{
	return id;
}

void date::AcceptDate()
{   cout<<"enter the joining date \n ";
	cout<<"day \n ";
	cin>>day;
	cout<<"month \n";
	cin>>month;
	cout<<"day \n ";
	cin>>year;
}
void date::PrintDate()
{   printf("\n joining date :\n");
	cout<<day;
	cout<<"-"<<month;
	cout<<"-"<<year;
}

int menu_list(void)
{
	int choice;

		cout<<"enter choice for employee  1.accept \n 2.display \n 3.set joining date\n 4.set joining date \n 5. set id \n 6.get id";
		cin>>choice;
		return choice;

}

