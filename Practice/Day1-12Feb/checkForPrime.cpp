#include<iostream>

using namespace std;
int main()
{
int no,i,flag = 0; 

    cout<<" enter no "<<endl;
    cin >>no;

    int m = no/2; 

    for(i = 2; i <= m ; i++ )
    {
        if(no % i == 0)
        {
            cout<<"no is not a prime no"<<endl;

            flag = 1; 

            break;

        }
    }

    if(flag == 0)
    {
        cout<<"no is prime "<<endl;
    }

    return 0; 
}