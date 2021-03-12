//============================================================================
// Name        : Day1_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	//5+3=8;//error: lvalue required as left operand of assignment
	//8=8; //error: lvalue required as left operand of assignment

	const int number = 10;
	//number = number + 5; //Error - L-Value Required

	//struct = a;

	//int b;
	//b[1]=10;

	int num=10;
	int *ptr;
	*ptr=&num;



	return 0;
}



/*

int main()
{
	// Single line comments

	 * Multiline comments


	wchar_t w[]=L"SunbeamPune";
	wcout<<w;
	return 0;
}
*/


/*

int main()
{
	//bool b=false;
	//cout<<b;

	char ch='A';
	wchar_t w=L'61';//declaration and definition
	wchar_t w1;
	cout<<"Enter wchar_t value ";
	wcin>>w1; // Input : A
	cout<<w1;  //output : 65
	wcout<<"\n"<<w1; // Output : A
	wcout<<"\n W : "<<w;

	cout<<"Value of wchar_t variable "<<w;
	cout<<"\n Size of wchar_t variable "<<sizeof(w);
	wcout<<"\n Value of wchar_t variable in char format "<<w;
	cout<<"\n Value of normal char variable "<<ch;

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//<< inssertion operator
	return 0;
}
*/
