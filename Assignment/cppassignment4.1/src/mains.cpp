

#include <iostream>
#include"account.h"
using namespace std;
int menu_list(void);

int main()
{
	fflush(stdin);
	account c[5];
	int new_id,temp;

	int choice,ch;
	double amount;
	while((choice = menu_list()) != 0)
	{   int i;
		switch(choice)
	{
		case 1:

			cout<<"enter no of account to be entered less than 6 \n";
			cin>>ch;
			for(i=0;i<ch;i++)
	        c[i].accept();
	    break;
		case 2:
			           cout<<"enter no of account to be displayed less than 6 \n";
						cin>>ch;
			            cout<<"display all accounts \n ";
						for(i=0;i<ch;i++)
	                    c[i].display();
	    break;
		case 3:
			int new_id,temp;
			temp = 0;
			cout<<"enter id no to be changed \n";
			cin>>temp;
			cout<<"";
			for(i=0;i<5;i++)
			if((c[i].id_search(temp)) == 1)
			{	cout<<"enter new id no \n ";
			cin>>new_id;
			 c[i].set_id(new_id);
			}
			else
				cout<<"invalid id \n "<<endl;

	break;
		case 4:

			cout<<"enter id no of account to change account type \n";
			cin>>temp;
			for(i=0;i<5;i++)
		    if((c[i].id_search(temp)) == 1)
		    {
		    	c[i].set_type();
		    }
	    break;
		case 5:

			cout<<"enter account no to check if exist \n";
		    cin>>temp;
		     for(i=0;i<5;i++)
			if((c[i].id_search(temp)) == 1)
	           {
				c[i].get_id();
	           }
			else
				cout<<"wrong id \n ";
	    break;
	    case 6:
	 cout<<"enter account no to check balance \n";
	 cin>>temp;
	 double bal;
	 for(i=0;i<5;i++)
      if((c[i].id_search(temp)) == 1)
	   {
    	  bal = c[i].get_balance();
	      cout<<bal;
	    }

	     break;

		case 7:
		{
			cout<<"enter account no for deposit \n";
				 cin>>temp;
				 for(i=0;i<5;i++)
			      if((c[i].id_search(temp)) == 1)
	              {
			    	  cout<<"enter amount to credit to account \n";
	                  cin>>amount;
	                  c[i].deposit(amount);
	              }
			      //else
			    	  //cout<<"invalid account"<<endl;
		}
		break;
		case 8:
			cout<<"enter account no for withdraw \n";
		    cin>>temp;
		    for(i=0;i<5;i++)
			 if((c[i].id_search(temp)) == 1)
		  {
				 try
				 {
		          cout<<"enter amount to debit from balance";
	              cin>>amount;
			      if(amount > c[i].get_balance())
			      throw 1;
			      else
			    	  c[i].withdraw(amount);
			     }
				 catch(int)
				 {
					 cout<<"insufficient funds"<<endl;
				 }
		  }

	  break;
	}
	}
	return 0;
}
