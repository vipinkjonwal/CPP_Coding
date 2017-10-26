#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	
	//If-Else
	if ( 2 + 2 == 4 ){
		cout << "Correct Evaluation.\n";
	}

	else{
		cout<< "Incorrect Evaluation.\n";
	}

	//Switch Case
	int myCase;
	cout << "Please enter a number : ";
	cin >> myCase;
	switch(myCase){
		case 1: cout << "Case 1 Invoked.\n";
				break;
		case 2: cout << "Case 2 Invoked.\n";
				break;
		default: cerr << "ERROR: Input from 1 or 2 only.\n"; 
				break;
	}

	// ? : Operator
	2 + 3 == 5 ? cout << "TRUE" : cout << "FALSE"; //This is '? :' operator, having syntax Exp ? if true : else statement.

	return 0;
}