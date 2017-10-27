#include <iostream>
using namespace std;

int globalVariable;
int localVariable = 25;
// Value of a global variable persists between different function calls.

int main(int argc, char const *argv[]){

	cout << "Value of localVariable  is " << localVariable << endl;

	int localVariable = 50;

	int variableOne = 10;
	int variableTwo = 20;

	globalVariable = variableOne + variableTwo;

	cout << "Sum of " << variableOne << " and " << variableTwo << " is " <<globalVariable << endl;
	cout << "Value of localVariable  is " << localVariable << endl;

	return 0;
}
