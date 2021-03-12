/*
 * main.cpp
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <list>
using namespace std;

/*
 * - push_back() -- add ele at the end.
 * - push_front() -- add ele at the start.
 * - pop_back() -- delete last ele.
 * - pop_front() -- delete first ele.
 * - size() -- num of eles in list.
 * - clear() -- delete all eles in list.
 * */

int main() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_front(50);
	l1.push_front(60);
	cout << "l1 size = " << l1.size() << endl;

	list<int>::iterator trav;
	cout << "list: ";
	trav = l1.begin();
	while(trav != l1.end()) {
		cout << *trav << ", ";
		trav++;
	}
	cout << endl;

	l1.pop_front(); // del 60
	l1.pop_back(); // del 40
	cout << "l1 size = " << l1.size() << endl;

	cout << "list: ";
	trav = l1.begin();
	while(trav != l1.end()) {
		cout << *trav << ", ";
		trav++;
	}
	cout << endl;

	l1.remove(20);
	cout << "list: ";
	trav = l1.begin();
	while(trav != l1.end()) {
		cout << *trav << ", ";
		trav++;
	}
	cout << endl;

	l1.push_back(10);
	cout << "list: ";
	trav = l1.begin();
	while(trav != l1.end()) {
		cout << *trav << ", ";
		trav++;
	}
	cout << endl;


	return 0;
}



