//============================================================================
// Name        : 5cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
5) Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a
fifty-cent toll. Mostly they do, but sometimes a car goes by without paying. The
tollbooth keeps track of the number of cars that have gone by and of the total
amount of money collected.Model this tollbooth with a class called tollBooth.
The two data items are a type unsigned int to hold the total number of cars, and a
type double to hold the total amount of money collected.
A constructor initializes all data members to 0.
A member function called payingCar( ) increments the car total and adds 0.50 to the
cash total.
Another function, called nopayCar( ) increments the car total but adds nothing to the
cash total.
Finally, a member function called PrintOnConsole( ) displays the two totals and
number of paying as well as non paying cars total.*/

#include <iostream>
using namespace std;
class tollbooth
{
private:
	unsigned int car_count;
  double money_count;
public:
  tollbooth()
   {
	  this ->car_count = 0;
	  this ->money_count = 0;
   }
   void payingcar();
   void nopaycar();
   void printonconsole();

};

int init_menulist(void)
{   int choice;
	cout<<"0.exit \n 1. add to paying \n 2.add to non paying car  \n 3. check total count  \n enter choice";
	cin>>choice;
	return choice;

}

void tollbooth::payingcar()
{
	car_count = car_count +1;
	money_count = money_count + 0.50;
}
void tollbooth::nopaycar()
{
	car_count = car_count +1;

}
void tollbooth::printonconsole()
{
	cout<<"car count: "<<car_count;
	cout<<"\n";
	cout<<"money count \n "<<money_count;
	cout<<"\n";
}

int main()
{
	 int choice;
  tollbooth t1;

  while((choice = init_menulist()) != 0)
	  switch(choice)
	  {
	  case 1:
		  t1.payingcar();
		  break;
	  case 2:
		  t1.nopaycar();
		  break;
	  case 3:
		  t1.printonconsole();
		  break;

	  }



	return 0;
}
