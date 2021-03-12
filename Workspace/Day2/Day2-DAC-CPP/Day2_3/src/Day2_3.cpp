//============================================================================
// Name        : Day2_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class student
{
    char name[100];
    int age,roll;
    float percent;
    public:
        void getdata()
        {
            cout<<"Enter data"<<endl;
            cout<<"Name:";
            cin>>name;
            cout<<"Age:";
            cin>>age;
            cout<<"Roll:";
            cin>>roll;
            cout<<"Percent:";
            cin>>percent;
            cout<<endl;
        }
        student & max(student &s1,student &s2)
        {
        	cout<<"\n Address of this variable "<<this;

            if(percent>s1.percent && percent>s2.percent)
                return *this;
            else if(s1.percent>percent && s1.percent>s2.percent)
                return s1;
            else if(s2.percent>percent && s2.percent>s1.percent)
                return s2;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Roll:"<<roll<<endl;
            cout<<"Percent:"<<percent;
        }
};

int main()
{
    student s,s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s=s3.max(s1,s2);
    cout<<"\n Address of S3 Object : "<<&s3;
    // function max() is called upon object s3
    // s1 snd s2 are two objects passed as an argument to function max
    // In C++ we can pass the arguments by reference


    cout<<"\n Student with highest percentage"<<endl;
    s.display();

    return 0;
}
