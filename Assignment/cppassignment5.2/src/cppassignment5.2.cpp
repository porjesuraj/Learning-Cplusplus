//============================================================================
// Name        : 2.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;

class date
{ private:
  int day;
  int month;
  int year;

  public:
  date()
  {
	  this->day = 1;
	  this->month = 1;
	  this->year = 1970;
  }
  date(int d,int m, int y)
  {
	  this->day = d;
	  	  this->month = m;
	  	  this->year = y;
  }
  void AcceptDate();
  void PrintDate();
 };


class person
{
private:
	int id;
	char name[40];
	char addr[100];
	date birth_date;
public:

	person();
	person(char*,char*,date);
	void get_birth_date();
    void set_birth_date(date);
    void display();
    void accept();
     char* get_name();
    void set_name(char*);
    int get_id();
    void set_id(int);
};

person::person()
{
	this->id = 1;
	strcpy(this->name,"suraj");
	strcpy(this->addr,"nasik");
	//strcpy(this->dept,"manager");
	this->birth_date = birth_date;

}
void person::accept()
{
	cout<<"enter person name"<<endl;
	cin>>name;
	cout<<"enter person address"<<endl;
		cin>>addr;
		cout<<"enter person birth date"<<endl;
			birth_date.AcceptDate();

}
void person::display()
{
	cout<<"\n person name :"<<name;
		cout<<"\n enter person address"<<addr;
			cout<<"enter person birth date \n ";
				birth_date.AcceptDate();

}
void person::get_birth_date()
{
   this->birth_date.PrintDate();

}

void person::set_birth_date(date)
{
  this->birth_date.AcceptDate();
}
void person::set_name(char * nm)
{
	strcpy(this->name,nm);
}

char* person::get_name()
{
	return name;
}
void person::set_id(int new_id)
{
	this->id = new_id;
}

int person::get_id()
{
	return id;
}
void date::AcceptDate()
{   cout<<"enter the birth-date \n ";
	cout<<"day \n ";
	cin>>day;
	cout<<"month \n";
	cin>>month;
	cout<<"day \n ";
	cin>>year;
}
void date::PrintDate()
{   printf("\n birth-date :\n");
	cout<<day;
	cout<<"-"<<month;
	cout<<"-"<<year;
}

int menu_list(void)
{
	int choice;

		cout<<"enter choice for person \n 1.accept \n 2.display \n 3.set joining date\n 4.set joining date \n 5. set name \n 6.get name";
		cin>>choice;
		return choice;

}




int main()
{
		date d;
		person e[5];

		int choice,i,count;
			while((choice = menu_list()) != 0)
			{   int check_id;
				switch(choice)
			{
				case 1:
					cout<<"enter  no of person to fill their info \n ";
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
					cout<<"enter person_id \n ";
					cin>>check_id;
				     for(i=0;i<5;i++)
					{
				    	 if(check_id == e[i].get_id())
					     {
				    		 e[i].set_birth_date(d);
					     }
					}
					break;
				case 4://display date
					cout<<"enter person_id \n ";
					cin>>check_id;
					for(i=0;i<5;i++)
					{
					if(check_id == e[i].get_id())
				       {
					  e[i].get_birth_date();
				       }
					}
					break;
				case 5:
					int new_id;
					cout<<"enter person_id \n ";
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

					cout<<"enter person_id to check if exist \n ";
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

