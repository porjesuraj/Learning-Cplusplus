/*
 * main.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: nilesh
 */
#include <iostream>
using namespace std;
#include "date.h"
#include "person.h"

int main() {
	/*
	date d1;
	date d2(1,1,1979);

	d1.display();
	d2.display();

	date d3;
	d3.accept();
	d3.display();
	*/

	/*
	person p1;
	p1.display();
	*/

	/*
	date d2(1, 1, 1979);
	person p2("Vishal", d2);
	p2.display();
	*/

	person p3("Nilesh", 28, 9, 1983);
	p3.display();

	return 0;
}



