#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int no,temp,result = 0,no1; 
    cout <<"enter no "<<endl; 

    cin>>no;

    no1 = no; 

    while( no > 0)
    {
        temp = no % 10; 
        
        result += pow(temp,3); 

       no = no/10; 
    }

  if(no1 == result)
  cout<<"no is armstrong "<< no1 <<" : "<< result;
  else
  cout<<"no is not a armstrong"<< no1 <<" : "<< result;
    



    return 0; 
}