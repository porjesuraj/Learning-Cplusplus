/*
 * main.cpp
 *
 *  Created on: 11-Mar-2020
 *      Author: nilesh
 */

#include <iostream>
using namespace std;

class node; // forward declaration of class

class singly_list {
private:
	node *head;
public:
	singly_list();
	void add_last(int val);
	void display();
};

class node {
private:
	int data;
	node *next;
public:
	node(int val);
//	friend void singly_list::add_last(int val);
//	friend void singly_list::display();
	friend class singly_list;
};

node::node(int val) {
	data = val;
	next = NULL;
}

singly_list::singly_list() {
	head = NULL;
}
void singly_list::add_last(int val) {
	node *newnode = new node(val);
	if(head == NULL)
		head = newnode;
	else {
		node *trav = head;
		while(trav->next != NULL)
			trav = trav->next;
		trav->next = newnode;
	}
}

void singly_list::display() {
	node *trav = head;
	while(trav != NULL) {
		cout << trav->data << endl;
		trav = trav->next;
	}
}

int main() {
	singly_list l1;
	l1.add_last(10);
	l1.add_last(20);
	l1.add_last(30);
	l1.display();
	return 0;
}
