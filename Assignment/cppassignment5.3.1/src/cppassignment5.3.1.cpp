//============================================================================
// Name        : 1.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class employee
{
private:
	int id;
	float salary;

public:
	employee();
	employee(int id,float salary);
	int get_id();
	void set_id(int);

	float get_salary();
	void set_salary(float);
	void accept();
	void display();
};

class salesman:public virtual employee
{
private:
	float comm;
public:
	salesman(int,float,float);
	void display();
	void accept();
	void set_comm(float);
	float get_comm();

	void accept_salesman();
	void display_salesman();

};
class manager:public virtual employee
{
private:
	float bonus;
public:
	manager(int,float,float);
	float get_bonus();
	void set_bonus(float);
	void display();
	void accept();
	void display_manager();
	void accept_manager();
};
class sales_manager:public manager,public salesman
{
public:
sales_manager();
sales_manager(int,float,float,float);
void display();
void accept();
};

employee::employee(int id,float salary)
{
        this->id=id;
        this->salary=salary;

}

int employee::get_id()
{
        return id;
}

void employee::set_id(int id)
{
        this->id=id;
}

float employee::get_salary()
{
        return salary;
}

void employee::set_salary(float salary)
{
        this->salary=salary;
}


void employee::accept()
{
        cout<<"Enter Id";
        cin>>id;
        cout<<"Enter salary";
            cin>>salary;

    }

    void employee::display()
    {
            cout<<endl<<id<<endl;
            cout<<salary<<endl;
    }


    manager::manager(int id,float salary, float bonus)
    :employee(id,salary)
    {

            this->bonus=bonus;
    }

    void manager::display()
    {
            employee::display();
            cout<<"Bonus    :"<<bonus;
    }

    void manager::accept()
    {
        employee::accept();
    	cout<<"Enter bonus";
            cin>>this->bonus;
    }

    float manager::get_bonus()
    {
            return this->bonus;
    }

    void manager::set_bonus(float bonus)
    {
    this->bonus = bonus;
    }

    void manager::display_manager()
    {

            cout<<"\nbonus  :"<<bonus;
    }

    void manager:: accept_manager()
    {

            cout<<"\nEnter bonus";
            cin>>bonus;
    }

    salesman::salesman(int id,float salary ,float comm)
    :employee(id, salary)
    {
            this->comm=comm;
    }

    void salesman::display()
    {
            employee::display();
            cout<<"comm     :"<<comm;

    }

    void salesman::accept()
    {
            employee::accept();
            cout<<"Enter comm    :";
            cin>>comm;
    }

    void salesman::set_comm(float comm)
    {
            this->comm = comm;
    }

    sales_manager::sales_manager()
    {

    }
    sales_manager::sales_manager(int id,float salary,float bonus,float comm)
    :manager(id,salary,bonus),salesman(id,salary,comm)
    {

    }
     void sales_manager::display()
     {
             employee::display();
             salesman::display_salesman();
             manager::display_manager();
     }

     void  sales_manager::accept()
     {
             employee::accept();
             salesman::accept_salesman();
            manager::accept_manager();
     }


     int main()
     {
     sales_manager sm;

     sm.accept();
     sm.display();
     //sm.employee::display();
             return 0;
     }
