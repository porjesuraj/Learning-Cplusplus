/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

class shape {
public:
	virtual void accept()=0;
	virtual void display()=0;
	virtual float calc_area()=0;
	virtual float calc_peri()=0;
};

class square : public shape {
private:
	float side;
public:
	square() {
		this->side = 0;
	}
	square(float side) {
		this->side = side;
	}
	int get_side() {
		return this->side;
	}
	void set_side(float side) {
		this->side = side;
	}
	void accept() {
		cout << "side: ";
		cin >> this->side;
	}
	void display() {
		cout << "side: " << this->side << endl;
	}
	float calc_area() {
		return this->side * this->side;
	}
	float calc_peri() {
		return 4 * this->side;
	}
};

class circle : public shape {
private:
	float radius;
public:
	circle() {
		this->radius = 0;
	}
	circle(float radius) {
		this->radius = radius;
	}
	int get_radius() {
		return this->radius;
	}
	void set_radius(float radius) {
		this->radius = radius;
	}
	void accept() {
		cout << "radius: ";
		cin >> this->radius;
	}
	void display() {
		cout << "radius: " << this->radius << endl;
	}
	float calc_area() {
		return 3.142 * this->radius * this->radius;
	}
	float calc_peri() {
		return 2 * 3.142 * this->radius;
	}
};

float calc_total_area(shape* arr[], int n) {
	int i;
	float sum = 0.0;
	for (i = 0; i < n; ++i)
		sum += arr[i]->calc_area();
	return sum;
}

float calc_total_peri(shape* arr[], int n) {
	int i;
	float sum = 0.0;
	for (i = 0; i < n; ++i)
		sum += arr[i]->calc_peri();
	return sum;
}

int main() {
	shape* arr[3];
	int i, option;

	for (i = 0; i < 3; ++i) {
		cout << "\n1. circle\n2. square\nenter option: ";
		cin >> option;
		switch (option) {
		case 1:
			arr[i] = new circle;
			break;
		case 2:
			arr[i] = new square;
			break;
		}
		arr[i]->accept();
	}

	cout << "total area: " << calc_total_area(arr, 3) << endl;
	cout << "total peri: " << calc_total_peri(arr, 3) << endl;

	for (i = 0; i < 3; ++i)
		delete arr[i];
	return 0;
}



