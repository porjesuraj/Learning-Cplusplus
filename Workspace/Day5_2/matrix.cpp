/*
 * matrix.cpp
 *
 *  Created on: 06-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;
#include "matrix.h"

matrix::matrix(int r, int c) {
	rows = r;
	cols = c;
	mat = new int*[r];
	for (int i = 0; i < r; ++i) {
		mat[i] = new int[c];
		for (int j = 0; j < c; ++j)
			mat[i][j] = 0;
	}
}

void matrix::accept() {
	cout << "enter " << rows << "x" << cols << " matrix: " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			cin >> mat[i][j];
	}
}

void matrix::display() {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			cout << mat[i][j] << "\t";
		cout << endl;
	}
}

matrix::~matrix() {
	for (int i = 0; i < rows; ++i)
		delete[] mat[i];
	delete[] mat;
	mat = NULL;
}

