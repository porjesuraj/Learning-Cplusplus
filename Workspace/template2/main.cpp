/*
 * main.cpp
 *
 *  Created on: 06-Apr-2020
 *      Author: nilesh
 */
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#include "Student.h"
#include "Stack.h"

const int N=5;

template<typename T>
class Array {
private:
	T arr[N];
public:
	Array() {
		memset(arr, 0, sizeof(arr));
	}
	T get(int index) {
		if(index < 0 || index >= N) {
			cout << "invalid index in get() : " << index << endl;
			exit(1);
		}
		return arr[index];
	}
	void set(int index, T val) {
		if(index < 0 || index >= N) {
			cout << "invalid index in set() : " << index << endl;
			return;
		}
		arr[index] = val;
	}
};

int main() {
	/*
	Array<double> a1;
	int i;
	for(i=0; i<N; i++)
		a1.set(i, i*1.1);
	for(i=0; i<N; i++)
		cout << a1.get(i) << endl;

	Array<Student> a2;
	Student s;
	for(i=0; i<N; i++) {
		s = a2.get(i);
		s.display();
	}
	*/

	Stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	while(!s1.empty()) {
		int ele = s1.peek();
		s1.pop();
		cout << "popped: " << ele << endl;
	}
	return 0;
}



