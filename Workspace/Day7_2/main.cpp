/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() {
		a = 1;
	}
	A(int a) {
		this->a = a;
	}
	void display() {
		cout << "a = " << this->a << endl;
	}
};

class B: public A {
public:
	int b;
	B() {
		b = 2;
	}
	B(int a, int b)
		:A(a) {
		this->b = b;
	}
	void display() {
		A::display();
		cout << "b = " << this->b << endl;
	}
};

class C: public A {
public:
	int c;
	C() {
		c = 3;
	}
	C(int a, int c)
		:A(a) {
		this->c = c;
	}
	void display() {
		A::display();
		cout << "c = " << this->c << endl;
	}
};

class D: public B, public C {
public:
	int d;
	D() {
		d = 2;
	}
	D(int a, int b, int c, int d)
		:B(a, b), C(a, c) {
		this->d = d;
	}
	void display() {
		B::display();
		C::display();
		cout << "d = " << this->d << endl;
	}
};

int main() {
	D obj1;
	D obj2(10, 20, 30, 40);
	cout << "sizeof(D) = " << sizeof(D) << endl;
	cout << "obj2.d = " << obj2.d << endl;
	cout << "obj2.c = " << obj2.c << endl;
	cout << "obj2.b = " << obj2.b << endl;
	//cout << "obj2.a = " << obj2.a << endl; // error: a is ambigous
	cout << "obj2.B::a = " << obj2.B::a << endl;
	cout << "obj2.C::a = " << obj2.C::a << endl;

	obj2.display();
	return 0;
}




