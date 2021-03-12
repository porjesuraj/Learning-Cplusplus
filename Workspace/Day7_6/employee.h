/*
 * employee.h
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class employee {
private:
	int id;
	float sal;
public:
	employee();
	employee(int id, float sal);
	virtual void accept();
	virtual void display();
	int get_id();
	void set_id(int id);
	float get_sal();
	void set_sal(float sal);
	virtual float calc_income();
	~employee();
};

#endif /* EMPLOYEE_H_ */
