/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: nilesh
 */
#include <iostream>
#include <typeinfo>
using namespace std;

class A {
public:
	void fun() {
	}
};

class B: public A {
};

class C: public A {
};


class X {
public:
	virtual void fun() {
	}
};

class Y: public X {
};

class Z: public Y {
};

int main() {
	A *p = new B;
	const type_info &t1 = typeid(p);
	cout << "typeid(p) = " << t1.name() << endl;
	const type_info &t2 = typeid(*p);
	cout << "typeid(*p) = " << t2.name() << endl;
	if(t2 == typeid(A))
		cout << "t2 is showing class A" << endl;
	else
		cout << "t2 is not showing class A" << endl;

	X *px = new Y;
	const type_info &t3 = typeid(px);
	cout << "typeid(p) = " << t3.name() << endl;
	const type_info &t4 = typeid(*px);
	cout << "typeid(*p) = " << t4.name() << endl;
	if(t4 == typeid(Y))
		cout << "t2 is showing class Y" << endl;
	else
		cout << "t2 is not showing class Y" << endl;

	return 0;
}




