#include<iostream>
#include<stdio.h>
using namespace std;
class Array{
private: 
int size; 
int *arr; 

public: 
Array(int size = 5)
{
this->arr = new int[size]; 

this->size = size; 
}


Array(const Array &other)
{

    cout<<"copy"<<endl;
    this->size = other.size; 

    cout<<other.size<<endl; 

    cout<<"this : "; 
cout<<this->size<<endl;
    this->arr = new int[this->size]; 

    for(int index = 0; index < this->size; ++index)
    {
        this->arr[index] = other.arr[index]; 

    }
}

void setArray(int index, int value)
{
    this->arr[index] = value;  
}

int getArray(int index)
{
    
    return this->arr[index]; 
}




};

int main(void)
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


  Array two = Array(one); 

for(int index = 0 ; index < 10 ; ++index)
{
    cout<< two.getArray(index)<<endl;  
  }
    return 0; 
}