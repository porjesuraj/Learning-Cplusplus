#include<iostream>


using namespace std;


class Parent{

private:
int num = 1; 
static int num2 ;

public: 
virtual void function(float i )
{

    cout<<"parent : "<<i  <<endl;
}
virtual void function(int i)
{

    cout<<"parent"<< i <<endl;
}
};

int Parent::num2 = 10;

class Child{

virtual void function(int i)
{

    cout<<"parent"<< i <<endl;
}
};

int main(void)
{

cout<<"size of parent : "<<sizeof(Parent)<<endl;
cout<<"size of child : "<<sizeof(Child)<<endl;
    
    return 0; 
}

