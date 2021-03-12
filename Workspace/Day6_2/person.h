/*
 * person.h
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "date.h"

class person {
private:
	char name[20];
	date birth;
public:
	person();
	person(const char *name, int birth_day, int birth_month, int birth_year);
	person(const char *name, date& birth);
	void accept();
	void display();
	void set_name(const char *name);
	const char* get_name();
	void set_birth(date& birth);
	date get_birth();
	~person();
};

#endif /* PERSON_H_ */
