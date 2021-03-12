/*
 * date.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "date.h"

date::date() {
	cout << "date() called" << endl;
	this->day = 1;
	this->month = 1;
	this->year = 1990;
}

date::date(int day, int month, int year) {
	cout << "date(int,int,int) called" << endl;
	this->day = day;
	this->month = month;
	this->year = year;
}

void date::accept() {
	cout << "date: ";
	int day, month, year;
	cin >> day >> month >> year;
	this->set_day(day);
	this->set_month(month);
	this->set_year(year);
}
void date::display() {
	cout << this->day << "-" << this->month << "-" << this->year << endl;
}
void date::set_day(int day) {
	if(day < 1 || day > 31)
		throw day;
	this->day = day;
}
void date::set_month(int month) {
	if(month < 1 || month > 12)
		throw month;
	this->month = month;
}
void date::set_year(int year) {
	if(year < 0)
		throw year;
	this->year = year;
}
int date::get_day() {
	return this->day;
}
int date::get_month() {
	return this->month;
}
int date::get_year() {
	return this->year;
}


date::~date() {
	cout << "~date() called" << endl;
}

