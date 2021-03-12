/*
 * main.cpp
 *
 *  Created on: 06-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <cstring>
using namespace std;

#include "Student.h"

// template of Swap() function
template<typename T>
void Swap(T *a, T *b) {
	T t = *a;
	*a = *b;
	*b = t;
}

// specialized template function.
void Swap(char *a, char *b) {
	char t[10];
	strcpy(t, a);
	strcpy(a, b);
	strcpy(b, t);
}

// template function for adding two different types
// this example is not ideal (only for demo)
template<typename X, typename Y>
Y add(X a, Y b) {
	return a + b;
}

int main() {
	int x=10, y=20;
	cout << "x=" << x << ", y=" << y << endl;
	Swap(&x, &y); // compiler generate Swap() for T=int
	cout << "x=" << x << ", y=" << y << endl;

	double p=1.1, q=2.2;
	cout << "p=" << p << ", q=" << q << endl;
	Swap(&p, &q); // compiler generate Swap() for T=double
	cout << "p=" << p << ", q=" << q << endl;

	Student s1(1, "A"), s2(2, "B");
	cout << "s1 = "; s1.display();
	cout << "s2 = "; s2.display();
	Swap(&s1, &s2); // compiler generate Swap() for T=Student
	cout << "s1 = "; s1.display();
	cout << "s2 = "; s2.display();

	char str1[10]="Sunbeam", str2[10]="Infotech";
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	Swap(str1, str2); // compiler call specialized template function here
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	return 0;
}


