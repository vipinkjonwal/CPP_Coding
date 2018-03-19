/*
Program     : Singly Linked List
Author      : © Vipin Kumar
Created on  : March 19, 2018 12:24 IST
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
	node* head;
	int data;
	int size;

	SinglyLinkedList ();
	~SinglyLinkedList ();
	void insertionBegin (int);
	void insertionEnd (int);
	void insertionPosition (int, int);
	void deletionBegin ();
	void deletionEnd ();
	void deletionPosition (int);
	void deletionValue (int);

	int sizeList ();
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


void SinglyLinkedList::insertionBegin (int value) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	}

	else {
		newNode->next = head;
		head = newNode;
	}
	size++;
}


void SinglyLinkedList::insertionEnd (int value) {
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


void SinglyLinkedList::insertionPosition (int value, int position) {
	int tempCount = position;
	
	if (position == 1) {
		insertionBegin (value);
	}

	else if (position >= size+1) {
		insertionEnd (value);
	}

	else {
		node* newNode = new node;
		newNode->data = value;
		newNode->next = NULL;

		node* temp = head;

		while (tempCount != 2) {
			temp = temp->next;
			tempCount--;
		}

		newNode->next = temp->next;
		temp->next = newNode;
		size++;
	}
}


void SinglyLinkedList::deletionBegin () {
	if (head == NULL) {
		cout << "Linked List is EMPTY.";
	}

	else if (head->next == NULL) {
		node* temp = head;
		delete temp;
		head = NULL;
		size--;
	}

	else {
		node* temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}


void SinglyLinkedList::deletionEnd () {
	if (head == NULL) {
		cout << "Linked List is EMPTY.";
	}

	else if (head->next == NULL) {
		node* temp = head;
		delete temp;
		head = NULL;
		size--;
	}

	else {
		node* temp = head;
		node* tempDel;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		tempDel = temp->next;
		temp->next = NULL;
		delete tempDel;
		size--;	
	}
}


int SinglyLinkedList::sizeList () {
	if (head == NULL) {
		cout << "Linked List is EMPTY. Size is ZERO.";
		return 0;
	}
	else {
		return size;
	}
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
	system ("cls");
	
	SinglyLinkedList sll;
	int element;
	int position;
	int mainChoice;
	int insertChoice;
	int deleteChoice;


	do {
		system ("cls");
		cout << "\t\tSINGLY LINKED LIST\n\n";
		cout << "1. INSERT\n";
		cout << "2. DELETE\n";
		cout << "3. DISPLAY LIST\n";
		cout << "4. EXIT\n";
		cout << "Enter the choice: ";
		cin >> mainChoice;

		switch (mainChoice) {
		case 1:	
			do {
				system ("cls");
				cout << "\t\tINSERT (SINGLY LINKED LIST)\n\n";
				cout << "1. INSERT AT BEGINNING\n";
				cout << "2. INSERT AT END\n";
				cout << "3. INSERT AT POSITION\n";
				cout << "4. PREVIOUS MENU\n";
				cout << "Enter the choice:";
				cin >> insertChoice;

				switch (insertChoice) {
				case 1: cout << "Enter an element: ";
						cin >> element;
						sll.insertionBegin (element);
						sll.display ();
						getch ();
						break;

				case 2: cout << "Enter an element: ";
						cin >> element;
						sll.insertionEnd (element);
						sll.display ();
						getch ();
						break;
				
				case 3: cout << "Enter an element: ";
						cin >> element;
						cout << "Enter the position: ";
						cin >> position;
						sll.insertionPosition (element, position);
						sll.display ();
						getch ();
						break;
				case 4: break;
				default:
					cout << "ERROR: Invalid Choice, please enter again!";
					break;
				}
			} while (insertChoice != 4);
			break;
		
		case 2: do {
			system ("cls");
			cout << "\t\tDELETE (SINGLY LINKED LIST)\n\n";
			cout << "1. DELETE FROM BEGINNING\n";
			cout << "2. DELETE FROM END\n";
			cout << "3. DELETE BY POSITION\n";
			cout << "4. DELETE BY VALUE\n";
			cout << "5. PREVIOUS MENU\n";
			cout << "Enter the choice: ";
			cin >> deleteChoice;

			switch (deleteChoice) {
			case 1: sll.deletionBegin ();
					sll.display ();
					getch ();
					break;

			case 2:	sll.deletionEnd ();
					sll.display ();
					getch ();
					break;

			case 3: sll.display ();
				getch ();
				break;

			case 4: break;
			
			case 5: break;

			default:
				cout << "ERROR: Invalid Choice, please enter again!";
				break;
			}
		} while (deleteChoice != 5);
		break;

		case 3: sll.display ();
				getch ();
				break;

		case 4: exit (0);
				break;
		default:
			cout << "ERROR: Invalid Choice, please enter again!";
			break;
		}
	} while (mainChoice != 4);

	getch ();
	return 0;
}