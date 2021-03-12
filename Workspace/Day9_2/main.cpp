/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */
#include <iostream>
using namespace std;

class singleton {
private:
	singleton() { }
	static singleton *ptr;
public:
	static singleton* get_instance() {
		if(ptr == NULL)
			ptr = new singleton;
		return ptr;
	}
	static void shutdown() {
		delete ptr;
	}
};

singleton * singleton::ptr = NULL;

int main() {
	try {
		//singleton s1; // error: private ctor
		singleton *p1 = singleton::get_instance();
		singleton *p2 = singleton::get_instance();
		cout << "p1 = " << p1 << endl;
		cout << "p2 = " << p2 << endl;
		// ...
	} catch (...) {
		cout << "exception occured." << endl;
	}
	singleton::shutdown();
	return 0;
}



