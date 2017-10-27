#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415
/*If you define Pi using #define directive,you only need to make one change,in the #define directive itself.
  #define direcrive can be used even to replace a condition like #define OR|| & to replace even an entire C or C++ statement.
  For eg. #define TICK cout << "Welcome"

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
