/*
 * main.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "manager.h"

int main() {
	manager m(1, 10000.0, 200.0);
	employee *e;
	e = &m;
	cout << "id: " << e->get_id() << endl;
	cout << "sal: " << e->get_sal() << endl;
	//cout << "bonus: " << e->get_bonus() << endl; // error: object slicing

	e->display(); // emp::display();
	return 0;
}


