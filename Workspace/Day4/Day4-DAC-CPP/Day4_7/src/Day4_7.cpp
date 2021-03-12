//============================================================================
// Name        : Day4_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;


class Test
{

public:
	static void sum(int n1,int n2)
	{
		cout<<"Addition "<<n1+n2;
	}
};

int main()
{

	Test::sum(10,5);
	return 0;
}







/*
class Product
{
	string name;
	static int price;
public:
	Product(string name)
	{
		this->name=name;
	}
	void print()
	{
		cout<<"\n Name : "<<this->name<<" Price "<<this->price;
	}
	void set_price(int price)
	{
		this->price=price;
	}

};

//initializing static data member outside the class using ::
int Product ::price=3000;

int main()
{
	Product p("Book");
	//p.set_price(2500);
	p.print();
	return 0;
}
*/
