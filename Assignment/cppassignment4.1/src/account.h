/*
 * account.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

typedef enum account_type
	{
	SAVING = 1,CURRENT,DMAT
	}enum_t;

class account
{
private:
	int id;
	enum_t type;
	double balance;
public:
    account()
    {
   this->id = 1;
   this->type = SAVING;
   this->balance = 1000;
    }

	void accept();
	void display();
	int id_search(int);
	void set_id(int);
	void set_type();
	void get_id();
	void get_type();
	double get_balance();
	void deposit(double amount);
	void withdraw(double amount);
	~account();
};

#endif /* ACCOUNT_H_ */
