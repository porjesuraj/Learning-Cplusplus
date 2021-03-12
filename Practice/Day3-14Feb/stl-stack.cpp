#include<iostream>  
#include<stack>  
#include<string>  

int main()  
{  
    std::stack<std::string> newstack;  
    newstack.push("11");  
    newstack.push("22");  
    newstack.push("33");  
    newstack.push("44");  
    newstack.push("55");  
    newstack.push("66");  
    newstack.push("77");  
    newstack.push("88");  
    newstack.push("99");  
    newstack.push("122");  

    
    std::cout << "Contents of newstack: \n";  
     std::cout <<"Table of 11";  
  
 
    while (!newstack.empty () )  
    {  
        std::cout << newstack.top () << "\n";  
         std::cout<< "size : "<<newstack.size()<<std::endl; 
        newstack.pop ();  
    }  
    return 0;  
}  


int main1()  
{  
    std::stack<std::string> newstack;  
    newstack.emplace ("11");  
    newstack.emplace ("22");  
    newstack.emplace ("33");  
    newstack.emplace ("44");  
    newstack.emplace ("55");  
    newstack.emplace ("66");  
    newstack.emplace ("77");  
    newstack.emplace ("88");  
    newstack.emplace ("99");  
    newstack.emplace ("122");  

    
    std::cout << "Contents of newstack: \n";  
     std::cout <<"Table of 11";  
  
 
    while (!newstack.empty () )  
    {  
        std::cout << newstack.top () << "\n";  
         std::cout<< "size : "<<newstack.size()<<std::endl; 
        newstack.pop ();  
    }  
    return 0;  
}  