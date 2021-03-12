#include<iostream>

using namespace std;

class stack
{
    private:

     int size; 
    int *arr;
    int top; 

    public:

    stack(int size):size(size),top(-1)
    {
        this->arr = new int[size]; 
    } 

    bool empty()
    {
        return this->top == -1 ; 
    }

    bool full()
    {
        return this->top == (this->size - 1); 
    }


    void push(int element)
    {
      if(this->full())
      {
          cout<<"error"; 
      }else
      this->arr[++this->top] = element; 
    }

    int peek()
    {
       if(this->empty())
       cout<<"error";
       
       return  this->top; 
    }

    void pop()
    {
         if(this->empty())
         cout<<"error";
       //throw exception("empty") ; 
       --this->top; 
    }

   ~stack(void){
         
         if(this->arr != NULL)
         {
             delete [] this->arr;

             this->arr = NULL; 
         }
   }

};


int main()
{

stack s(5);

s.push(10);
s.push(10);
s.push(10);
s.push(10);
s.push(10);
//s.push(10);

cout<<s.empty()<<endl;
cout<<s.full()<<endl;
    return 0; 
}