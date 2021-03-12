//============================================================================
// Name        : Day4_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	//Constructor
	Complex()
	{
		this->real=10;
		this->imag=20;
	}
	Complex(int real,int imag)
	{
		this->real=real;
		this->imag=imag;
	}
	//Descturctor
	~Complex()
	{
		cout<<"\n Desctructor Called ";
	}

	//facilitator
	void accept()
	{
		cout<<"\n Enter Real Value ";
		cin>>this->real;

		cout<<"\n Enter Imag Value ";
		cin>>this->imag;
	}
	void print()
	{
		cout<<"\n Real : "<<this->real;
		cout<<"\n Imag : "<<this->imag;
	}

	//Setter Methods [Mutator]
	void setReal(int real)
	{
		this->real=real;
	}
	void setImag(int imag)
	{
		this->imag=imag;
	}

	//getter methods[Inspector]
	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
};

int main()
{
	Complex c1;
	int r,i;
	r=c1.getReal();
	i=c1.getImag();
	cout<<"\n C1 :  R ="<<r;
	cout<<"\n C1 : I = "<<i;
	c1.setReal(30);
	//c1.setImag(40);
	c1.print();

	Complex c2(50,60);
	c2.print();
	r=c2.getReal();
	i=c2.getImag();
	cout<<"\n C2 :  R ="<<r;
	cout<<"\n C2 : I = "<<i;


	return 0;
}
