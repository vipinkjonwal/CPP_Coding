#include <iostream>
using namespace std;

extern int tempVariable;
//extern is used before variable declaration to represent external storage class.
int main(int argc, char const *argv[]){
	int tempVariable;
	cout << "Enter a number : ";
	cin >> tempVariable;

	if (tempVariable<0){
		cout << tempVariable << " is a negative number.";
	}

	else{
		cout << tempVariable << " is a positive number.";
	}

	return 0;
}
