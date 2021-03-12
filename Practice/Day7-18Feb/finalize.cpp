#include<iostream>

using namespace std;


int main(void)
{


    char word = 'B'; 

    char *p = &word;

    cout<< **(&p)<<endl;
    cout<< *p + 1<<endl;
    cout<< *p <<endl;
    
return 0;
}