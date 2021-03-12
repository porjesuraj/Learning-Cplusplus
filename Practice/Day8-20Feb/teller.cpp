#include<iostream>
#include<vector> 
using namespace std; 

class Account
{

    private: 
    int userId;
    int password; 
    int balance; 

    public : 

    Account(int id = 0,int pass = 0,int bal = 0):userId(id),password(pass),balance(bal)
    { }
    
    friend bool userLogin(int id,int pass); 
  
};

static int in = 0; 



int main(void)
{
    std::vector<Account> acc; 
      
    int choice = 0; 

    
    switch (choice)
    {
    case 1:
        int id,pass; 
        cout<<"enter user id and password"; 
        cin >>id >> pass; 
         
        acc[in++] = new Account(id,pass); 
        


        break;
    
    default:
        break;
    }



    return 0; 
}