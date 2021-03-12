/*
 * salesman.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

#include "salesman.h"

salesman::salesman() {
	this->comm = 0.0f;
}

/*
salesman::salesman(int id, float sal, float comm) {
	this->comm = comm;
	this->set_id(id);
	this->set_sal(sal);
}
*/

salesman::salesman(int id, float sal, float comm)
	:employee(id, sal) {
	this->comm = comm;
}

float salesman::get_comm() {
	return this->comm;
}
void salesman::set_comm(float comm) {
	this->comm = comm;
}

/*
void salesman::display() {
	cout << "id: " << this->get_id() << endl;
	cout << "sal: " << this->get_sal() << endl;
	cout << "comm: " << this->comm << endl;
}
*/

void salesman::accept() {
	employee::accept();
	cout << "comm: ";
	cin >> this->comm;
}

void salesman::display() {
	employee::display();
	cout << "comm: " << this->comm << endl;
}

float salesman::calc_income() {
	return this->get_sal() + this->comm;
}

salesman::~salesman() {
}

