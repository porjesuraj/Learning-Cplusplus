//============================================================================
// Name        : Day3_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Point
{
private:
	int x,y;
public:
	Point():x(10),y(20)
	{}

	Point(int n1,int n2 ): x(n1), y(n2)
	{}

	/*
	//partial constructor initializer list
	Point(int n1,int n2 ): x(n1)
		{
			y=n2;
		}
	 */


	void print();
};

void Point:: print()
{
	cout<<" \n X : "<<this->x;
	cout<<" \n Y : "<<this->y;
}

int main()
{
	Point p1;
	p1.print();

	Point p2(30,40);
	p2.print();

	return 0;
}


/*
class Point
{
private:
	int x,y;
public:
	Point();
	Point(int x,int y);
	void print();
};

Point::Point()
{
	this->x=10;
	this->y=20;
}
Point::Point(int x,int y)
{
	this->x=x;
	this->y=y;
}
void Point:: print()
{
	cout<<" \n X : "<<this->x;
	cout<<" \n Y : "<<this->y;
}

int main()
{
	Point p1;
	p1.print();

	Point p2;
	p2.print();

	return 0;
}

*/
