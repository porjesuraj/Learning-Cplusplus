#include<iostream>

using namespace std;

#define SIZE 10 


void insertion_sort(int* arr,int size)
{
    /*
    insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort
    */

int count = 1; 

for (int i = 1; i < size; i++)
{
   int key = arr[i]; 

   int j = i - 1;
    
    while(key < arr[j] && j >= 0)
   {
       arr[j + 1] = arr[j]; 
       --j;
   }
   arr[j + 1] = key; 

}


 


}





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


#pragma region bubble sort
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

//::selection_sort(arr); 
//cout<<"hi"; 

//cout<<*(&arr + 1)<<endl ; 
//cout<<arr<<endl; 
int arrSize = *(&arr + 1) - arr;
cout<<"size : "<<arrSize<<endl;; 

::insertion_sort(arr,arrSize); 
  for(int i : arr)
  cout<<i<<","; 

    return 0; 
}