/*
 * test_impl.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
using namespace std;
#include "test.h"

Employee::Employee()
{
	cout<<"\n Inside Parameteless constructor";
	this->id=1;
	this->salary=50000;

}

Employee::Employee(int id,int salary)
{
	cout<<"\n Inside Paramatrized constructor";
	this->id=id;
	this->salary=salary;

}

void Employee::display()
{
	cout<<" \n ID : "<<this->id;
	cout<<" \n Salary : "<<this->salary;
}

