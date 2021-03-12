//============================================================================
// Name        : 2.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================
   /* 2) Write a menu driven program for class Student. In Main Create Array of Objects
		and provide facility for Accept, Print, Search and Sort.
	For student accept name, gender, rollnumber and marks of three subjects from
	user and print name, rollnumber, gender and percentage.
	Provide global function e.g. “SortRecord ()” for sorting array. When we search
	a particular student in an array and if it is founds show all record of that
	student otherwise show some error message.
*/

#include <iostream>
#include "cstdlib"

using namespace std;
enum options
{
	accept = 1,print,search,sort
};

class students
{
private:
	string name;
	char gender;
	int rollno;
	double marks[3];
public:


	void acceptSinfo();
	void printSinfo();
	int nameSearch(int flag);
	int getRollNumber();
};

int menulist(void)
{
	int choice;
		 cout<<"0.exit \n 1.accept record \n 2.print record \n 3.search record \n 4.sort record \n enter choice \n";
		 cin>>choice;
		 return choice;
}
void students::acceptSinfo()
{
	cout<<"enter student name \n";
	cin>>name;
	cout<<"enter student gender \n ";
	cin>>gender;
	cout<<"enter student roll number \n ";
	cin>>rollno;
	cout<<"enter student marks for subject 1 \n ";
	cin>>marks[0];
	cout<<"enter student marks for subject 2 \n ";
	cin>>marks[1];
	cout<<"enter student marks for subject 3 \n ";
	cin>>marks[2];
}
void students::printSinfo()
{
	cout<<"student name :"<<name<<endl;
		cout<<"student gender :"<<gender<<endl;
		cout<<"student roll number :"<<rollno<<endl;
		cout<<"student marks for subject 1 :"<<marks[0]<<endl;
		cout<<"student marks for subject 2 :"<<marks[1]<<endl;
		cout<<"student marks for subject 3 :"<<marks[2]<<endl;

}
int students::nameSearch(int temp)
{
	   if(rollno == temp)
	   {
		   return 1;
	   }
	   else
		   return 0;
}
int students::getRollNumber()
{
        return rollno;
}


int comparator(void *a, void *b)
{
    return (int)(((students *)a)->getRollNumber() - ((students *)b)->getRollNumber());
}


int main()
{

	 students s[5];
	 int size,i;
	 int choice;
	 string temp;
	 cout<<"0.exit \n 1.accept record \n 2.print record \n 3.search record \n 4.sort record \n enter choice \n";
	 cin>>choice;

	 while((choice = menulist()) != 0)
	 {
		switch(choice)
		{
		case accept:
			cout<<"enter the no of record to be entered";
			cin>>size;
			if(size<5)
		    {for(i=0;i<size;i++)
			{
			s[i].acceptSinfo();
			}}
			else
				cout<<"incorrect input \n ";
		break;
		case print:
			cout<<"enter the no of record to be printed";
			cin>>size;
			for(i=0;i<size;i++)
			{
				s[i].printSinfo();
			}
			break;

		case search:
			//students s[5];
				int temp;
				int i;
			cout<<"enter student rollno to be searched"<<endl;
			 cin>>temp;
			   for(i=0;i<5;i++)
			   {
				   if(s[i].nameSearch(temp))
				   {
					   s[i].printSinfo();
				   }
				   else
					   {
					   cout<<"name doesnt exist"<<endl;
					   }
			   }
			break;

		case sort:
			qsort(s, 5, sizeof(students),(int(*)(const void*, const void*))comparator);
			cout<<"RECORD IS SORTED"<<endl;



			break;

		}
	}

	return 0;
}
