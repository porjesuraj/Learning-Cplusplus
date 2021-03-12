/*
 * person.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
#include <cstring>
using namespace std;
#include "person.h"

person::person() {
	cout << "person() called" << endl;
	strcpy(this->name, "");
}
/*
person::person(const char *name, int birth_day, int birth_month, int birth_year) {
	cout << "person(char*,int,int,int) called" << endl;
	strcpy(this->name, name);
	birth.set_day(birth_day);
	birth.set_month(birth_month);
	birth.set_year(birth_year);
}
*/
person::person(const char *name, int birth_day, int birth_month, int birth_year)
	:birth(birth_day, birth_month, birth_year) {
	cout << "person(char*,int,int,int) called" << endl;
	strcpy(this->name, name);
}
person::person(const char *name, date& birth) {
	cout << "person(char*,date) called" << endl;
	strcpy(this->name, name);
	this->birth = birth;
}
void person::accept() {
	char name[20];
	cout << "name: ";
	cin >> name;
	this->set_name(name);
	cout << "birth ";
	this->birth.accept();
}
void person::display() {
	cout << "name: " << this->name << endl;
	cout << "birth date: ";
	this->birth.display();
}
void person::set_name(const char *name) {
	if(strlen(name) == 0)
		throw "name can't be blank";
	strcpy(this->name, name);
}
const char* person::get_name() {
	return this->name;
}
void person::set_birth(date& birth) {
	this->birth = birth;
}
date person::get_birth() {
	return this->birth;
}

person::~person() {
	cout << "~person() called" << endl;

}

