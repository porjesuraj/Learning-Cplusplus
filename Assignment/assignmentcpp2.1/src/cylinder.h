/*
 * cylinder.h
 *
 *  Created on: 06-Mar-2020
 *      Author: sunbeam
 */

#ifndef CYLINDER_H_
#define CYLINDER_H_

class cylinder
{
private:
	double radius;
	double height;
	double result;

public:
	cylinder():radius(10),height(10),result(0)
       {}
	cylinder(double r, double h):radius(r),height(h)
		{
	        this->result  = r;
		}

    void getVolume();
    void printVolume();
};


#endif /* CYLINDER_H_ */
