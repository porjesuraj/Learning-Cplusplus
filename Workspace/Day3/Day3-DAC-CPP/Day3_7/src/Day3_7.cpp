//============================================================================
// Name        : Day3_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int num;
	cout<<"Enter num1";
	cin>>num;
	try
	{
		if(num>0)
			throw 1;
		else
			if(num<0)
				throw "Negative Number";
	}
	catch(int i)
	{
		cout<<"Positive Number";
	}
	catch(const char *msg)
	{
		cerr<<msg;
	}
	catch(...) //generic catch block
	{
		cout<<" Invalid ";
	}


	return 0;
}
