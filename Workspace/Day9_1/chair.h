/*
 * chair.h
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */

#ifndef CHAIR_H_
#define CHAIR_H_

#include <string>
using namespace std;

class chair {
private:
	int weight;
	string color;
//public:
private:
	static double price; // static declaration
public:
	chair();
	chair(int weight, const string& color);
	int get_weight();
	string& get_color();
	void display();
	static double get_price();
	static void set_price(double price);
	~chair();
};

#endif /* CHAIR_H_ */
