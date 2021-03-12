//============================================================================
// Name        : Day2_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//this keyword / pointer

class Student
{
private:
	int id;
	int marks;
public:
	void accept(int id,int marks);
	void disp();
};


/*void Student::accept(int i,int m)
{
	id=i;
	marks=m;
}*/

void Student::accept(int id,int marks)
{
	this->id=id;
	this->marks=marks;
}



void Student ::disp()
{
	cout<<"ID : "<<id;
	cout<<" Marks : "<<marks;
}

int main()
{
	Student st;
	st.accept(1,90); //accept() is called upon st object

	st.disp();

	return 0;
}
