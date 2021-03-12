//============================================================================
// Name        : Day1_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>

using namespace std;


int main()
{

	int num1=10,num2=50;
	cout<<setw(8)<<num1<<setw(8)<<num2<<endl;
	float f_val=20.145;
	cout<<setprecision(4.3)<<f_val;
	cout<<"\n";
	cout<<"Num 1 : "<<num1<<"\t"<<" Num2: "<<num2;
	// \t , \b, \n , \\ , \" , \,//escape sequences

	cout<<"\n Hex Format : "<<setbase(16)<<num1;
	cout<<"\n Hex Format : "<<hex<<num1;

	cout<<"\n OCTAL Format : "<<setbase(8)<<num1;
	cout<<"\n OCTAL  Format : "<<oct<<num1;

	cout<<"\n DECIMAL  Format : "<<setbase(10)<<num1;
	cout<<"\n DECIMAL  Format : "<<dec<<num1;


	int val=50;
	cout<<"\n Value : "<<setw(10)<<setfill('#')<<val;






	return 0;
}
