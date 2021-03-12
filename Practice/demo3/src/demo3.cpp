//============================================================================
// Name        : demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
# include <memory>
using namespace std;


int main() {
/*
	auto_ptr<int> autoPointer(new int());

	*autoPointer = 10;
cout<<"Value : " <<*autoPointer<<endl;*/

	int* ptr = new int[3];
	cout<<"value" <<*ptr<<endl;
	cout<<"address"<< ptr<<endl;



	return 0;
}
