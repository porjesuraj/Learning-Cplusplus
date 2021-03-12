//============================================================================
// Name        : Day3_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test
{
private:
	int num; //non constant data member
	const int c; //constant data member
	mutable int m; //mutable data member
public:
	Test() : c(100), num(10),m(30)
		{
			// this->c=20; //not allowed
		}
	Test(int n1, int c1 ,int m1): num(n1),c(c1) , m(m1)
	{}
	void print() const; //constant member function
};


void Test::print() const
{
	cout<<" \n Num "<<this->num;
	//num was initially non constant , but when we access it inside
	//constant member function it is converted to const
	//num++;//error: increment of member ‘Test::num’ in read-only object
	//cout<<"\n Num "<<this->num;
	cout<<"\n Constant Value "<<this->c;
	cout<<"\n Mutable Value "<<this->m;
	m++; //allowed because of its mutable in nature
	cout<<"\n After increament Mutable Value : "<<this->m;

}


int main()
{
	Test t;
	t.print();
	Test t1(2,200,40);
	t1.print();
	return 0;
}




/*
class Test
{
private:
	int num; //non constant data member
	const int c; //constant data member
public:
	Test() : c(100), num(10)
		{
			// this->c=20; //not allowed
		}
	Test(int n1, int c1): num(n1),c(c1)
	{}
	void print() const; //constant member function
};


void Test::print() const
{
	cout<<" \n Num "<<this->num;
	//num was initially non constant , but when we access it inside
	//constant member function it is converted to const
	//num++;//error: increment of member ‘Test::num’ in read-only object
	//cout<<"\n Num "<<this->num;
	cout<<"\n Constant Value "<<this->c;
}


int main()
{
	Test t;
	t.print();
	Test t1(2,200);
	t1.print();
	return 0;
}
*/



/*

class Constant_demo
{
private:
	const int c;//allowed in C++
public:
	//constant definition using constructor initializer list
	Constant_demo():c(100)
	{}


	 *  This will give error
	 * Constant_demo()
	{
		c=100; //error: assignment of read-only member ‘Constant_demo::c’
	}

	void print()
	{
		cout<<"Constant Value : "<<c;
		//c++; //error: increment of read-only member ‘Constant_demo::c’
	}
};

int main()
{
	Constant_demo cobj;
	cobj.print();
	return 0;
}

*/


/*
class Constant_demo
{
private:
	const int c=10;//declared and defined the const
public:
	Constant_demo()
	{}
	void print()
	{
		cout<<"Constant Value : "<<c;
		//c++; //error: increment of read-only member ‘Constant_demo::c’
	}
};

int main()
{
	Constant_demo cobj;
	cobj.print();
	return 0;
}
*/
