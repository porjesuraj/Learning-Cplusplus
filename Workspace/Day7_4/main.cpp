/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

/*
class A {
public:
	void fun(int a) {
		cout << "A::fun() called" << endl;
	}
};

class B: public A {
public:
	void fun() {
		cout << "B::fun() called" << endl;
	}
};

int main() {
	B obj;
//	obj.fun(1); // error: B's fun() hides A's fun(int).
	obj.A::fun(1);
	return 0;
}
*/

class A {
public:
	void fun(int a) {
		cout << "A::fun() called" << endl;
	}
};

class B: public A {
public:
	void fun() {
		cout << "B::fun() called" << endl;
	}
	A::fun; // redeclaration of base member into derived
};

int main() {
	B obj;
	obj.fun(1);
	return 0;
}




