#include<iostream>
#include<stdio.h>
using namespace std;

class test{

private: 
int a; 

public: 

test(){
    cout<<"hello"<<endl;
    this->a = ++a;  
}


};

int main(void)
{

test t1; 

test *t2 = new test; 

cout<<"malloc"; 
test *ptr = (test*)malloc(sizeof(test)); 

delete t2; 


free(ptr); 
    return 0; 
}