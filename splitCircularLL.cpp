/*
Program     : Split Circular LL into two circular LLs. (Q3 : Assignment 1)
Author      : © Vipin Kumar
Created on  : March 25, 2018 13:17 IST
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

struct node {
	/*
	Node struct definition

	This structure defines the structure of node of the linked list.
	The node structure of a singly linked list has two elements
	namely data (dtype - int) and next (dtype node pointer). This
	will helps to create an entity of a linked list i.e, a node.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	Struct definition

	Struct Variables
	----------------
	data : dtype int - data element of the node.
	next : dtype node pointer - pointer to the next node.

	Approach
	--------
	Struct definition provides variables for the the structure.
	*/

	int data;
	node* next;
};


class SplitCircularLL {
public:
	node* head;
	node* tail;
	int data;
	
	SplitCircularLL ();
	~SplitCircularLL ();
	void insertionToEmpty (int);
	void insertionEnd (int);
	void display ();
	void splitList (node*);
};

SplitCircularLL::SplitCircularLL () {
	head = NULL;
	tail = NULL;
}


SplitCircularLL::~SplitCircularLL () {
	head = NULL;
	tail = NULL;
}


void SplitCircularLL::insertionToEmpty (int value) {
	if (tail != NULL) {
		return;
	}

	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	tail = newNode;
	head = newNode;
	tail->next = tail;
	return;
}


void SplitCircularLL::insertionEnd (int value) {
	if (tail == NULL) {
		insertionToEmpty (value);
	}

	else {
		node* newNode = new node;
		newNode->data = value;
		tail->next = newNode;
		tail = newNode;
		tail->next = head;
	}
}


void SplitCircularLL::splitList (node* head) {
	node* slow;
	node* fast;

}

void SplitCircularLL::display () {
	node* temp;

	if (tail == NULL) {
		cout << "Linked List is EMPTY!";
		return;
	}

	temp = tail->next;

	do {
		cout << temp->data << "  ";
		temp = temp->next;

	} while (temp != tail->next);
}

int main () {
	system ("cls");
	SplitCircularLL scll;
	scll.insertionEnd (2);
	scll.insertionEnd (3);
	scll.insertionEnd (4);
	scll.insertionEnd (5);

	scll.display ();
	getch ();
	return 0;
}