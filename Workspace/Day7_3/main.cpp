/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

#pragma pack(1)

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

class B: public virtual A {
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
protected:
	void display_b() {
		cout << "b = " << this->b << endl;
	}
};

class C: public virtual A {
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
protected:
	void display_c() {
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
		:A(a), B(a, b), C(a, c) {
		this->d = d;
	}
	void display() {
		A::display();
		B::display_b();
		C::display_c();
		cout << "d = " << this->d << endl;
	}
};

int main() {
	/*
	cout << "sizeof(A) = " << sizeof(A) << endl;
	cout << "sizeof(B) = " << sizeof(B) << endl;
	cout << "sizeof(C) = " << sizeof(C) << endl;
	cout << "sizeof(D) = " << sizeof(D) << endl;
	*/
	//D obj1;

	D obj2(10, 20, 30, 40);
	/*
	cout << "obj2.d = " << obj2.d << endl;
	cout << "obj2.c = " << obj2.c << endl;
	cout << "obj2.b = " << obj2.b << endl;
	cout << "obj2.a = " << obj2.a << endl; // no ambiguity error
	*/
	obj2.display();

	//C obj;
	//obj.display_c(); // error
	//obj.display();
	return 0;
}




