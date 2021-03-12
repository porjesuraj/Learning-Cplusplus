#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;


class Complex{

  private:

  int real;
  int imag;

  public:

  Complex(int r = 0,int i = 0):real(r),imag(i)
  {
    cout<<"in constructor"<<endl;
   }

  Complex operator+(Complex &other)
  {
    Complex temp;

    temp.real =  this->real + other.real;

    temp.imag = this->imag + other.imag;

    return temp; 
  }


  void print() const throw()
  {
    cout<< "real : "<<this->real <<"  imag : "<<this->imag<<endl;
  }
};

int main(void)
{

Complex c1(10,20);
Complex c2(20,30);

Complex c3; 

c3  = c1 + c2; 
cout<<"c1 : "<<endl;
c1.print(); 
cout<<"c2 : "<<endl;
c2.print();
cout<<"c3 : "<<endl;
c3.print(); 

cout<<__FILE__<<endl;

Complex c4 = (10,200);

c4.print();

Complex c5(20);

c5.print();
  return 0; 
}