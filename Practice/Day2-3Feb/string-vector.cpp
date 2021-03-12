#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main3(void)
{


int n = 3; 

vector<double> demo4(n,5.5);


for(double d : demo4)
{
    cout<<d<<","; 
}



    return 0;
}

int main(void)
{
  
  string arr[] = {
      "one", "two","three","four","five"
  };

  vector<string> demo2(arr, arr + sizeof(arr)/sizeof(std::string)); 

for(string s : demo2)
{
    cout<<s <<","; 
}
cout<<"\n"; 

vector<string> demo3(demo2.begin(),demo2.end()); 
for(string s : demo3)
{
    cout<<s <<","; 
}

fill(demo3.begin(),demo3.end(),"hello"); 

cout<<"\n"; 

for(string s : demo3)
{
    cout<<s <<","; 
}



    return 0;
}


int main1(void)
{
  
  string arr[] = {
      "one", "two","three","four","five"
  };

  vector<string> demo2(arr, arr + sizeof(arr)/sizeof(std::string)); 

for(string s : demo2)
{
    cout<<s <<","; 
}


    return 0;
}
