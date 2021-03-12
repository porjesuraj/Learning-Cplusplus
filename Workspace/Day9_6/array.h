/*
 * array.h
 *
 *  Created on: 06-Mar-2020
 *      Author: nilesh
 */

#ifndef ARRAY_H_
#define ARRAY_H_

class array {
private:
	int len;
	int *arr;
public:
	array(int len);
	array(array& other);
	array& operator=(array& other);
	~array();
	void accept();
	void display();
	int get(int index);
	void set(int index, int ele);
	int& operator[](int index);
};

#endif /* ARRAY_H_ */
