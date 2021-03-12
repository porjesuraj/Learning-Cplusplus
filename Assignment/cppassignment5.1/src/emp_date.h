/*
 * emp_date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMP_DATE_H_
#define EMP_DATE_H_
class date
{ private:
  int day;
  int month;
  int year;

  public:
  date()
  {
	  this->day = 1;
	  this->month = 1;
	  this->year = 1970;
  }
  date(int d,int m, int y)
  {
	  this->day = d;
	  	  this->month = m;
	  	  this->year = y;
  }
  void AcceptDate();
  void PrintDate();
 };


class employee
{
private:
	int id;
	float sal;
	char dept[24];
	date joining;
public:

	employee();
	void get_joining_date();
    void set_joining_date(date);
    void display();
    void accept();
     int get_id();
    void set_id(int);
};



#endif /* EMP_DATE_H_ */
