#include<iostream>


using namespace std;


class A{

int num; 


public:

A(int num = 0 ):num(num)
{ }
virtual void function (void) const
{
    std::cout<<"base "<<this->num<<endl;
}

};


class B: public A{

int num2;


public:

B(int num2 = 0):num2(num2)
{ }

void function (void) 
{
    std::cout<<"derived  " <<this->num2 <<endl; 
    
}
};


class C{

    public: 
    virtual void function (void) = 0;


};

int main(void)
{

      A *a = new B(5); 
cout<<"dynamic cast"<<endl; 
    
     a->function(); 
     a->A::function(); 

    B * obj3 = dynamic_cast<B*> (a); 

    obj3->function(); 

    cout <<"size of class A : "<<sizeof(A)<<endl; 
    cout <<"size of class B : "<<sizeof(B)<<endl; 
    cout <<"size of class C : "<<sizeof(C)<<endl; 
     cout <<"size of int : "<<sizeof(int)<<endl; 


    cout <<"size of class obj a"<<sizeof(a)<<endl;  
    return 0; 
}

int main1(void)
{
//     A *a = new B(); 

//     a->function(); 




//  A obj1; 
// obj1.function();

// B obj2; 
// obj2.function();   



}
