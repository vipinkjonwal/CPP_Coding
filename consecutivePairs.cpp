/*
Program     : Check if successive pair of numbers in the stack 
			  is consecutive or not. (Q2 : Assignment 1)
Author      : © Vipin Kumar
Created on  : March 14, 2018 15:28 IST
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stack>

using namespace std;

bool isConsecutive (int number1, int number2) {
	/*
	To check if a the given pair of numbers are consecutive or not.

	This function will tells that, whether two given numbers are consecutive 
	or not. The numbers can be consecutive from any side of number line i.e,
	pairs can be increasing or decresing.

	Parameters
	----------
	number1 : int - given first number.
	number2 : int - given second number.

	Returns
	-------
	true : bool - given pair is consecutive.
	false : bool - given pair is not consecutive.

	Description
	-----------
	isConsecutive function definition.

	Approach
	--------
	We take the absolute difference of two given numbers of a pair, if it is 
	1, then they are consecutive and true is returned else false is returned.

	Examples
	--------
	isConsecutive(2,3) returns True
	isConsecutive(1,2) returns True
	isConsecutive(-2,-3) returns True
	isConsecutive(-1,-2) returns True
	isConsecutive(2,4) returns False
	isConsecutive(-2,0) returns False
	*/

	return abs (number1 - number2) == 1;
}


bool isSuccessivePairs (stack <int> s) {
	/*
	To check if successive pair of numbers in the stack is consecutive or not.

	This function will tells that, whether the successive pairs in the stack
	is consecutive or not. Since, we're checking the pairs, if there are
	odd number of elements in the stack, we popped it out and check the remaining 
	even number of elements.

	Parameters
	----------
	s : stack <int> - given Stack containing the numbers. 

	Returns
	-------
	true : bool - given pair is consecutive.
	false : bool - given pair is not consecutive.

	Description
	-----------
	isSuccessivePairs function definition.

	Approach
	--------
	We popped the two elements at a time and check if they are consecutive using
	the isConsecutive function. The loop runs until stack becomes empty.
	If at any place, a non consecutive pair is encountered, we returned false, 
	else after completing the loop, we return true.
	*/

	int element1;
	int element2;
	
	while (!s.empty()) {
		element1 = s.top ();
		s.pop ();
		
		element2 = s.top ();
		s.pop ();

		if (isConsecutive(element1,element2)) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}


int main () {
	/*
	Summary
	-------
	Create main() function.

	Extended Summary
	----------------
	main() function will invoke the isSuccessivePairs function.

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
	Invoke isSuccessivePairs function with argument `s`.
	*/
	system ("cls");

	stack <int> s;
	int count;
	int element;
	bool finalAnswer;

	cout << "\t\tINPUT\n\n";

	cout << "How many elements you want to enter: ";
	cin >> count;

	cout << "Start pushing elements: ";

	for (int i = 0; i < count; i++) {
		cin >> element;
		s.push (element);
	}

	if (count % 2 != 0) {
		s.pop ();
	}

	finalAnswer = isSuccessivePairs (s);

	if (finalAnswer) {
		cout << "Each succesive pair of numbers in stack is" \
				" consecutive.";
	}
	else {
		cout << "Each succesive pair of numbers in stack is" \
			" NOT consecutive.";
	}
	
	getch ();
	return 0;
}