#include <iostream>
#include <stack>
#include <queue>
#include <string.h>
#include <conio.h>

using namespace std;

bool isPalindrome (string givenString) {
	/*
	Summary
	-------
	To check if a givenString is Palindrome or not.

	Extended Summary
	----------------
	Type - bool
	This function will tells that if a given string is palindrome or not. Two data structures
	namely STL Stack and STL Queue are used for this purpose.

	Parameters
	----------
	givenString : string - the given user input string.

	Returns
	-------
	true : bool - givenString is Palindrome.
	false : bool - givenString is not Palindrome.

	Description
	-----------
	isPalindrome function definition.

	Approach
	--------
	The givenString is being pushed char by char into stack and queue. Then, a char is
	popped out from stack and dequeued from queue. If they're equal, we do the same
	until stack is empty, otherwise returns false.
	*/

	int length = givenString.length ();
	stack <char> s;
	queue <char> q;
	char stackElement;
	char queueElement;

	for (int i = 0; i < length; i++) {
		if (givenString[i] == '\t' || givenString[i] == ' ') {
			continue;
		}
		else {
			s.push (givenString[i]);
			q.push (givenString[i]);
		}
	}

	while (!s.empty()) {
		stackElement = s.top ();
		queueElement = q.front ();

		if (stackElement == queueElement) {
			s.pop ();
			q.pop ();
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
	main() function will invoke the isPalindrome function.
	
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
	Invoke isPalindrome with argument `givenString`.
	*/

	string givenString;
	bool answer;
	cout << "Enter a string: ";
	getline (cin, givenString);
	answer = isPalindrome (givenString);
	answer ? cout << givenString << " is Palindrome." : cout << givenString << " is NOT Palindrome.";
	getch ();
	return 0;
}