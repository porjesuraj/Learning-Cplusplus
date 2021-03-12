/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: nilesh
 */
#include <iostream>
using namespace std;
#include "employee.h"
#include "manager.h"
#include "salesman.h"

/*
int main() {
	int option;
	employee *ptr;

	cout << "1. employee\n2. manager\n3. salesman\nenter option: ";
	cin >> option;
	switch (option) {
		case 1:
			ptr = new employee;
			break;
		case 2:
			ptr = new manager;
			break;
		case 3:
			ptr = new salesman;
			break;
	}
	ptr->accept();
	ptr->display();

	cout << "salary : " << ptr->get_sal() << endl;
	cout << "income : " << ptr->calc_income() << endl;

	delete ptr;
	return 0;
}
 */

int main() {
	int option, i;
	employee* arr[5];
	float sum;

	for(i=0; i<5; i++)
	{
		cout << "1. employee\n2. manager\n3. salesman\nenter option: ";
		cin >> option;
		switch (option) {
		case 1:
			arr[i] = new employee;
			break;
		case 2:
			arr[i] = new manager;
			break;
		case 3:
			arr[i] = new salesman;
			break;
		}
		arr[i]->accept();
	}

	for(i=0; i<5; i++)
		arr[i]->display();

	sum = 0.0;
	for(i=0; i<5; i++)
		sum = sum + arr[i]->get_sal();
	cout << "total salary of all emps: " << sum << endl;

	sum = 0.0;
	for(i=0; i<5; i++)
		sum = sum + arr[i]->calc_income();
	cout << "total income of all emps : " << sum << endl;

	for(i=0; i<5; i++)
		delete arr[i];
	return 0;
}



