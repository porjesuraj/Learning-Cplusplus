//============================================================================
// Name        : Day2_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

void test_global()
{
	cout<<"inside test global function ";
}

int main()
{
	::test_global();
	return 0;
}


/*

#include <iostream>
//using namespace std;

int main()
{
	std::cout<<"test cout";
	return 0;
}
*/




/*
class Complex
{
private:
	int real;
	int imag;
public:
	void accept();
	void disp();

};

// :: Scope resolution operator

void Complex :: accept()
{
		cout<<"\n Enter the real value ";
		cin>>real;
		cout<<"\n Enter the Imag value ";
		cin>>imag;

	}

void Complex ::disp()
{
	cout<<"\n Real value "<<real;
	cout<<"\n Imag value "<<imag;

}

int main()
{
	Complex c1; //object creation
	//cout<<"\n Size of Class : "<<sizeof(Complex);
	//cout<<"\n Size of Class : "<<sizeof(c1);
	//accept(); //error: ‘accept’ was not declared in this scope
	c1.accept();
	c1.disp();

	return 0;
}
*/





/*

class Complex
{
private:
	int real;
	int imag;
public:
	void accept()
	{
		cout<<"\n Enter the real value ";
		cin>>real;
		cout<<"\n Enter the Imag value ";
		cin>>imag;

	}
	void disp()
	{
		cout<<"\n Real value "<<real;
		cout<<"\n Imag value "<<imag;

	}
};

int main()
{
	Complex c1; //object creation
	//cout<<"\n Size of Class : "<<sizeof(Complex);
	//cout<<"\n Size of Class : "<<sizeof(c1);
	//accept(); //error: ‘accept’ was not declared in this scope
	c1.accept();
	c1.disp();

	return 0;
}
*/
