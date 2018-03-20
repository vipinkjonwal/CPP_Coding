/*
Program     : Reverse the Linked List in Pairs.
Author      : © Vipin Kumar
Created on  : March 20, 2018 11:38 IST
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

struct node {
	int data;
	node* next;
};


class SinglyLinkedList {
public:
	node * head;
	int data;
	int size;

	SinglyLinkedList ();
	~SinglyLinkedList ();
	void insertion (int);
	void display ();

};


SinglyLinkedList::SinglyLinkedList () {
	head = NULL;
	size = 0;
}


SinglyLinkedList::~SinglyLinkedList () {
	node* temp;
	while (head->next != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
}


void SinglyLinkedList::insertion (int value) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;

	node* temp;

	if (head == NULL) {
		head = newNode;
	}

	else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	size++;
}


void SinglyLinkedList::display () {
	node* temp = head;

	if (head == NULL) {
		cout << "Linked List is EMPTY.\n";
	}

	else if (head->next == NULL) {
		cout << head->data;
	}

	else {
		while (temp->next != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << temp->data;
	}
}


int main () {
	SinglyLinkedList sll;
	sll.insertion (1);
	sll.insertion (2);
	sll.insertion (3);
	sll.display ();
	getch ();
	return 0;
}