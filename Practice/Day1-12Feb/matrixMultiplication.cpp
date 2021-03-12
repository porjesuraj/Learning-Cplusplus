#include<iostream>
using namespace std;


int main(void)
{
int r,c,i,j,k; 
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;  


    int arr1[r][c],arr2[r][c],mult[r][c]; 

cout<<"enter the first matrix element=\n";    

for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {
       cin>> arr1[i][j];  
    }
}


cout<<"enter the second matrix element=\n";    

for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {
       cin>> arr2[i][j];  
    }
}

cout<<"matrix multiplication"<<endl;    

for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {

    mult[i][j] = 0;
     for(k = 0; k<c; k++)
     {
         mult[i][j] += arr1[i][k] * arr2[k][j]; 
     }

    }
}

for(i = 0; i < r; i++)
{
    for(j = 0; j < c; j++)
    {
       cout<< mult[i][j]<<" ";  
    }
    cout<<"\n";
}

    return 0;
}