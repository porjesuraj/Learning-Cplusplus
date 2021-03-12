//============================================================================
// Name        : Day2_7.cpp
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
	int id;
	int salary;
public:
	Employee() //parameterless constructor/ default constructor
	{
		this->id=10;
		this->salary=50000;
	}

	Employee(int id , int salary) // paramaterized constructor (two parameters)
		{
			this->id=id;
			this->salary=salary;
		}

	void disp();
};
void Employee :: disp()
{
	cout<<"\n  ID : "<<this->id;
	cout<<" \n Salary : "<<this->salary;
}

int main()
{
	Employee emp[3];//creating an array of objects of class Employee
	//classname objectname[size];

	for(int i=0; i<3;i++)
	{
		//emp[i].get_data();
		emp[i].disp();

	}

	return 0;
}

