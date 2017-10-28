#include <iostream>
using namespace std;

//This is function declaration, to avoid the overhead of forward referencing.
int max(int,int);

//This is the main function. Every program has a main function.
int main(int argc, char const *argv[]){
	
	int num1;
	int num2;
	int maximum;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;

	//This is function calling, and the value returned is stored in variable maximum.
	maximum = max(num1,num2);

	cout << "Maximum of " << num1 << " and " << num2 <<" is "<<maximum;
	return 0;
}

//This is function definition.
/*
We can have default parameters as well. Like we can set num2 = 10 as default. Unless specified, it will take value of num2 as 10.
*/
int max(int num1,int num2){
	/*
	Objective 		: To find maximum of two numbers.
	Parameters		: num1 - integer type, number 1
					  num2 - integer type, number 2
	Return value    : Maximum of two numbers.	 
	*/
	if (num1 > num2){
		return num1;
	}
	else{
		return num2;
	}
}