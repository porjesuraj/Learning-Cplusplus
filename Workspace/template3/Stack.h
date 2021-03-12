/*
 * Stack.h
 *
 *  Created on: 07-Apr-2020
 *      Author: nilesh
 */

#ifndef STACK_H_
#define STACK_H_

template<typename T, int MAX>
class Stack {
private:
	T arr[MAX];
	int top;
public:
	Stack() {
		top = -1;
	}
	void push(T val) {
		top++;
		arr[top] = val;
	}
	void pop() {
		top--;
	}
	T peek() {
		return arr[top];
	}
	bool empty() {
		return top==-1? true: false;
	}
	bool full() {
		return top==MAX-1? true: false;
	}
};



#endif /* STACK_H_ */
