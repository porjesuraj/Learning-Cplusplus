#include <iostream>
#include<vector>

using namespace std;


int main(void)
{

vector<int> v{1,2,3,4,5};

vector<int> v1{6,7,8,9,10,11}; 

v.insert(v.end(),v1.begin(),v1.begin() + 6); 

for(int i : v)
cout<<i<<" "; 

cout<<" \n erase one \n"; 
   v.erase(v.begin() + 10); 

for(int i : v)
cout<<i<<" "; 

cout<<"\n erase two  \n"; 
   v.erase(v.begin()+6);

for(int i : v)
cout<<i<<" "; 

    return 0;
}




int main2() {
    vector <int> v {
        1,
        2,
        3,
        4,
        5
    };
vector<int> v2 (5,1); 

cout<<v.back();

cout<<v.front();

 v.swap(v2); 
   
   v.push_back(2);
   v.push_back(2);
   v.pop_back(); 
 
 v.insert(v.begin()+2,2,100); 
cout<<"\n"; 
   for(int i = 0; i< v.size(); i++)
   {
     
      cout<<v[i]<<","<<endl;; 
      
   //   cout<<v2[i]<<","; 
   }
  

 if(v.empty())
 {
     
 }
   

  

    return 0;
}



int main1() {
    vector <int> v {
        1,
        2,
        3,
        4,
        5
    };

    vector<int> v2(v); 
    std::cout << v.max_size() << std::endl;

   for(int i = 0; i< v.size(); i++)
   {
       //cout<<v[i]<<endl;

      //g++ cout<<v.operator[](i)<<endl;

      
   }
     vector<int> v3; 

    v3.operator=(v); 

   if(v == v3)
   cout<<"equal"; 

    cout<<v.at(3);

 
   

  

    return 0;
}