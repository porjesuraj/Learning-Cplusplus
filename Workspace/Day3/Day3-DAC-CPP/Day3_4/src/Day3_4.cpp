//============================================================================
// Name        : Day3_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


/*
int& test()
{
	int a=20;
	int &r=a;
	return r;
}
*/


//this will give exit-value -1

int& getNumber( void )
{
	int num1 = 10;
	return num1;

}
int main( void )
{
	int &num2 = ::getNumber();
	//num2 will become Dangling reference
	cout<<"Number : "<<num2<<endl;


	return 0;
}


/*
int* getNumber( void )
{
	static int number = 10;
	return &number;
}

int main( void )
{
	int *ptr = ::getNumber();
	cout<<"Number : "<<*ptr<<endl;
	return 0;
}

*/




/*

int* getNumber( void )
{
	int number = 10;
	return &number;
}

int main( void )
{
	int *ptr = ::getNumber();
	cout<<"Number : "<<*ptr<<endl;
	return 0;
}
*/

