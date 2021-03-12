/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */
#include <iostream>
using namespace std;

class complex {
private:
	int real;
	int imag;
public:
	complex() {
		this->real = 0;
		this->imag = 0;
	}
	complex(int real, int imag) {
		this->real = real;
		this->imag = imag;
	}
	// getters/setters
	void display() {
		cout << this->real << showpos << this->imag << "i" << noshowpos << endl;
	}
	complex operator+(complex& other) {
		complex res;
		res.real = this->real + other.real;
		res.imag = this->imag + other.imag;
		return res;
	}

	bool operator==(complex& other) {
		if(this->real == other.real && this->imag == other.imag)
			return true;
		return false;
	}

	friend complex operator-(complex &x, complex &y);
	friend ostream& operator<<(ostream& out, complex& c);
	friend istream& operator>>(istream& in, complex& c);
};

complex operator-(complex &x, complex &y) {
	complex res;
	res.real = x.real - y.real;
	res.imag = x.imag - y.imag;
	return res;
}

ostream& operator<<(ostream& out, complex& c) {
	out << c.real << showpos << c.imag << "i" << noshowpos;
	return out;
}

istream& operator>>(istream& in, complex& c) {
	cout << "enter real & imag: ";
	in >> c.real >> c.imag;
	return in;
}

int main() {
	complex c1(2, 3);
	complex c2(3, 4);
	cout << "c1 = ";
	c1.display();
	cout << "c2 = ";
	c2.display();

	complex c3;
	c3 = c2 + c1;
		// c3 = c2.operator+(c1);
	cout << "c3 = ";
	c3.display();

	c3 = c2 - c1;
		// c3 = operator-(c2, c1);
	cout << "c3 = ";
	c3.display();

	if(c1 == c2) // c1.operator==(c2)
		cout << "c1 is same as c2" << endl;
	else
		cout << "c1 is not same as c2" << endl;

	complex c5(11, 22);
	complex c6;
	c6 = c5;
	cout << "c6 = ";
	c6.display();

	cout << c1; // operator<<(cout, c1);
	cout << endl;

	cout << c1 << c2; // operator<<( operator<<(cout,c1), c2);
	cout << endl;

	cout << c1 << ", " << c2;
		// operator<<( operator<<(cout,c1).operator<<(", ") , c2);
	cout << endl;
		// endl(cout);
	cout << c1 << ", " << c2 << endl;
		// endl( operator<<( operator<<(cout,c1).operator<<(", "), c2 ) );

	complex c7;
	cin >> c7;
	cout << "c7 = " << c7 << endl;

	//ostream out; //error: constructor is protected.
	//out = cout; //error: assign operator is protected.
	return 0;
}



