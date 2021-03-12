#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class Array{
private: 
int size; 
int *arr; 


public: 

Array(int size = 5)
{

    cout<<"in constr"; 
this->arr = new int[size]; 

this->size = size; 
}


Array(const Array &other)
{
    cout<<"in copy constr"; 

    memcpy(this,&other,sizeof(Array)); 
}

void setArray(int index, int value)
{
    this->arr[index] = value;  
}

int getArray(int index)
{
    
    return this->arr[index]; 
}

private:
 class Inner{

};

protected:
 class Inner2{

};


};

int main(void)
{
  Array::Inner in; 

  cout<<"inner";
}

int main1(void)
{

int count = 0 ; 
Array one(10); 

for(int index = 0 ; index < 10 ; ++index)
{
    one.setArray(index,++count); 
  }

for(int index = 0 ; index < 10 ; ++index)
{
    cout<< one.getArray(index);  
  }

cout<<endl;

  Array two = Array(one); 

for(int index = 0 ; index < 10 ; ++index)
{
    cout<< two.getArray(index)<<endl;  
  }

  Array *ptr = &one;

  Array &c1 = one; 

//Array three = one; 

Array three(one); 

cout <<"assignment "<<endl;
for(int index = 0 ; index < 10 ; ++index)
{
    cout<< three.getArray(index)<<endl;  
  }

  //cout<<"pointer : "<<ptr->getArray(1); 

 // cout<<"reference : "<<c1.getArray(5); 
    return 0; 
}