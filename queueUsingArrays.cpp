/*
Program     : Class definition for implementing Queue(Circular) using arrays.
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

	Class Variables
	---------------
	queueArray	: Dynamic array, to store the queue elements.
	capacity	: Maximum capacity of the queue.
	front		: `front` points to the front element in the queue.
	rear		: `rear` points to last element in the queue.
	count		: Current size of the queue.

	Member Functions
	----------------
	Queue()		: Constructor of class Queue.
	~Queue()	: Destructor the class Queue.
	dequeue()	: void - deleting the element.
	enqueue()	: void - inserting the element.
	peek()		: int - returns front element.
	size()		: int - returns current size of the queue.
	isEmpty()	: bool - check if queue is empty.
	isFull()	: bool - check if queue is full.
	display()	: void - display the contents of queue.

	Approach
	--------
	Class definition provides data member and member functions for the 
	Queue class.
	*/

public:
	int *queueArray;							
	int capacity;								
	int front;									
	int rear;									
	int count;									

	Queue();									
	~Queue();									
	void dequeue();								
	void enqueue(int);							
	int peek();  								
	int size();									
	bool isEmpty();								
	bool isFull();								
	void display();								
};

Queue::Queue() {
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
	Constructor definition provides information of data member when they 
	are being initialized at run time.
	*/

	capacity = 0;
	count = 0;
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
	isEmpty function tells about the condition when the queue is empty. This condition 
	will be checked while deleting elements from the queue as we can't delete any 
	element from empty queue.

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
	isFull function tells about the condition when the queue is full. This condition 
	will be checked while inserting elements in the queue as we can't insert any 
	element in a queue which is full.

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

	if ((rear == capacity - 1 && front == 0) || (rear == front - 1)) {
		return true;
	}
	else {
		return false;
	}
}

void Queue::enqueue (int element) {
	/*
	Summary
	-------
	Create enqueue() function.

	Extended Summary
	----------------
	enqueue() function will insert the element specified by the argument. The 
	element will be added at the `rear` end of the queue. The element can be inserted 
	only when queue is not full. In case, it will prompt that queue is already full.
	With the insertion of the element at `rear` end, it will also increment the current 
	size of the queue specified by the `count` variable.


	Parameters
	----------
	element : int - the element to be inserted at the rear end of the queue.

	Returns
	-------
	None

	Description
	-----------
	enqueue() function definition.

	Approach
	--------
	The element will be added at the `rear` end of the queue. When the `rear` will be
	`capacity`-1 and front is not zero, rear is set to zero and element is inserted at 
	rear end.
	*/

	if (isFull()) {
		cerr << "ERROR: Queue is already full. Delete some elements to enter more.";
		getch ();
		return;
	}

	// First element.
	else if (front == -1) {
		front = 0;
		rear = 0;
		queueArray[rear] = element;
		count++;
	}

	else if (rear == capacity - 1 && front != 0) {
			rear = 0;
			queueArray[rear] = element;
			count++;
		
	}

	else {
		rear++;
		queueArray[rear] = element;
		count++;
	}
}

void Queue::dequeue() {
	/*
	Summary
	-------
	Create dequeue() function.

	Extended Summary
	----------------
	dequeue() function will delete the element. The element at the `front` will be 
	deleted from the queue. The element can be deleted only when queue is not empty. 
	In case, it will prompt that queue is empty. With the deletion of the element from 
	`front`, it will also decrement the current size of the queue specified by the 
	`count` variable.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	dequeue() function definition.

	Approach
	--------
	The element will be deleted from the `front` size of the queue when queue is not empty. 
	When the `front` will be equal to `rear`, front will be set to -1, case of single element.
	In rest cases, front will be incremented, in case of front =  capacity - 1, front will be 
	incremented and due to circular nature of queue, it will be 0.
	*/

	if (isEmpty()) {
		cerr << "ERROR: Queue is empty. Insert some elements to delete.\n";
		getch ();
		return;
	}

	// In case of single element.
	else if (front == rear) {
		front = -1;
		rear = -1;
		count--;
	} 

	else if (front == capacity - 1) {
		front = 0;
		count--;
	}

	else {
		front++;
		count--;
	}
}

int Queue::peek () {
	/*
	Summary
	-------
	Create peek() function.

	Extended Summary
	----------------
	peek() function will gives the element present at front of queue, until the queue
	is not empty.In case of queue being empty, it will prompt that queue is empty
	and thus, no front element is there.

	Parameters
	----------
	None

	Returns
	-------
	queueArray[front] : int - front element of the queue.

	Description
	-----------
	peek() function definition.

	Approach
	--------
	Return queueArray[front] whenever queue is not empty.
	*/

	if (!isEmpty()) {
		return queueArray[front];
	}
	else {
		cout << "Queue is empty. No front element.\n";
		return -1;
	}
	
}

int Queue::size () {
	/*
	Summary
	-------
	Create size() function.

	Extended Summary
	----------------
	size() function will gives the current size of the queue. The current size will
	always be less than or equal to `capacity` of the queue.

	Parameters
	----------
	None

	Returns
	-------
	count : int - current size of the queue.

	Description
	-----------
	size() function definition.

	Approach
	--------
	Return value of `count` variable.
	*/

	return count;
}

void Queue::display () {
	/*
	Summary
	-------
	Create display() function.

	Extended Summary
	----------------
	display() function will display the content of queue i.e, the status of queue. Since, it
	is circular queue, some checks are required in order to get the exact status of the queue.
	When `rear` is ahead of `front`, we simply print queue from `front` to `rear`. In case when
	`front` is ahead of `rear`, we will be needed to print the queue in two parts - from `front`
	to `count` and from 0 to `rear`.

	Parameters
	----------
	None

	Returns
	-------
	None

	Description
	-----------
	display() function definition.

	Approach
	--------
	cout the content of array specified by queueArray varuable.
	*/

	if (isEmpty()) {
		cout << "Queue is Empty.";
		return;
	}

	cout << "Queue is ";
	if (rear >= front) {
		for (int i = front;  i <= rear;  i++) {
			cout << queueArray[i] << " ";
		}
	}

	else {
		for (int i = front; i < count; i++) {
			cout << queueArray[i] << " ";
		}

		for (int i = 0; i <= rear; i++) {
			cout << queueArray[i] << " ";
		}
	}
}

int main () {
	/*
	Summary
	-------
	Create main() function.

	Extended Summary
	----------------
	main() function will invoke all the member function defined under class Queue 
	according to their need and usability with the help of object of class.

	Parameters
	----------
	None

	Returns
	-------
	0 : int - succesful termination of program.

	Description
	-----------
	main() function definition.

	Approach
	--------
	Switch cases are used to different functionalities under class Queue.
	*/

	// Object of class Queue.
	Queue q;

	int choice;
	int element;
	int peekElement;
	int currentSize;

	system ("cls");
	cout << "\t\t***** CIRCULAR QUEUE USING ARRAY\n\n";
	cout << "Enter the capacity of queue: ";
	cin >> q.capacity;

	q.queueArray = new int[q.capacity];

	// Menu driven.
	while (true) {
		system("cls");
		cout << "\t\t***** CIRCULAR QUEUE USING ARRAY\n\n";
		cout << "1. ENQUEUE\n";
		cout << "2. DEQUEUE\n";
		cout << "3. FRONT ELEMENT\n";
		cout << "4. SIZE\n";
		cout << "5. DISPLAY\n";
		cout << "6. EXIT\n";

		cout << "Enter the choice: ";
		cin >> choice;

		switch (choice) {
		
		// Enqueue an `element`.
		case 1: cout << "Enter the element: ";
				cin >> element;
				q.enqueue (element);
				q.display ();
				getch ();
				break;

		// Dequeue from the front of queue.
		case 2: q.dequeue ();
				q.display ();
				getch ();
				break;
		
		// Front element of queue. 
		case 3: peekElement = q.peek ();
				if (!q.isEmpty()) {
					cout << "Front element is " << peekElement;
				}
				getch ();
				break;
		
		// Current size of queue.
		case 4: currentSize = q.size ();
				cout << "Current size of queue is " << currentSize;
				getch ();
				break;
		
		// Display content of queue i.e, current status.
		case 5: q.display ();
				getch ();
				break;
		
		// Exit from the program.
		case 6: exit (0);
				break;
		
		// Wrong Choice entered.
		default:
			cerr << "ERROR: Invalid Choice, re-enter your choice.\n";
			getch ();
			break;
		}
	}
	getch();
	return 0;
}