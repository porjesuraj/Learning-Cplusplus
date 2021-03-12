//============================================================================
// Name        : demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum E
{
	eNumber = 10

};


 void print(const int num)
{
	 cout<<"const n : " << num <<endl;

}
 void print(E num)
{
	 cout<<" E num  " << num <<endl;
}



int main() {


print(10);

const int num = 12;
print(num);

print(eNumber);
	return 0;
}
