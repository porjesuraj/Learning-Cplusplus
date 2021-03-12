//============================================================================
// Name        : Day1_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee
{
private:
	int id; //data member
	int salary;
public:
	//member function
	void accept()
	{
		cout<<"Enter id ";
		cin>>id;
		cout<<"Enter salary";
		cin>>salary;
	}
	void disp()
	{
		cout<<"\n ID : "<<id;
		cout<<"\n Salary : "<<salary;

	}
};


int main()
{
	////instantiation of the class or creating an object of the class
	Employee emp;

	emp.accept();
	emp.disp();
	//cout<<sizeof(Employee);
	return 0;
}
