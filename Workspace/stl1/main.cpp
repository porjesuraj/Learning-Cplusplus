/*
 * main.cpp
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <stack> // built-in stack implemented using linked-list
using namespace std;

/*
 * Built-In stack class:
 * 	- void push(T val);
 * 	- void pop();
 * 	- T top(); // like our peek() fn
 * 	- bool empty();
 * */

int main() {
	stack<int> s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);
	s1.push(44);
	int val = s1.top();
	cout << "topmost ele : " << val << endl;
	s1.pop(); // popped 44
	val = s1.top();
	cout << "topmost ele : " << val << endl << endl;

	unsigned cnt = s1.size();
	cout << "stack size : " << cnt << endl; // 3

	s1.push(66);
	s1.push(77);
	s1.push(88);
	s1.push(99);

	cnt = s1.size();
	cout << "stack size : " << cnt << endl; // 7

	while(!s1.empty()) {
		val = s1.top();
		s1.pop();
		cout << "popped: " << val << endl;
	}
	return 0;
}




