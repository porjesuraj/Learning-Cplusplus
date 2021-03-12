//============================================================================
// Name        : 1.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

/*     1) Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
print_date()
setHour()
setMinute()
setSeconds()

In main create array of objects of Time. Allocate the memory for the array and the object dynamically.  */


#include <iostream>
using namespace std;
class TIME
{
private:
	int hours;
	int minute;
	int seconds;
public:

 TIME()
{
		this->hours = 12;
		 this->minute = 12;
		 this->seconds  = 12;
}

 ~TIME();


	int gethours();
	int getminute();
	int getseconds();
	void printdate();
	void sethours(int flag);
	void setminutes(int flag);
	void setseconds(int flag);

};

int menu_list(void)
{

	int choice;
	cout<<"0.exit \n 1.get hours \n 2.get minutes \n 3.get seconds \n 4. print date \n 5.set hours \n 6.set minutes \n 7.set seconds \n enter choice";
	  cin>>choice;
	  return choice;
}

int TIME::gethours(void)
{
	return hours;
}
int TIME::getminute(void)
{
	return minute;
}

int TIME::getseconds(void)
{
	return seconds;
}
void TIME::sethours(int temp)
{
	hours = temp;
}
void TIME::setminutes(int temp)
{
	minute = temp;
}
void TIME::setseconds(int temp)
{
	seconds = temp;
}

void TIME::printdate()
{
	cout<<"the time is :"<<hours<<"-"<<minute<<"-"<<seconds<<endl;
}


int main()
{   int size,i;
    int choice;
    int temp;
	cout<<"enter the size of array";
	cin>>size;

   TIME *t1 = new TIME[size];
  for(i=0;i<size;i++)
  {
	cout<<"enter the time in hours";
	cin>>temp;
	t1[i].sethours(temp);
	cout<<"enter the time in minutes";
		cin>>temp;
		t1[i].setminutes(temp);
		cout<<"enter the time in seconds";
		cin>>temp;
		t1[i].setseconds(temp);
  }



  while((choice = menu_list()) != 0)
  {
	  switch(choice)
	  {
	  case 1:
		   temp = t1[1].gethours();
		   cout<<"hours = "<<temp<<endl;
		  break;
	  case 2:
		   temp = t1[1].getminute();
           cout<<"minutes ="<<temp<<endl;
		  break;
	  case 3:
		  temp = t1[1].getseconds();
          cout<<"seconds = "<<temp<<endl;
		  break;
	  case 4:
		  t1[1].printdate();
		  break;
	  case 5:
		  cout<<"enter hours value to set";
		  cin>>temp;
		  t1[1].sethours(temp);
		  break;
	  case 6:
		  cout<<"enter minutes value to set";
		 		  cin>>temp;
		 		 t1[1].setminutes(temp);
		  break;
	  case 7:
		  cout<<"enter seconds value to set";
		 		  cin>>temp;
		 		 t1[1].setseconds(temp);
		  break;

	  }
  }

  //delete [] *t1;
  //t1 = NULL;
	return 0;
}


















