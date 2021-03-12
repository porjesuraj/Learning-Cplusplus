//============================================================================
// Name        : Day3_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int age;
	cout<<"Enter the age";
	cin>>age;
	try
	{
		if(age>18)
			cout<<"\n Access Granted";
		else
			throw 1.2;// 1.2 is considered as doble value
		cout<<" End of code"; // if exception occurs this statement will never gets executed
	} //end of try


	catch(float i)
	{
		cout<<"\n Wrong age entered";
	}
	catch(double i)
		{
			cout<<"\n double catch block :Wrong age entered";
		}
	catch(...)
			{
				cout<<"This is generic block... age is entered wrong";
			}



	return 0;
}
