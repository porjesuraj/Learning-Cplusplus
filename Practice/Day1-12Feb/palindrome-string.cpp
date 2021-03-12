#include<iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;


void reverse_String(string& str, int n,int i){

if(n <= i)
return; 

swap(str[i],str[n]);

reverse_String(str,n-1,i+1); 

}

int main() {
  
 string str ;


  cout<<"enter string"<<endl;

  cin>>str;  
 
 string rev = string(str.rbegin(),str.rend()); 
  
  cout<<"String after reversal: "<<rev<<endl;
  
}

int main4() {
  
 string str ;

string rev ;
  cout<<"enter string"<<endl;

  cin>>str;  
  cout<<"String before reversal: "<<str<<endl;

for(int i = str.length() - 1; i >= 0; i--)
{
  //cout<<str[i]; 
  rev += str[i]; 
}
  
  cout<<"String after reversal: "<<rev<<endl;
  
}

int main3() {
  
 string str ;

  cout<<"enter string"<<endl;

  cin>>str;  
  cout<<"String before reversal: "<<str<<endl;
  reverse_String(str,str.length() - 1,0);
  cout<<"String after reversal: "<<str<<endl;
  
}

int main2(void)
{

  string str ;

  cout<<"enter string"<<endl;

  cin>>str;  
  string temp = str;
int i; 
  int n1 = str.length();
 //cout << str<<endl; 
  for(i = 0 ; i < n1/2; i++)
  {
    swap(str[i],str[n1 - i - 1]); 
    
  }

  if(temp == str)
  {
    cout<<"string is palindrome = "<<temp << " :  "<<str<<endl;
  }else
   cout<<"string is not a palindrome = "<<temp << " :  "<<str<<endl;
   
   // cout << str<<endl; 
    

    return 0; 
}
int main1(void)
{

  string str = "geeksforgeeks"; 
  
    // Reverse str[begin..end] 
    //reverse(str.begin(), str.end()); 
  
    cout << str; 
    

    return 0; 
}