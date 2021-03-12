/*
 * manager.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

#include "manager.h"

manager::manager() {
	this->bonus = 0.0f;
}

/*
manager::manager(int id, float sal, float bonus) {
	this->bonus = bonus;
	this->set_id(id);
	this->set_sal(sal);
}
*/

manager::manager(int id, float sal, float bonus)
	:employee(id, sal) {
	this->bonus = bonus;
}

float manager::get_bonus() {
	return this->bonus;
}
void manager::set_bonus(float bonus) {
	this->bonus = bonus;
}

/*
void manager::display() {
	cout << "id: " << this->get_id() << endl;
	cout << "sal: " << this->get_sal() << endl;
	cout << "bonus: " << this->bonus << endl;
}
*/

void manager::display() {
	//this->display();
	employee::display();
	cout << "bonus: " << this->bonus << endl;
}


manager::~manager() {
}

