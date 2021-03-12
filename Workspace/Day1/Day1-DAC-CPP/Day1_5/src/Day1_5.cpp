//============================================================================
// Name        : Day1_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void print(int a=10,int b=20,int c=30,int d=40);

int main()
{

	//print(10); //error: too few arguments to function
	//print(10,20);
	//print(10,20,30);
	//print(10,20,30,40);
	//print();
	//print(100);
	//print(100,200);
	//print(100,200,300);
	print(100,200,300,400);
	return 0;
}

void print(int a,int b,int c,int d)
{
	cout<<"\n A : "<<a;
	cout<<"\n B : "<<b;
	cout<<"\n C : "<<c;
	cout<<"\n D : "<<d;
}
