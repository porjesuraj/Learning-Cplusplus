//Write a c++ program to print fibonacci series without using recursion and using recursion.

#include <iostream>  
using namespace std;  
int main() {  
 



 int n1 = 0,n2 = 1,n3,i,no;

cout<<"enter no"<<endl;

cin>>no; 
 cout<<n1 <<","<<n2 <<","; 

for(i = 2; i < no; ++ i)
{

    n3 = n1 + n2; 

    cout << n3 <<","; 
    
    n1 = n2;

    n2 = n3; 

    }

    
   return 0;  
   }  