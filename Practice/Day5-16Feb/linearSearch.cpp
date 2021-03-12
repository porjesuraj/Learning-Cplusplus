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

int main(void)
{
    int arr[5] = {4,7,6,3,5}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    int key  = 5; 

    int result = ::linearSearch(key,size,arr); 

cout<<result; 
    return 0; 
}