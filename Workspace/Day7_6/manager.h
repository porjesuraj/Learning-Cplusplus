/*
 * manager.h
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include "employee.h"

class manager : public employee {
private:
	float bonus;
public:
	manager();
	manager(int id, float sal, float bonus);
	float get_bonus();
	void set_bonus(float bonus);
	void accept();
	void display();
	float calc_income();
	~manager();
};

#endif /* MANAGER_H_ */
