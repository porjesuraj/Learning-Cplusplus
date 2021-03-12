#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int > demo1 = {1,2,3,4,5}; 

    demo1.push_back(6); 

    for(vector<int>::iterator itr = demo1.begin();itr!= demo1.end();++itr)
    {
        cout<<*itr<<",";
    }

    cout<<"\n"; 

    for(vector<int>::reverse_iterator itr = demo1.rbegin();itr!= demo1.rend();++itr)
    {
        cout<<*itr<<",";
    }

    for(int i : demo1)
    {
        cout<<i<<":"; 
    }

    return 0;
}
