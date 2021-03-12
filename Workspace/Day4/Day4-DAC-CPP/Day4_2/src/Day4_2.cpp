//============================================================================
// Name        : Day4_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class DivideByZeroException
{

};

class NegativeValueExeption
{
};
double divide(int num, int den)
{
	//DivideByZeroException d;
    if(den == 0)
        throw DivideByZeroException();
    	//throw d;
    if(num < 0 || den < 0)
        throw NegativeValueExeption();
    return num/den;
}

int main()
{
	int n1,n2;
	cout<<"Enter two numbers";
	cin>>n1>>n2;
	try
	{
	double result = divide(n1,n2);
	cout<<"Result : "<<result;
	}
	catch(DivideByZeroException d)
	{
		cout<<"\n Second value of number is zero...";
	}
	catch(NegativeValueExeption n)
	{
		cout<<"\n negative numerator or denominator";

	}

}






/*

int main()
{
	int num;
	cout<<"Enter num value";
	cin>>num;
	try
	{
	if(num<0)
		throw 1;
	else
		cout<<" num : "<<num;
	}
	catch(int i)
	{
		cout<<"Negative number";
	}

	return 0;
}
*/
