#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{

    vector<string> v = {"a","b","c"};

    string *c = v.data(); 

    for(int i = 0;i < v.size(); i++)
    cout<<*(c++)<<",";

    cout<<'\n'; 
    cout<<v.capacity()<<endl; 

    v.shrink_to_fit();

    cout<<v.capacity(); 

  return 0; 
}