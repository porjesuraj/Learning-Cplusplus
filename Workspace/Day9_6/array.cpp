/*
 * array.cpp
 *
 *  Created on: 06-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "array.h"

array::array(int len) {
	this->len = len;
	this->arr = new int[len];
	for (int i = 0; i < this->len; i++)
		this->arr[i] = 0;
}

array::array(array& other) {
	this->len = other.len;
	this->arr = new int[len];
	for (int i = 0; i < len; ++i)
		this->arr[i] = other.arr[i];
}

array& array::operator=(array& other) {
	delete[] this->arr;
	this->len = other.len;
	this->arr = new int[len];
	for (int i = 0; i < len; ++i)
		this->arr[i] = other.arr[i];
	return *this;
}


array::~array() {
	delete[] this->arr;
	this->arr = NULL;
}

void array::accept() {
	cout << "enter " << this->len << " elements." << endl;
	for (int i = 0; i < this->len; i++)
		cin >> this->arr[i];
}

void array::display() {
	cout << "array: ";
	for (int i = 0; i < this->len; i++)
		cout << this->arr[i] << ", ";
	cout << endl;
}

int array::get(int index) {
	if(index < 0 || index >= this->len)
		throw index;
	return this->arr[index];
}

void array::set(int index, int ele) {
	if(index < 0 || index >= this->len)
		throw index;
	this->arr[index] = ele;
}

int& array::operator[](int index) {
	if(index < 0 || index >= this->len)
		throw index;
	return this->arr[index];
}

