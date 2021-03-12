/*
 * main.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: nilesh
 */
#include <list>
#include <iostream>
using namespace std;

int main() {
	list<int> l1;
	l1.push_back(11);
	l1.push_back(22);
	l1.push_back(33);
	l1.push_back(44);
	l1.push_back(55);

	// forward traversal
	cout << "list: ";
	list<int>::iterator itr1 = l1.begin();
	while(itr1 != l1.end()) {
		cout << *itr1 << ", ";
		itr1++;
	}
	cout << endl;

	// reverse traversal -- using iterator (doing --)
	cout << "list: ";
	list<int>::iterator itr2 = l1.end();
	while(itr2 != l1.begin()) {
		itr2--;
		cout << *itr2 << ", ";
	}
	cout << endl;

	// reverse traversal -- using reverse_iterator (doing ++)
	cout << "list: ";
	list<int>::reverse_iterator itr3 = l1.rbegin();
	while(itr3 != l1.rend()) {
		cout << *itr3 << ", ";
		itr3++;
	}
	cout << endl;

	//manipulate elements using iterator
	cout << "list: ";
	list<int>::iterator itr4 = l1.begin();
	while(itr4 != l1.end()) {
		if(*itr4 % 2 == 0)
			*itr4 = *itr4 + 2;
		itr4++;
	}
	cout << endl;

	//traverse using const iterator
	cout << "list: ";
	list<int>::const_iterator itr5 = l1.cbegin();
	while(itr5 != l1.end()) {
		cout << *itr5 << ", ";
		itr5++;
	}
	cout << endl;

	return 0;
}



