#include <iostream>
#include"cylinder.h"
using namespace std;

int init_menu_list(void);

int main()
{       int choice;
	    cylinder c1;
	   cylinder c2(40,40);
	    while((choice = init_menu_list()) != 0)
	     {
	    	 switch(choice)
	    	 {
	    	    case 1:
	    	    	c1.getVolume();
	    	    	//b2.init_volume();
	    	   break;
	    	   case 2:
	    		   c1.printVolume();
	    		   break;
	    	   case 3:
	    		   c2.getVolume();
	    		   break;
	    	   case 4:
	    		   c2.printVolume();
	    		   break;

	    	 }
	     }

	return 0;
}
