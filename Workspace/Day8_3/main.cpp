/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;


class X {
private:
	int x;
public:
	X() {
		x = 10;
	}
	void display() {
		cout << "x = " << x << endl;
	}
};

void my_func(const int *p) {
	//*p = 20; //error: p is pointer to const int & hence cannot modify int.
	int *q = const_cast<int*>(p);
	*q = 20; //allowed.
}

class A {
public:
	virtual void fa() {
		cout << "A::fa() called" << endl;
	}
};

class B: public A {
public:
	void fb() {
		cout << "B::fb() called" << endl;
	}
};

void call_fb_static(A *p) {
	//B *pb = p; // error: downcasting is not allowed by compiler
	B *pb = static_cast<B*>(p);
	pb->fb();
}

void call_fb_dynamic(A *p) {
	B *pb = dynamic_cast<B*>(p);
	if(pb != NULL)
		pb->fb();
	else
		cout << "invalid cast" << endl;
}

int main() {
	B objB;
	//call_fb_static(&objB);
	call_fb_dynamic(&objB);
	A objA;
	call_fb_dynamic(&objA);
	/*
	X obj;
	int *p;
	obj.display();
	//p = &obj; // error: cannot convert from X* to int*.
	p = reinterpret_cast<int*>(&obj);
	*p = 20;
	obj.display();
	*/

	/*
	int a = 10;
	my_func(&a);
	cout << "a = " << a << endl;
	*/

	/*
	A *pa = new B;
	call_fb_static(pa);
	call_fb_dynamic(pa);
	*/
	return 0;
}


