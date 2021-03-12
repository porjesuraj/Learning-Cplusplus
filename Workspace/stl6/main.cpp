/*
 * main.cpp
 *
 *  Created on: 08-Apr-2020
 *      Author: nilesh
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

// name (string) -> mobile (string)
int main() {
	map<string,string> contacts;
	contacts["nilesh"] = "9527331338";
	contacts["nitin"] = "9881208115";
	contacts["prashant"] = "9881208114";
	contacts["nilesh"] = "7722093091"; // replace old number

	//contacts.erase("nitin");

	cout << "size = " << contacts.size() << endl;

	string name, mobile;
	cout << "enter name: ";
	cin >> name;
	mobile = contacts[name];
	cout << "mobile: " << mobile << endl;


	return 0;
}

/*
// store student roll and marks, so that for given roll, marks should be found quickly.
// key=roll (int), value=marks (double)
int main() {
	map<int,double> m;
		// internally each data is stored as pair<key,value>.
		// like vector< pair<k,v> > -- duplicate keys will be allowed here.

	// add key-value into map
	m[11] = 99.0;
	m[22] = 97.0;
	m[33] = 80.0;
	m[44] = 97.0; // duplicate values are allowed
	m[33] = 84.0; // duplicate keys are not allowed
					// older value will be replaced -- 84.0 will replace 80.0
	pair<int,double> p(55, 95.0);
	m.insert(p);

	// find value for given roll
	int roll;
	cout << "enter roll: ";
	cin >> roll;
	double marks = m[roll];
	cout << "marks : " << marks << endl;

	// traversing map (all key-values)
	map<int,double>::iterator itr = m.begin();
	while(itr != m.end()) {
		cout << itr->first << " --> " << itr->second << endl;
		itr++;
	}
	return 0;
}
*/





