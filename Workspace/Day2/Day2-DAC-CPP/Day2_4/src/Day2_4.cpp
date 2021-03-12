//============================================================================
// Name        : Day2_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*

int main()
{
	int a=10;
	int &r =a; //r is reference which is having capability to store the address of variable a
	cout<<"a : "<<a <<" &a : "<<&a;
	cout<<"\n r : "<<r <<" &r : "<<&r;

	a++;
	cout<<"\n a : "<<a <<" &a : "<<&a;
	cout<<"\n r : "<<r <<" &r : "<<&r;

	r++;
	cout<<"\n a : "<<a <<" &a : "<<&a;
		cout<<"\n r : "<<r <<" &r : "<<&r;


	return 0;
}
*/


void swap_by_val(int a,int b);
void swap_by_add(int &a,int &b);
void swap_by_ref(int *a,int *b);

int main()
{
	int n1=10,n2=5;
	cout<<"\n Swap_by_val Before : "<<n1<<"   "<<n2;
	swap_by_add(n1,n2); //actual argument
	cout<<"\n Swap_by_val After : "<<n1<<"   "<<n2;

	cout<<"\n Swap_by_val Before : "<<n1<<"   "<<n2;
		swap_by_ref(&n1,&n2); //actual argument
		cout<<"\n Swap_by_val After : "<<n1<<"   "<<n2;


	return 0;
}

void swap_by_val(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap_by_add(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


void swap_by_ref(int *a,int *b)
{
	int temp;
	temp=*a;
		*a=*b;
		*b=temp;
}

