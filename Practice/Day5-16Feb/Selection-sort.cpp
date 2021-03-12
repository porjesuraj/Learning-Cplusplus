#include<iostream>

using namespace std;

#define SIZE 10 

void selection_sort(int* arr)
{

    bool flag = true; 

    int count = 1,i; 

    for ( i = 0; i < SIZE - 1 ; i++ )
    {
        for (int j = i + 1; j < SIZE ; j++)
        {
           if(arr[i] > arr[j ])
           {
               flag = true; 
               swap(arr[i],arr[j]); 
           }
           
           ++count; 
        }

        
    }

    cout<<"Count "<<count<<endl;
    

}


#pragma region buggle sort
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

#pragma endregion

int main(void)
{
    int arr[SIZE] = {1,3,2,54,56,67,7,8,3,5}; 

  //::bubble_sort(arr); 

::selection_sort(arr); 
//cout<<"hi"; 
  for(int i : arr)
  cout<<i<<","; 

    return 0; 
}