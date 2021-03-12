//============================================================================
// Name        : Day4_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Student
{
private:
	int id;
	int marks;
public:
	Student();
	Student(int id,int marks);
	void accept();
	void disp();
	~Student()
	{
		cout<<"\n Destructor called "<<this;
	}
};

Student::Student()
{
	this->id=1;
	this->marks=90;
}

Student::Student(int id,int marks)
{
	this->id=id;
	this->marks=marks;
}

void Student::accept()
{
	cout<<"\n Enter id of student ";
	cin>>this->id;

	cout<<"\n Enter Marks of student ";
	cin>>this->marks;
}

void Student:: disp()
{
	cout<< "\n ID "<<this->id<<" Marks: "<<this->marks;
}


int main()
{
	//Student s[2]; //static memory allocation for array of objects

	int no_of_records;
	cout<<" Enter no_of_records you want to create ";
	cin>>no_of_records;
	//dynamic memory allocation for array of objects
	Student *s_arr=new Student[no_of_records];

	int i;
	for(i=0;i<no_of_records;i++)
	{
		s_arr[i].accept();
		cout<<"\n Address of s_arr"<<&s_arr[i];
	}
	for(i=0;i<no_of_records;i++)
	{
		s_arr[i].disp();
	}

	Student s1;//object initialization by calling parameterless constructor
	cout<<" \n Address o f s1 "<<&s1;
	s1.disp();

	Student s2(3,90);
	cout<<" \n Address o f s2 "<<&s2;
	s2.disp();

	delete [] s_arr;
	s_arr=NULL;


	return 0;
}


