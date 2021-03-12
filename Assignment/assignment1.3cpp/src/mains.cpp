
#include <iostream>
#include"date.h"
using namespace std;

 int init_menu_list(void);

int main()
{
	date d1;
	date d2(20,3,2020);
	 int choice;
     while((choice = init_menu_list()) != 0)
     {
    	 switch(choice)
    	 {
    	    case 1:
    	  d1.InitDate();
    	  d2.InitDate();
    	   break;
    	   case 2:
    	   d1.AcceptDateFromConsole();
    	   break;
    	   case 3:
    	   d1.PrintDateOnConsole();
    	   break;
    	   case 4:
    	   if(d1.IsLeapYear() == true)
    		cout<<"its a leap year";
    	   else
    	   cout<<"not a leap year";

    	 break;
    	 }
     }
return 0;
}
