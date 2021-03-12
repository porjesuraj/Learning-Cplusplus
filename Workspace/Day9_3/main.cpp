/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
#include <string>
using namespace std;

class student {
private:
	int roll;
	//char name[20];
	string name;
	int marks;
public:
	student() {
		this->roll = 0;
		this->name = "";
		this->marks = 0;
	}
	student(int roll, const string& name, int marks) {
		this->roll = roll;
		this->name = name;
		this->marks = marks;
	}
	friend void display(student &s);
};

// global functions
void display(student &s) {
	cout << "roll: " << s.roll << endl;
	cout << "name: " << s.name << endl;
	cout << "marks: " << s.marks << endl;
}

int main() {
	student s1(2, "James", 99);
	display(s1);

	string str1;
	string str2 = "sunbeam";
	string str3 = str2;
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
	str1 = "infotech";
	cout << "str1: " << str1 << endl;

	if(str2.compare(str3) == 0)
		cout << "str2 is same as str3" << endl;
	else
		cout << "str2 is different str3" << endl;

	if(str1 == str2)
		cout << "str1 is same as str2" << endl;
	else
		cout << "str1 is different str2" << endl;

	string str4;
	cout << "enter a string: ";
	cin >> str4;
	cout << "entered string: " << str4 << endl;
	return 0;
}



