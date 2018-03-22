/*
Program     : Queue using STL Stacks.
Author      : © Vipin Kumar
Created on  : March 16, 2018 20:48 IST
*/

#include <iostream>
#include <cstdlib>
#include <stack>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class QueueUsingStack  {
public:
	int count;

	stack <int> s1;
	stack <int> s2;

	QueueUsingStack ();
	~QueueUsingStack  ();

	void enqueue (int);
	int dequeue ();

};

QueueUsingStack ::QueueUsingStack  () {
	count = 0;
}

QueueUsingStack ::~QueueUsingStack  () {
	count = 0;
}

void QueueUsingStack::enqueue (int element) {
	s1.push (element);
	count++;
}

int QueueUsingStack::dequeue () {
	int dequeuedElement;
	if (s2.empty()) {
		while (!s1.empty ()) {
			s2.push (s1.top ());
			s1.pop ();
		}
	}

	if (!s2.empty()) {
		dequeuedElement = s2.top ();
		s2.pop ();
		return dequeuedElement;
	}
	
}

int main () {
	QueueUsingStack q;

	int choice;
	int element;
	int peekElement;
	int currentSize;
	stack <int> s1;
	stack <int> s2;

	system ("cls");
	
	while (true) {
		system ("cls");
		cout << "\t\t***** QUEUE USING STACK\n\n";
		cout << "1. ENQUEUE\n";
		cout << "2. DEQUEUE\n";
		cout << "3. FRONT ELEMENT\n";
		cout << "4. SIZE\n";
		cout << "5. DISPLAY\n";
		cout << "6. EXIT\n";

		cout << "Enter the choice: ";
		cin >> choice;

		switch (choice) {
			case 1: cout << "Enter the element: ";
					cin >> element;
					q.enqueue (element);
					getch ();
					break;
			case 2: if (!s2.empty()) {
						peekElement = q.dequeue ();
						cout << peekElement << "dequeued!";
						getch ();
					}
					else {
						cout << "Queue is empty!";
					}
					break;
					
			case 6: exit (0);
					break;
			default:
				cerr << "ERROR : Invalid Choice, enter again!";
				break;
			break;
		}
	}


	return 0;
}
