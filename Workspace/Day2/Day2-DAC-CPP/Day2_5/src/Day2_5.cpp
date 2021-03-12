//============================================================================
// Name        : Day2_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

namespace na
{
	int num1=10;
	namespace nb
	{
		int num1=100;
		int num2=30;
	}
}
int main()
{
	cout<<"\n NA :: num1 : "<<na::num1<<" Address num1 : "<<&na::num1;

	cout<<"\n num1 from nb : "<< na::nb::num1;
	cout<<"\n num2 from nb : "<< na::nb::num2;
	return 0;
}





/*
namespace na
{
class Test
{
public:
	void print()
	{
		cout<<"\n Inside Test class print()";
	}
};
}
int main()
{
	using namespace na;
	Test t;
	t.print();
	return 0;
}
*/


/*

namespace na
{
	int val1=300;
}

int main()
{
	//int val1=20;
	//cout<<"\n Val1 : "<<val1;

	// first way to access namespace variables is by using scope resolution operator
	//cout<<"\n Val 1 "<<na::val1;

	// 2nd way is by using namespace directive
	using namespace na;
	cout<<"\n Val1 : "<<val1;

	return 0;
}

*/
/*
int num1=40; // global variable

namespace na
{
	int num1=100;
}

namespace nb
{
	int num1=200;
}
namespace na
{
	int num2=80;
}


int main()
{
	int num1=30;

	cout<<"\n Local Variable : "<<num1;
	cout<<"\n Global Variable : "<<::num1;
	cout<<"\n Name Space NA :: num1  : "<<na::num1;
	cout<<"\n Name Space NB :: num1  : "<<nb::num1;
	cout<<"\n Name Space NA :: num2  : "<<na::num2;


	return 0;
}
*/
