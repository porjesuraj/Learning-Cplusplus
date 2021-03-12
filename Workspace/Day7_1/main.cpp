/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

class X {
public:
	void f1() {
		cout << "X::f1() called" << endl;
	}
};

class Y {
public:
	void f1() {
		cout << "Y::f1() called" << endl;
	}
};

class Z: public X, public Y {

};

int main() {
	Z obj;
	//obj.f1(); //error: f1() call is ambiguous
	obj.X::f1();
	obj.Y::f1();
	return 0;
}


