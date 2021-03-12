//============================================================================
// Name        : 1.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================
/*Create a user defined class “PasswordMismatch” , throw exception if user enters wrong password.
4.1 Write a C++ Class to store Account information of Bank customer by using
following class diagram. Use enum to store information of account type.
Create an array of 5 Accounts in main() and accept their details from
user. Write Menu driven program to deposit/withdraw amount from the
account. After each transaction display updated account balance. Provide
appropriate getters/setters with necessary validations. Throw exceptions
for invalid values.
Also implement an exception class insufficient_funds. In withdraw()
member function, if sufficient balance is not available in account,
throw this exception. */

#include <iostream>
#include"account.h"
using namespace std;

void account::accept()
{
	cout<<"enter customer id \n ";
	cin>>id;
	cout<<"enter balance \n";
	cin>>balance;
	cout <<"enter account type :\n  1.SAVING \n 2.CURRENT \n 3.DMAT \n enter choice";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
    	this->type = SAVING;
    	break;
    case 2:
    	this->type = CURRENT;
    	break;
    case 3:
    	this->type = DMAT;
    	break;
    }

}


void account::display()
{
	cout<<" customer id";
	cout<<id<<endl;
	cout<<"balance";
	cout<<balance<<endl;
	cout <<"account type :\n";

	    switch(type)
	    {
	    case 1:
	    	cout<<"SAVING"<<endl;
	    	break;
	    case 2:
	    	cout<<"CURRENT"<<endl;
	    	break;
	    case 3:
	    	cout<<"DMAT"<<endl;
	    	break;
	    }
}
int account::id_search(int tmp)
{
		if(id == tmp)
		{
			return 1;
		}
		else
			return 0;

}
void account::set_id(int new_id )
{
   this->id = new_id;
}
void account::set_type()
{
	int choice;
	cout <<"enter account type :\n  1.SAVING \n 2.CURRENT \n 3.DMAT \n enter choice";
					    cin>>choice;
	    switch(choice)
	    {
	    case 1:
	    	this->type = SAVING;
	    	break;
	    case 2:
	    	this->type = CURRENT;
	    	break;
	    case 3:
	    	this->type = DMAT;
	    	break;
	    }


}
void account::get_id(void)
{
	cout<<"id is"<<id;

}
void account::get_type(void)
{
	cout <<"account type :\n";

		    switch(type)
		    {
		    case 1:
		    	cout<<"SAVING"<<endl;
		    	break;
		    case 2:
		    	cout<<"CURRENT"<<endl;
		    	break;
		    case 3:
		    	cout<<"DMAT"<<endl;
		    	break;
		    }
}

double account::get_balance(void)
{
	return balance;

}
void account::deposit(double amount)
{
	balance = balance + amount;
}
void account::withdraw(double amount)
{
	balance = balance - amount;
}

int menu_list(void)
{
	int choice;

		cout<<"enter choice of operation 1.accept \n 2.display \n 3.set id \n 4.set type \n 5. get id \n 6.get balance \n 7. deposit\n 8.withdraw \n";
		cin>>choice;
		return choice;

}
account::~account()
{
	cout<<" ";
}
