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

/*int *ptr = new int[3];

ptr[0] = 1;
ptr[2] = 3;

cout<<sizeof(*ptr)<<endl;
cout<<sizeof(ptr)<<endl;
cout<<ptr[0]<<ptr[2]<<endl;

	cout<<*ptr;
	delete[] ptr;*/

	int count = 0;
	int **ptr = new int*[3];

	for(int index = 0; index < 3 ; index++)
	{
		ptr[index] = new int[3];

	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3 ; j++)
		{
			ptr[i][j] = ++count;
		}
	}

	for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 3 ; j++)
			{
				cout<<ptr[i][j]<< "," ;
			}
			cout<<endl;
		}

	for(int ind = 0 ; ind < 3 ; ++ ind)
	{
		delete[] ptr[ind];
	}
	delete [] ptr;

	ptr = NULL;




	return 0;
}
