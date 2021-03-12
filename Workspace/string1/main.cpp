/*
 * main.cpp
 *
 *  Created on: 08-Apr-2020
 *      Author: nilesh
 */

#include <string>
#include <iostream>
using namespace std;

/**
 * string is C++ lib built-in class.
 * it encapsulates array of chars.
 */

int main() {
	string s1;
	unsigned i;
	cout << "s1 length: " << s1.length() << ", s1: " << s1 << endl;
	string s2("sunbeam"); // string s2 = "sunbeam";
	cout << "s2 length: " << s2.length() << ", s2: " << s2 << endl;
	string s3(5, '*');
	cout << "s3 length: " << s3.length() << ", s3: " << s3 << endl;
	string s4(s3); // string s4 = s3;
	cout << "s4 length: " << s4.length() << ", s4: " << s4 << endl;
	string s5(s2, 3, 4); // s2 string char at index 3 and next 4 chars
	cout << "s5 length: " << s5.length() << ", s5: " << s5 << endl;

	for(i=0; i<s2.length(); i++)
		cout << s2[i] << s2.at(i) << ",";
	cout << endl;
	cout << "first & last char of s2 : " << s2.front() << s2.back() << endl; // sn

	s2.append("infotech");
	cout << "s2: " << s2 << endl;

	if(s3 == s4)
		cout << "s3 & s4 are same." << endl;
	else
		cout << "s3 & s4 are not same." << endl;

	string s6 = "sunbeam";
	string s7 = "sunrays";
	int diff = s6.compare(s7);
	cout << "s6 - s7 diff: " << diff << endl;

	int index = s2.find("info");
	cout << "info is found in s2 at index : " << index << endl;

 	string s8 = s2.substr(3, 4); // beam
 	cout << "s8 : " << s8 << endl;

 	s8.erase(1,2); // remove "ea" from "beam"
 	cout << "s8 : " << s8 << endl;

 	char ch = 'n';
 	int cnt=0;
 	for(i=0; i<s2.length(); i++) {
 		if(s2[i] == ch)
 			cnt++;
 	}
 	cout << "freq of n in s2: " << cnt << endl;

 	string s9 = "SunBeam";

	return 0;
}













