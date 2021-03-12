/*
 * main.cpp
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	cout << "size : " << v.size() << endl; // num of eles = 0

	v.push_back(11); // index=0
	v.push_back(22); // index=1
	v.push_back(33); // index=2
	v.push_back(44); // index=3
	cout << "size : " << v.size() << endl; // num of eles = 4

	cout << "v[2] = " << v[2] << endl; // 22 -- random accessed using index operator

	// traversing vector like array using index
	for(unsigned i=0; i<v.size(); i++)
		cout << v[i] << endl;

	// traversing vector using iterator.
	vector<int>::iterator itr;
	itr = v.begin();
	while(itr != v.end()) {
		cout << *itr << ", ";
		itr++;
	}
	cout << endl;

	return 0;
}




