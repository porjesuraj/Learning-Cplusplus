#include<iostream>

using namespace std;

#define SIZE 7

void bubble_sort(int* arr)
{

    bool flag = true; 

    int count = 1,i; 

    for ( i = 0; i < SIZE - 1 && flag == true; i++ )
    {
        for (int j = 0; j < SIZE -1 - i; j++)
        {
           if(arr[j] > arr[j + 1])
           {
               flag = true; 
               swap(arr[j],arr[j+1]); 
           }
           
           ++count; 
        }

        
    }

    cout<<"Count "<<count<<endl;
    

}
int main(void)
{
    int arr[SIZE] = {10,7,15,21,9,8,12}; 

  ::bubble_sort(arr); 

  for(int i : arr)
  cout<<i<<","; 

    return 0; 
}