/*
 * main.cpp
 *
 *  Created on: 09-Apr-2020
 *      Author: nilesh
 */
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

void display_list(vector<int>& l) {
	cout << "vect: ";
	vector<int>::iterator itr1 = l.begin();
	while(itr1 != l.end()) {
		cout << *itr1 << ", ";
		itr1++;
	}
	cout << endl;
}

int main() {
	vector<int> l1;
	l1.push_back(22);
	l1.push_back(11);
	l1.push_back(55);
	l1.push_back(44);
	l1.push_back(33);

	display_list(l1);

	sort(l1.begin(), l1.end());
	display_list(l1);

	reverse(l1.begin(), l1.end());
	display_list(l1);

	vector<int>::iterator ptr = max_element(l1.begin(), l1.end());
	cout << "max ele : " << *ptr << endl;

	l1.push_back(33);
	l1.push_back(22);
	l1.push_back(22);

	int cnt = count(l1.begin(), l1.end(), 22);
	cout << "22 occurred : " << cnt << " times" << endl;

	// copy elements from vector list
	list<int> l2;
	vector<int>::iterator itr = l1.begin();
	while(itr != l1.end()) {
		l2.push_back(*itr);
		itr++;
	}

	string str = "SunBeam";
	transform(str.begin(), str.end(), str.begin(), ::tolower); // ctype.h
	cout << str << endl;


	return 0;
}



