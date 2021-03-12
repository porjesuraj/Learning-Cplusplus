/*
 * main.cpp
 *
 *  Created on: 06-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "array.h"


int main() {
	/*
	array obj1(5);
	array obj2 = obj1;
	obj1.display();
	obj2.display();

	array obj3(3);
	obj3.display();
	obj3 = obj1; // obj3.operator=(obj1);
	obj3.display();
	*/

	int i;
	array obj(5);
	/*
	for(i=0; i<5; i++)
		obj.set(i, 10);
	for(i=0; i<5; i++)
		cout << obj.get(i) << endl;
	*/

	/*
	int y = 22;
	obj[2] = y;
		// obj.operator[](2) = y;
	int x = obj[2];
		// x = obj.operator[](2);
	cout << "x = " << x << endl;
	*/

	for(i=0; i<5; i++)
		obj[i] = 10;
	for(i=0; i<5; i++)
		cout << obj[i] << endl;
	return 0;
}




