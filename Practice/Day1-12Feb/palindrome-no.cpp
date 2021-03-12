#include<iostream>


using namespace std;


int main(void)
{

    int no,rev,i,sum = 0; 

    cout<<"enter no"<<endl;

    cin>>no;

  int temp = no; 

    while(no > 0)
    {
        
        rev = no % 10;

        sum = (sum * 10) + rev;

        no = no/10; 


    }

    if(temp == sum)
    cout<<"no is palindrome"<<endl;
    else
     cout<<"no is not a palindrome"<<endl;


    return 0; 
}