/*
 * main.cpp
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20); // duplicate element will not be inserted.
	set<int>::iterator itr;
	itr = s1.begin();
	while(itr != s1.end()) {
		cout << *itr << endl;
		itr++;
	}
	return 0;
}



