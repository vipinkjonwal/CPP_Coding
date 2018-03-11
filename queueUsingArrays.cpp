/*
Program     : Class definition for implementing Queue using arrays.
Author      : © Vipin Kumar
Created on  : March 11, 2018 20:57 IST
*/

#include <iostream>
#include <cstdlib>
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

	int *arr;					// Array to store queue elements
	int capacity;			// Maximum capacity of the Q
	int front;				// Front points to front element in the Q
	int rear;					// Rear points to last element in the Q
	int count;				// Current size of the Q

public:
	queue(int size = SIZE);			// Constructor
	~queue();										// Destructor
	void dequeue();							// Deleting the element.
	void enqueue(int);					// Inserting the element.
	int peek();  								// Returns front element
	int size();									// Returns current size of Q.
	bool isEmpty();							// Check if Queue is Empty.
	bool isFull();							// Check if Queue is Full.
};
