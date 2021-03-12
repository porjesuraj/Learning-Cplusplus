#include<iostream>
using namespace std;


int main(void)
{

int no,i,j,k,l = 0; 
    cout<<"range";

    cin >>no; 

   for (int i = 1; i <= no; i++)
    {

        for (int j = 1; j <= no - i; j++)
        {
            cout<<" "; 
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<k; 
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout<<l;
        }
        

        cout<<"\n"; 
        
        
    }
    return 0; 
     
}









int main2(void)
{
    int no,i,j,k,l,space,rows; 
cout<<"Range is "; 
    cin >> no; 
 for (int i = 1; i <= no; i++)
    {

        for (int j = 1; j <= no - i; j++)
        {
            cout<<" "; 
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<k; 
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout<<l;
        }
        

        cout<<"\n"; 
        
        
    }


    
    
    return 0; 
}

int main1(void)
{
    int no,i,j,k,l; 
cout<<"Range is "; 
    cin >> no; 

    for (int i = 1; i <= no; i++)
    {

        for (int j = 0; j < no - i; j++)
        {
            cout<<" "; 
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<k; 
        }
        for (int l = i-1; l >= 1; l--)
        {
            cout<<l;
        }
        

        cout<<"\n"; 
        
        
    }


    
    
    return 0; 
}