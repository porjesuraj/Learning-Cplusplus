//============================================================================
// Name        : 4.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
using namespace std;
class product
{
	private:
	char title[10];
	float price;
    public:
	product()
    {
		strcpy(this->title,"");
		this->price = 0.0f;
    }
	product(char* t,float p)
	{
		strcpy(this->title,title);
		this->price = p;
	}
   void set_title(char * p)
   {
	   strcpy(this->title,p);
   }
   void set_price(float f)
   {
	   this->price = f;
   }
   char* get_title()
   {
	   return this->title;
   }
   float get_price()
   {
	   return this->price;
   }
   virtual void accept()
   {
	   cout<<"enter the product(book/tape) title \n"<<endl;
	   cin>>this->title;
	   //getline(cin,title);
	   cout<<"enter the product(book/tape) price \n"<<endl;
	   	   cin>>this->price;
   }
   virtual void display()
   {
	   cout<<"enter the product title  \n"<<this->title<<endl;
	   	   cout<<"enter the product price \n "<<this->price<<endl;
   }
   virtual float calc_discount()=0;

};
class books:public product
{
private:
	int pages;

public:
	books()
{
		this->pages = 1;
}
	books(int p):pages(1)
	{}
	 void set_pages(int p)
	 {
		 this->pages = p;

	 }
	   int get_pages()
	   {
		   return this->pages;
	   }
	   void accept()
	   {
		   product::accept();
		   cout<<"enter pages \n "<<endl;
		   cin>>pages;

	   }
	   void display()
	   {
		   product::display();
		   		  cout<<pages;

	   }
	   virtual float calc_discount()
	   {
		   return this->get_price()*0.10;
	   }
};
class tapes:public product
{   private:
	int tape_duration;

    public:
	tapes()
    {
		this->tape_duration = 1;

     }
	tapes(int p,float pr):tape_duration(1)
	{}
	void set_tapes(int p)
		 {
			 this->tape_duration = p;

		 }
		   int get_tapes()
		   {
			   return this->tape_duration;
		   }
		   void accept()
		   {
			   product::accept();
			   cout<<"enter tape duration"<<endl;
			   cin>>tape_duration;

		   }
		   void display()
		   {
			   product::display();
			   		  cout<<tape_duration;

		   }
		   virtual float calc_discount()
		 	   {
		 		   return this->get_price()*0.05;
		 	   }
};
int menu_list()
{
	    int choice;
		cout<<"menu for products \n"<<endl;
		cout<<"1.enter transection \n 3.display transection \n 4.bill enter choice \n "<<endl;
		cin>>choice;
		return choice;
}

int main()
{
	books b;
	tapes t1;
	int choice,i;
	float price,disc,final;
	product *ptr[3];
	//product p1;


	 for(i=0; i<3;i++)
	        {
	        cout << "\n\n1. book\n2. tape\n enter option: ";
	        cin >> choice;
	        switch(choice)
	        {
	        case 1:
	                ptr[i] = new books;
	                break;
	        case 2:
	                ptr[i] = new tapes;
	                break;
	        }
	        ptr[i]->accept();
	        }

	        for(i=0; i<3;i++)
	        {
	                ptr[i]->display();
	        }

	        for(i=0; i<3; i++)
	       	        {
	       	        price = ptr[i]->get_price();
	       	        disc = ptr[i]->calc_discount();
	       	        final = final + (price - disc);
	       	        cout<<"discount on product  "<<i+1<<disc<<endl;
	       	        cout<<"price of product  "<<i+1<<price<<endl;
	       	        cout<<"final price of product is "<<i+1<<final<<endl;
	       	        }
	                   cout<<"total price of all product is \n "<<final<<endl;

	                   for(i=0;i<3;i++)
	       	        {
	       	                delete ptr[i];
	       	        }
	return 0;
}
