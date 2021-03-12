#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

template<class T>
void swap_object(T &o1,T &o2)
{
  T temp = o1; 
  o1 = o2;

  o2 = temp; 
}


int main(void)
{
  float num1 = 10.05f; 
  float  num2 = 20.05f; 
 cout<<"num 1 : " <<num1 << " num2 : "<< num2 <<endl; 
  swap_object<float>(num1,num2); 

  cout<<"num 1 : " <<num1 << " num2 : "<< num2 <<endl; 




  return 0; 
}