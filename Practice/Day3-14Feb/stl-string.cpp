#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    int * arr = new int[10]{10,20,30};

    cout<<*(arr+2);

}

int main2(void)
{


string str = " Computer is a interesting field"; 

 


char * ch = new char[str.length() + 1]; 

strcpy(ch,str.c_str()); 

cout<< " String value is : "<< ch; 




    return 0; 
}


int main1(void)
{


string s1 = "HELLO";
string s2 = "HELL"; 

int k = s1.compare(s2); 

cout<<k; 

    return 0; 
}