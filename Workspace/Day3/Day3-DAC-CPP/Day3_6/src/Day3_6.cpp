//============================================================================
// Name        : Day3_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double division(int a, int b)
{
	if( b == 0 )
	{
			throw "Division by zero condition!";
	}
	return (a/b);
}


int main ()
{
	int x,y;
	cout<<"Enter value 1 :";
	cin>>x;
	cout<<"\n Enter value 2 :";
	cin>>y;
	double z = 0;
	try
	{
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

return 0;
}

/*
int main()
{
	int n1,n2;
	int res;
	cout<<"\n Enter First Number value : ";
	cin>>n1;

	cout<<"\n Enter Second Number value : ";
	cin>>n2;

	try
	{
		if(n2==0)
			throw 1;
		else
		{
			res=n1/n2;
			cout<<"\n Result = "<<res;
		}

	}
	catch(int i)
	{
		cout<<"Second Number value is zero";
	}

	return 0;
}
*/


