#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415

int main(int argc, char const *argv[]){
	
	int radius;
	const int DIAMETER = 20; 
	cout << "Please input the radius : ";
	cin >> radius;
	cout << "Area of first circle is " << PI*radius*radius << endl;
	cout << "Perimeter of second circle is " << PI*DIAMETER;

	/*
	
	DIAMETER = 10;
	cout << DIAMETER;
	It gives an error because we can't modify a read only variable created by const keyword.

	*/

	return 0;
}