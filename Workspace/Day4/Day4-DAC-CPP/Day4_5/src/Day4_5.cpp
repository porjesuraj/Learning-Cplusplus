//============================================================================
// Name        : Day4_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	//int arr[5]; //static memory allocation
	int size;
	cout<<"\n Enter How many number of values to enter in an array ";
	cin>>size;

	int *arr=new int[size];
	int i;
	//int *ptr = ( int* )::operator new( sizeof( int ) * size );

	for(i=0;i<size;i++)
	{
		cout<<"\n Enter Elements of Array ";
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		cout<<"\n Elements of Array : ";
		cout<<arr[i];
	}

	delete [] arr; // free(ptr) in case of C //deallocate memory of arraay
	arr=NULL; //to avoid memory leakage and dangling pointer

	return 0;
}


/*int main()
{

	int *ptr=new int;
	//int *ptr = ( int* )::operator new( sizeof( int ) * 1 );
	*ptr=50;
	cout<<" \n ptr value = "<<*ptr; //dereferencing
	delete ptr; // free(ptr) in case of C
	ptr=NULL;


	int num=100;
	int *ptr=&num; //referencing
	cout<<*ptr; //dereferencing


	return 0;
}*/
