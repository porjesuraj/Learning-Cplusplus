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

	//long long *ptr = new long long;
	//long long num1;
	//int *ptr = new int;
//int *ptr = new int(3);
//ptr = &num1;
	//*ptr = 100;

	try {
		int count = 10000000000000000000;
		int *ptr = new (nothrow) int[count];

		if(ptr != NULL)
		cout<<"Ptr "<< ptr<<endl;
		else
			cout<<"Ptr : NULL "<<endl;

	} catch (bad_alloc &e) {

		cout << e.what()<<endl;
	}








	return 0;
}
