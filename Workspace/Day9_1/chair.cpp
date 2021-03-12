/*
 * chair.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

#include "chair.h"

double chair::price = 2000; // static definition

chair::chair() {
	this->weight = 0;
	this->color = "";
}

chair::chair(int weight, const string& color) {
	this->weight = weight;
	this->color = color;
}

int chair::get_weight() {
	return this->weight;
}

void chair::display() {
	cout << "weight : " << this->weight << endl;
	cout << "color : " << this->color << endl;
	//cout << "price : " << this->price << endl; // allowed, but misleading
	cout << "price : " << chair::price << endl; // readable
}

string& chair::get_color() {
	return this->color;
}

double chair::get_price() {
	//this->weight=0; //not allowed -- no this pointer -- non-static members not accessible directly
	//weight=0; //not allowed (implicitly it is same as this->weight).
	/*
	chair c;
	c.weight = 0; // allowed. because accessing on object.
	*/
	return chair::price;
}

void chair::set_price(double price) {
	chair::price = price;
}

chair::~chair() {
	// TODO Auto-generated destructor stub
}

