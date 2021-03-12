//============================================================================
// Name        : Day4_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Rect
{
private:
	int l,b;
public:
	Rect();
	Rect(int l,int b);
	~Rect() //destructor
	{
		cout<<"\n inside destructor "<<this;
	}
	void print();
};
Rect::Rect()
{
	this->l=0;
	this->b=0;
}

Rect::Rect(int l,int b)
{
	this->l=l;
	this->b=b;
}

void Rect::print()
{
	cout<<"\n  L : "<<this->l;
	cout<<" \n B : "<<this->b;
}

int main()
{
	Rect r1;
	r1.print();
	cout<<"\n Address of R1 Object :"<<&r1;

	Rect r2(20,10);
	r2.print();
	cout<<"\n Address of R2 Object :"<<&r2;
	Rect r3(40,50);
	r3.print();
	cout<<"\n Address of R3 Object :"<<&r3;
	return 0;
}
