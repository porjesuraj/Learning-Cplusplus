#include<iostream>

using namespace std;

#define SIZE 10 

static int count = 1; 

void quick_sort(int *arr,int left,int right)
{
    

    if(left > right)
    {  cout<<count<<endl;
        return; 
    }
    

    int pivot = arr[left]; 
    int i = left; 
    int j = right; 

    while(i <= j)
    {
        while(arr[i] <= pivot)
         ++i; 
         while(arr[j] > pivot)
         --j;

         if(i < j)
         swap(arr[i],arr[j]); 

    }

    swap(arr[left],arr[j]); 

    quick_sort(arr,left,j - 1); 
    quick_sort(arr,j+1,right); 
    count++;

}












void merge(int *arr, int left, int mid, int right) ; 

void mergeSort(int a[], int left, int right)  
{  
    int mid;  
    if(left<right)  
    {  
        mid = (left+right)/2;  
        mergeSort(a,left,mid);  
        mergeSort(a,mid+1,right);  

        merge(a,left,mid,right);  
    }  
}  
void merge(int *arr, int left, int mid, int right)  
{  
    int i = left, j = mid + 1, k = 0; 

    int size = right - left + 1; 

    int *temp = new int[size]; 

    while(i <= mid && j <= right)
    {
        if(arr[i] < arr[j])
        temp[k ++] = arr[i ++];
        else
        temp[k++] = arr[j ++];

    }

    while( i <= mid)
    temp[k ++] = arr[i ++]; 
    while(j <= right)
    temp[k++] = arr[j++];

    for(i = left, k = 0; i <= right; ++i,++k)
    arr[i] = temp[k]; 

    delete[] temp; 



   
}




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

//::insertion_sort(arr,arrSize); 
  int left = 0,right = SIZE - 1; 
 // ::mergeSort(arr,left,right); 
 ::quick_sort(arr,left,right); 
  for(int i : arr)
  cout<<i<<","; 

    return 0; 
}