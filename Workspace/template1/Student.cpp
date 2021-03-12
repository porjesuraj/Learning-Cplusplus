/*
 * Student.cpp
 *
 *  Created on: 06-Apr-2020
 *      Author: nilesh
 */

#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

Student::Student() {
	roll = 0;
	strcpy(name, "");
}

Student::Student(int r, const char *n) {
	roll = r;
	strcpy(name, n);
}

void Student::display() {
	cout << roll << ", " << name << endl;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

