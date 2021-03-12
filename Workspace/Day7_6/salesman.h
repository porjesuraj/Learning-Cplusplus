/*
 * salesman.h
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#ifndef salesman_H_
#define salesman_H_

#include "employee.h"

class salesman : public employee {
private:
	float comm;
public:
	salesman();
	salesman(int id, float sal, float comm);
	float get_comm();
	void set_comm(float comm);
	void accept();
	void display();
	float calc_income();
	~salesman();
};

#endif /* salesman_H_ */
