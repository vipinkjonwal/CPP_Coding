#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]){
	system("cls");
	//system("cls") is used to clear screen.
//Sizeof is used to generate size of variable or datatype.
	cout << "Size of char is " << sizeof(char) << "\n";
	cout << "Size of signed char is " << sizeof(signed char) << "\n";
	cout << "Size of unsigned char is " << sizeof(unsigned char) << "\n";
	cout << "Size of int is " << sizeof(int) << "\n";
	cout << "Size of signed int is " << sizeof(signed int) << "\n";
	cout << "Size of unsigned int is " << sizeof(unsigned int) << "\n";
	cout << "Size of short int is " << sizeof(short int) << "\n";
	cout << "Size of signed short int is " << sizeof(signed short int) << "\n";
	cout << "Size of unsigned short int is " << sizeof(unsigned short int) << "\n";
	cout << "Size of long int is " << sizeof(long int) << "\n";
	cout << "Size of signed long int is " << sizeof(signed long int) << "\n";
	cout << "Size of unsigned long int is " << sizeof(unsigned long int) << "\n";
	cout << "Size of float is " << sizeof(float) << "\n";
	cout << "Size of double is " << sizeof(double) << "\n";
	cout << "Size of long double is " << sizeof(long double) << "\n";
	cout << "Size of wchar_t is " << sizeof(wchar_t) << "\n";
	
	return 0;
}
