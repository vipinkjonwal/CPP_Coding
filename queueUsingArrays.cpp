/*
Program     : Class definition for implementing Queue using arrays.
Author      : © Vipin Kumar
Created on  : March 11, 2018 20:57 IST
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#define SIZE 10

using namespace std;

class Queue {
	
	/*
	Summary
	-------
	Create a class to implement Queue(circular) using dynamically created array.

	Extended Summary
	----------------
	This is a class definition of a Queue(Circular) which is created using a
	dynamically created array. By dynamically created array, we means that the
	array will be created when it is to be used and deleted afterwards.
	The queue will be circular in nature i.e, the `head` index will be at index
	`rear`+1.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	Class definition

	Approach
	--------
	Class definition provides data member and member functions for the Queue
	class.
	*/

public:
	int *queueArray;							// Array to store queue elements
	int capacity;								// Maximum capacity of the Q
	int front;									// Front points to front element in the Q
	int rear;									// Rear points to last element in the Q
	int count;									// Current size of the Q

	Queue(int size = SIZE);						// Constructor
	~Queue();									// Destructor
	void dequeue();								// Deleting the element.
	void enqueue(int);							// Inserting the element.
	int peek();  								// Returns front element
	int size();									// Returns current size of Q.
	bool isEmpty();								// Check if Queue is Empty.
	bool isFull();								// Check if Queue is Full.
	void display();								// Display the contents of Queue.
};

Queue::Queue(int size = SIZE) {
	/*
	Summary
	-------
	Create a constructor for Queue class.

	Extended Summary
	----------------
	This is a constructor definition of a Queue class. This constructor
	initializes the class variables and alloted memory space for the
	them. It also creates the dynamic array. A Constructor definition
	is necessary because of it's importance in memory allotment.

	Parameters
	----------
	size : int type, tells about the memory alloted to the array being
	initialized.

	Returns
	-------
	None

	Description
	-----------
	Queue Constructor definition.

	Approach
	--------
	Constructor definition provides information of data member when they are
	being initialized at run time.
	*/

	capacity = 0;
	front = -1;
	rear = -1;
	queueArray = new int[SIZE];
}

Queue::~Queue() {
	/*
	Summary
	-------
	Create a destructor for Queue class.

	Extended Summary
	----------------
	This is a destructor definition of a Queue class. This destructor
	deletes the dynamically alloted variables and free the space.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	Queue Destructor definition.

	Approach
	--------
	Destructor definition provides information of data member when they are
	being deleted at run time.
	*/
	delete queueArray;
}

bool Queue::isEmpty () {
	/*
	Summary
	-------
	Create isEmpty() function.

	Extended Summary
	----------------
	isEmpty function tells about the condition when the queue is empty. This condition will
	be checked while deleting elements from the queue as we can't delete any element from
	empty queue.

	Parameters
	----------
	None

	Returns
	-------
	true - bool value, if queue is empty.
	false - bool value, if queue is not empty.

	Description
	-----------
	isEmpty() function definition.

	Approach
	--------
	Check the value of `front` if it is -1.
	*/

	if (front == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool Queue::isFull () {
	/*
	Summary
	-------
	Create isFull() function.

	Extended Summary
	----------------
	isFull function tells about the condition when the queue is full. This condition will
	be checked while inserting elements in the queue as we can't insert any element in a 
	queue which is full.

	Parameters
	----------
	None

	Returns
	-------
	true - bool value, if queue is full.
	false - bool value, if queue is not full.

	Description
	-----------
	isFull() function definition.

	Approach
	--------
	Check the value of `rear` if it is SIZE - 1.
	*/

	if ((rear == SIZE - 1 && front == 0) || (rear == front - 1)) {
		return true;
	}
	else {
		return false;
	}
}

void Queue::enqueue (int element) {
	if (isFull()) {
		cerr << "Queue is already full. Delete some elements to enter more.";
	}

	else if (front == -1) {
		front = 0;
		rear = 0;
		queueArray[rear] = element;
	}

	else if (rear == SIZE - 1 && front != 0) {
			rear = 0;
			queueArray[rear] = element;
		
	}

	else {
		rear++;
		queueArray[rear] = element;
	}
}

int main () {
	Queue q;
	int choice;

	cout << "\t\t***** CIRCULAR QUEUE USING ARRAY\n\n";
	cout << "Enter the capacity of queue: ";
	cin >> q.capacity;

	while (true) {
		system ('cls');
		cout << "\t\t***** CIRCULAR QUEUE USING ARRAY\n\n";
		cout << "1. ENQUEUE\n";
		cout << "2. DEQUEUE\n";
		cout << "3. PEEK ELEMENT\n";
		cout << "4. SIZE\n";
		cout << "5. DISPLAY\n";
		cout << "6. EXIT\n";
	}

}