#include<iostream>

using namespace std;


int factorial(int num)
{

int i,temp = 1 , result; 

for(i = 1;i <= num; i++)
{
    temp *= i; 
}
return temp; 
     
}

int recursiveFactorial(int n)
{

    if( n < 0 )
    return(-1); 
    else if(n == 0)
    return(1);
    else{

        return (n * recursiveFactorial(n - 1)); 
    }
}

int main(void)
{

int num = 6; 

//int result = ::factorial(num); 
int result = ::recursiveFactorial(num);
cout<<result; 

    return 0; 
}