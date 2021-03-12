//============================================================================
// Name        : Day2_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test
{
private:
	int num1;
public:
	Test(); //declaration of Parameterless Constructor
	Test(int num1);//decalration of  Paramatrized Constructor
	void disp();
};

Test::Test() //definition of constructor outside the class using ::
{

	cout<<"Inside Parameterless Constructor "<<this;
	this->num1=100;

}
Test::Test(int num1)//definition of constructor outside the class using::
{
	cout<<" Inside Paramatrized Constructor "<<this;
	this->num1=num1;
}

void Test::disp()
{
	cout<<"\n Num 1 "<<this->num1;
}


int main()
{
	Test t; //Parameterless Constructor gets called
	cout<<"\n Address of object t "<<&t;
	t.disp();
	Test t1(300); //Paramatrized Constructor gets called
	cout<<"\n Address of object t1 "<<&t1;
	t1.disp();
	return 0;
}


/*
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

	Employee(int id) // paramaterized constructor (one parameter)
	{
		this->id=id;
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
	Employee emp1;//created an object of class Employee
	emp1.disp();
	Employee emp2(2);
	emp2.disp();
	Employee emp3(3,50000);
	emp3.disp();
	Employee emp4(4,60000);
	emp4.disp();
	return 0;
}
*/



/*
class Employee
{
private:
	int id;
	int salary;
public:
	void get_data(int id,int salary);
	void disp();
};


void Employee ::get_data(int id,int salary)
{
	this->id=id;
	this->salary=salary;

}
void Employee :: disp()
{
	cout<<" ID : "<<this->id;
	cout<<" Salary : "<<this->salary;
}

int main()
{
	Employee emp;
	emp.get_data(1,50000);
	emp.disp();
	return 0;
}
*/
