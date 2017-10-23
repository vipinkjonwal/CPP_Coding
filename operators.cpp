#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

	int testValue = 15;
	cout << testValue << endl;
	testValue >>= 2; 			//Right Shift by 2 of testVAlue which is 15, in binary 0000 1111 which outputs 0000 0011.
	cout << testValue << endl;
	testValue <<= 2; 			//Left Shift by 4 of testValue which is now 3 (0000 0011) which outputs 0011 0000 which is 12.
	cout << testValue << endl;

	testValue > 0 ? cout << "Yes" : cout << "No"; 			// (condition ? if true : else)  -  One liner if else.

	float floatValue = 3.1415;

	cout << endl << int(floatValue);						//type casting.
	return 0;
}