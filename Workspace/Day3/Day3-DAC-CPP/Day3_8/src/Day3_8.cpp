//============================================================================
// Name        : Day3_8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,4,5},i;
	try
	{
		i=0;
		while(1)
			{
				if(i!=5)
				{
					cout<<a[i]<<endl;
					i++;
				}
				else
					throw i;
			}
	}
	catch(int i)
	{
		cout<<"Array Index out of Bounds Exception: "<<i<<endl;
	}











	return 0;
}
