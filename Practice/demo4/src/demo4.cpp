//============================================================================
// Name        : demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
# include <memory>
#include <string>
using namespace std;

class test{
public:
	 int a;
public:
	test(int a):a(a){

	}

};
int main() {
/*
	auto_ptr<int> autoPointer(new int());

	*autoPointer = 10;
cout<<"Value : " <<*autoPointer<<endl;*/

	int* ptr = new int[3];
	cout<<"value" <<*ptr<<endl;
	cout<<"address"<< ptr<<endl;

	string ex("Welcome");
string("Welcome");
	cout<<ex;

	test t1(1);

cout<<t1.a;


	return 0;
}
