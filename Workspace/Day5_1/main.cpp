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
	array obj(5);
	obj.accept();
	obj.display();
	*/

	array obj(4);
	try {
		obj.set(0, 10);
		obj.set(1, 20);
		obj.set(2, 30);
		obj.set(3, 40);
		obj.set(4, 50);
		for(int i=0; i<4; i++)
			cout << obj.get(i) << endl;
	}
	catch(int ex) {
		cout << "invalid index: " << ex << endl;
	}
	cout << "bye!" << endl;

	/*
	int *p = (int*)&obj;
	cout << "len = " << *p << endl;
	*p = 6;
	obj.display();
	*/
	return 0;
}




