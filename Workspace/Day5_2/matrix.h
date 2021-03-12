/*
 * matrix.h
 *
 *  Created on: 06-Mar-2020
 *      Author: nilesh
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class matrix {
private:
	int **mat;
	int rows;
	int cols;
public:
	matrix(int rows, int cols);
	void accept();
	void display();
	~matrix();
};

#endif /* MATRIX_H_ */
