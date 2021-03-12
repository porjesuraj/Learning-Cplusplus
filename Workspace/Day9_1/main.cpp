/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "chair.h"

class new_chair:public chair {

};

int main() {
	//cout << "chair's price: " << chair::price << endl; // valid, if public
	cout << "chair's price: " << chair::get_price() << endl; // valid
		//get_price() --> there is no current object -- no this pointer.
	chair c1(5, "black");
	chair c2(8, "white");
	c1.display();
	chair::set_price(4000);
	c2.display();
		//display(&c2); --> &c2 is passed as this pointer.
	c1.display();
	/*
	cout << "c1.price = " << c1.price << endl; // valid, if public -- misleading
	c1.price = 3000; // valid, if public -- misleading
	cout << "c2.price = " << c2.price << endl; // valid, if public -- misleading
	*/

	cout << "new chair price: " << new_chair::get_price() << endl;
	return 0;
}



