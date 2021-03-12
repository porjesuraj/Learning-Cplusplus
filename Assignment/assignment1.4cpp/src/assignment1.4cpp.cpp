//============================================================================
// Name        : 4cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*Write a menu driven program to calculate volume of the box.Provide neceesary
constructors.*/

#include <iostream>
using namespace std;
class box
{
private:
	int length;
	int breadth;
	int height;
public:
	box()
       {this->length = 10;
		this->breadth = 10;
		this->height = 10;
       }
     box(int l,int b,int h)
		{
	        this->length = l;
	  		this->breadth = b;
	  		this->height = h;
		}
    void init_volume();
     void volume();
    void print_volume();
};

int init_menu_list(void)
{
	    int choice;
	    cout<<"\n 0.exit \n 1.initialize box dimension \n 2.calculate box volume \n 3.print box volume \n enter choice \n ";
	    cin>>choice;
	    return choice;
}

     void box::init_volume()
     {
    	length = 10;
    	breadth = 10;
    	height = 10;

     }
	 void box::volume()
	 {
		 int vol = length*breadth*height;
		 cout<<":"<<vol<<endl;
	 }
     void box::print_volume()
     {
    	 int vol = length*breadth*height;
    	 cout<<":"<<vol<<endl;
     }
int main()
{       int choice;
	    box b1;
	    //box b2(40,40,40);
	    while((choice = init_menu_list()) != 0)
	     {
	    	 switch(choice)
	    	 {
	    	    case 1:
	    	    	b1.init_volume();
	    	    	//b2.init_volume();
	    	   break;
	    	   case 2:
	    		   b1.volume();
	    		  // b2.volume();
	    	   break;
	    	   case 3:
	    		   b1.print_volume();
	    		   //b2.print_volume();
	    	   break;

	    	 }
	     }

	return 0;
}
