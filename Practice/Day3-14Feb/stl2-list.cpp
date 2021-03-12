#include<iostream>
#include<list>
using namespace std;
//template<typename T>
bool pred(int x,int y)
{
    return x == y; 
}

int main(void)
{


    list<int> l = {1,3,3,4,5,3,9,8}; 

list<int>::iterator itr = l.begin(); 



l.sort(); 

l.unique(); 

    for(int i : l)
    cout<<i <<" , "; 


    list<int> l2; 

l2.assign(l.begin(),l.end()); 

l.merge(l2); 

l.unique(); 
cout<<"\n"; 
 for(int i : l)
    cout<<i <<" , "; 

   return 0; 
}