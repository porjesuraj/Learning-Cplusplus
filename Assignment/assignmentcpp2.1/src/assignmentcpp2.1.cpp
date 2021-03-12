//============================================================================
// Name        : 1.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================
   /* 1) Write a class to find volume of a Cylinder by using following members.(volume of Cylinder=3.14 * radius * radius *height) ( use modular approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/


#include <iostream>
#include"cylinder.h"
using namespace std;


int init_menu_list(void)
{
	    int choice;
	    cout<<"\n 0.exit \n 1.calculate cylinder volume \n 2.print cylinder volume \n 3.cal vol of para cylinder \n 4.print volume of para cylinder enter choice \n ";
	    cin>>choice;
	    return choice;
}

void cylinder::getVolume()
{
	result = 3.14 * radius * radius *height;


}

     void cylinder::printVolume()
     {
         cout<<"volume of cylinder ";
    	 cout<<":"<<result<<endl;
     }
