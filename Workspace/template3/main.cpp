/*
 * main.cpp
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
	Stack<int, 5> s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);
	s1.push(44);
	int val = s1.peek();
	cout << "topmost ele : " << val << endl;
	s1.pop(); // popped 44
	val = s1.peek();
	cout << "topmost ele : " << val << endl << endl;

	while(!s1.empty()) {
		val = s1.peek();
		s1.pop();
		cout << "popped: " << val << endl;
	}
	return 0;
}




