/*
 * Stack
 *
 *  Created on: 06-Apr-2020
 *      Author: nilesh
 */

#ifndef STACK_H_
#define STACK_H_

const int MAX=5;

/*
template<typename T>
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
		if(top == -1)
			return true;
		else
			return false;
	}
};
*/

// template class delaration
template<typename T>
class Stack {
private:
	T arr[MAX];
	int top;
public:
	Stack();
	void push(T val);
	void pop();
	T peek();
	bool empty();
};

// template member functions definitions
template<typename T>
Stack<T>::Stack() {
	top = -1;
}

template<typename T>
void Stack<T>::push(T val) {
	top++;
	arr[top] = val;
}

template<typename T>
void Stack<T>::pop(){
	top--;
}

template<typename T>
T Stack<T>::peek() {
	return arr[top];
}

template<typename T>
bool Stack<T>::empty() {
	if(top == -1)
		return true;
	else
		return false;
}

#endif /* STACK_H_ */
