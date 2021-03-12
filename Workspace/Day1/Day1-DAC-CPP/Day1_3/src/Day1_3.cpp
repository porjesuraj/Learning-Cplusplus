//============================================================================
// Name        : Day1_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


struct Employee
{
	int id;
	int salary;
	void accept()
	{
		cout<<"Enter Id Value : ";
		cin>>id;
		cout<<"Enter Id Value : ";
		cin>>salary;
	}
	void disp()
	{
		cout<<"ID : "<<id;
		cout<<"\n Salary : "<<salary;
	}

};

int main()
{
	struct Employee emp;//creating variable of type structure Employee
	// accept() function is called upon the structure variable name called as emp
	emp.accept();
	emp.disp();
	//accept(); //error: ‘accept’ was not declared in this scope
	return 0;
}

