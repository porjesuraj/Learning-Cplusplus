/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include<cstring>
#include"emp_date.h"
using namespace std;

int menu_list();

int main()
{
	date d;
	 employee e[5];

	int choice,i,count;
		while((choice = menu_list()) != 0)
		{   int check_id;
			switch(choice)
		{
			case 1:
				cout<<"enter  no of employee to fill their info \n ";
				cin>>count;
				for(i=0;i<count;i++)
				{
				  e[i].accept();
				}
				break;
			case 2:
				cout<<"enter employee_id \n "<<endl;
				cin>>check_id;
			  for(i=0;i<5;i++)
				{
				  if(check_id == e[i].get_id())
				  {
					  e[i].display();
				  }
				}
				break;
			case 3://set date
				cout<<"enter employee_id \n ";
				cin>>check_id;
			     for(i=0;i<5;i++)
				{
			    	 if(check_id == e[i].get_id())
				     {
			    		 e[i].set_joining_date(d);
				     }
				}
				break;
			case 4://display date
				cout<<"enter employee_id \n ";
				cin>>check_id;
				for(i=0;i<5;i++)
				{
				if(check_id == e[i].get_id())
			       {
				  e[i].get_joining_date();
			       }
				}
				break;
			case 5:
				int new_id;
				cout<<"enter employee_id \n ";
				cin>>check_id;
				for(i=0;i<5;i++)
				{
				if(check_id == e[i].get_id())
				{
				cout<<"enter new id \n"<<endl;
				cin>>new_id;
				 e[i].set_id(new_id);
				}
				}
				break;
			case 6:

				cout<<"enter employee_id to check if exist \n ";
				cin>>check_id;
				for(i=0;i<5;i++)
				{
				if(check_id == e[i].get_id())
				  {
                cout<<e[i].get_id();
                cout<<"id exist \n"<<endl;
		          }
				}
				break;
		}
		}



	return 0;
}

