#include<iostream>

using namespace std;
class a{

    public:
    int* b;
  
  a(int& a):b(&a)
  {

            
  }

};

int main()
{
int x = 10; 
   class a*  A = new a(x);
 int y = 10; 
// cout<<*(A->b)<<endl;
cout<<(*A).b;

cout<<A->b
;
    return 0;
}

int main3()
{

    a A();

   // a->*b; 

unsigned int n = 65; 

char *c = (char*)&n;

if(*c)
printf("little %c",*c);
else
printf("big %c",*c);


    return 0;
}

int main2()
{

int n = 16; 

n = n << 1;

cout<<n; 

    return 0;
}

int main1(void)
{

if((cout << "geeks"))
{
    cout <<"geeks1";

}else
cout<<"forgeeks"; 


    return 0;
}