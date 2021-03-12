/*
 * main.cpp
 *
 *  Created on: 08-Apr-2020
 *      Author: nilesh
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector< vector<int> > mat;
	// create matrix of 3x4 -- 3 rows & 4 cols.
	vector<int> row(4); // vector of int of size 4.
	unsigned i, j;
	for(i=0; i<3; i++)
		mat.push_back(row);

	// display matrix
	for(i=0; i<mat.size(); i++) {
		for(j=0; j<mat[i].size(); j++)
			cout << mat[i][j] << ", ";
		cout << endl;
	}
	return 0;
}




