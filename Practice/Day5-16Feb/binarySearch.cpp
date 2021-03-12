#include<iostream>

using namespace std;


int linearSearch(int key,int size, int* arr)
{
     

 //    cout<<sizeof(arr) <<" : "<<sizeof(arr[0]) <<endl; 
 
    for (int index = 0; index < size; index++)
    {
        if(arr[index] == key)
          return index; 
        
    }
    
    return 0; 

}

int binarySearch(int* arr,int key,int size)
{
    int left = 0; 
    int right = size - 1; 

    while(left <= right)
    {

       int mid = (left + right)/2; 
//cout<<mid; 
        if(key == arr[mid])
        return mid; 
        else if(key > arr[mid])
        left = mid + 1; 
        else
        right = mid - 1; 
    }
     
}

int main(void)
{
    int arr[5] = {4,7,6,3,5}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    int key  = 5; 
       
    int result = ::linearSearch(key,size,arr); 

      int arr2[5] = {1,2,3,4,5}; 

      int size2 = sizeof(arr2)/sizeof(arr2[0]); 
//cout<<size2; 
      int result2 = ::binarySearch(arr2,key,size2); 

cout<<result2; 

    return 0; 
}