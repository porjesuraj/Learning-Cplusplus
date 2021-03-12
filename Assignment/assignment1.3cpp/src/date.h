/*
 * date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_
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
  void InitDate();
  void AcceptDateFromConsole();
  void PrintDateOnConsole();
  bool IsLeapYear();
 };

#endif /* DATE_H_ */
