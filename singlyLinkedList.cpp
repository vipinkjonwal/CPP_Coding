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

	See Also
	--------
	SinglyLinkedList Class : Class definition of singly linked list.
	*/

	int data;
	node* next;
};


class SinglyLinkedList {
	/*
	Create a class to implement Singly Linked List.

	Extended Summary
	----------------
	This is a class definition of a Singly Linked List which is created using a
	structure of node. The node structure has two elements, the data part and the 
	address part. A linked list, in contrast with arrays, is dynamicaaly created 
	data structure whose size is not necessary to be defined beforehand. 

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	Class definition

	Class Variables
	---------------
	head : dtype node - the head of the linked list.
	data : dtype int - the data part of the node of linked list.
	size : dtype int - current size of the linked list.
	
	Member Functions
	----------------
	SinglyLinkedList() : Constructor of class SinglyLinkedList.
	~SinglyLinkedList() : Destructor the class SinglyLinkedList.
	insertBegin(int) : void - inserting the element at beginning.
	insertEnd(int) : void - inserting the element at end.
	insertPosition(int,int)	: void - inserting the element at a position.
	deleteBegin(int) : void - deleting the element from the beginning.
	deleteEnd(int) : void - deleting the element from the end.
	deletePosition(int,int)	: void - deleting the element from a position.
	deleteValue(int) : void - deleteing the element by a value given.
	sizeList() : int - returns current size of the linked list.
	display() : void - display the contents of linked list.

	Approach
	--------
	Class definition provides data member and member functions for the
	SinglyLinkedList class.

	See Also
	--------
	node struct : Structure definition of node.
	*/

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
	/*
	Create a constructor for SinglyLinkedList class.

	This is a constructor definition of a SinglyLinkedList class. This 
	constructor initializes the class variables and alloted memory space 
	for them. A Constructor definition is necessary because of it's 
	importance in memory allotment.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	SinglyLinkedList Constructor definition.

	Approach
	--------
	Constructor definition provides information of data member when they
	are being initialized at run time. The `head` pointer is set to NULL
	and the initial size of Linked List is set to zero.
	
	See Also
	--------
	~SinglyLinkedList() : SinglyLinkedList destructor definiton.
	*/

	head = NULL;
	size = 0;
}


SinglyLinkedList::~SinglyLinkedList () {
	/*
	Create a destructor for SinglyLinkedList class.

	This is a destructor definition of a SinglyLinkedList class. 
	This destructor deletes the dynamically alloted variables and 
	free the space.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	SinglyLinkedList Destructor definition.

	Approach
	--------
	Destructor definition provides information of data member when they are
	being deleted at run time. In this destructor, we emptied the linked list
	if it's present.

	See Also
	--------
	SinglyLinkedList() : SinglyLinkedList constructor definiton.
	*/

	node* temp;
	while (head->next != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
}


void SinglyLinkedList::insertionBegin (int value) {
	/*
	Create function for insert an element at beginning of linked 
	list.

	This is a definition of a insertBegin function. This function
	will perform insertion operation where insertion will be done
	at the beginning of the linked list. A newNode will be created 
	with data as `value` and the node is added at the beginning of 
	the list. `head` pointer will also be set to newNode.

	Parameters
	----------
	vallue : dtype int - data value of the node, to be inserted.

	Returns
	-------
	None

	Description
	-----------
	insertBegin function definition.

	Approach
	--------
	A new node is created and and if list was empty, head is set to
	new node. Else, we set the `next` pointer to be head, which adds
	the node to the front of head and then head is set to newNode.
	`size` of linked list is also incremented by one.


	See Also
	--------
	insertEnd(int) : Insertion at end of linked list.
	insertPosition(int,int) : Insertion at a position specified by the 
		position provided in arguments.
	*/

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
		cout << "Linked List is EMPTY.\n";
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
		cout << "Linked List is EMPTY.\n";
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


void SinglyLinkedList::deletionPosition (int position) {
	int tempCount = position;

	if (position == 1) {
		deletionBegin ();
	}

	else if (position == size + 1) {
		deletionEnd ();
	}

	else if (position > size + 1) {
		cout << "ERROR: Position can't be greater than size of linked list.\n";
		cout << "Current Size is " << size;
	}

	else {
		
		node* temp = head;
		node* delNode = head;

		while (tempCount != 2) {
			temp = temp->next;
			delNode = delNode->next;
			tempCount--;
		}

		delNode = delNode->next;
		temp->next = delNode->next;
		delete delNode;
		size--;
	}
}


void SinglyLinkedList::deletionValue (int value) {
	node* temp = head;
	node* delNode;

	if (head->data == value) {
		deletionBegin ();
	}

	else {
		while (temp->next->data != value) {
			if (temp->next->next != NULL) {
				temp = temp->next;
			}
			else {
				cout << "Element NOT Found.\n";
				return;
			}
		}
		delNode = temp->next;
		temp->next = delNode->next;
		delete delNode;
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
	int value;
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
					getch();
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

			case 3: cout << "Enter the position: ";
					cin >> position;
					sll.deletionPosition (position);
					sll.display ();
					getch ();
					break;

			case 4: cout << "Enter the value: ";
					cin >> value;
					sll.deletionValue (value);
					sll.display ();
					getch ();
					break;
			
			case 5: break;

			default:
				cout << "ERROR: Invalid Choice, please enter again!";
				getch ();
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