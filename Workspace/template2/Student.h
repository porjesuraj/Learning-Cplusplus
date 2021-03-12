/*
 * Student.h
 *
 *  Created on: 06-Apr-2020
 *      Author: nilesh
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
private:
	int roll;
	char name[20];
public:
	Student();
	Student(int roll, const char *name);
	void display();
	~Student();
};

#endif /* STUDENT_H_ */
