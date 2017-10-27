#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	
	//for loop.
	cout << "\n\tFOR LOOP\n";
	int forSum = 0;
	for (int i = 0; i < 10; ++i){
		cout << i << "th iteration.\n";
		forSum = forSum + i;

		if (forSum < 25){
			continue;
			//continue statement is used to skip next lines and retest loop condition.
		}

		else{
			cout << "Sum is " << forSum << endl << endl;
		}
	}
	cout << "Sum is " << forSum << endl << endl;

	//while loop is a entry controlled loop
	cout << "\n\tWHILE LOOP\n";
	int myCounter = 10;
	int whileSum = 0;
	while (myCounter > 0){
		cout << "Value of counter is " << myCounter << endl;
		whileSum = whileSum + myCounter;
		myCounter--;
		cout << "Sum is " << whileSum << endl << endl;
	}
	cout<< "Sum is "<< whileSum << endl;

	//do-while loop is a post test loop. It is always executed at least once.
	cout << "\n\tDO-WHILE LOOP\n";
	int doWhile = 3;
	
	do{
		cout << "Value of counter is " << doWhile << endl;
		doWhile--;
	}while(doWhile!=0);

	//infite loops :  execute for infinite times.
	/*
	for ( ; ; ){ 
	Code here.
	}
	
	while(1){
	Code here.
	}
	*/

	return 0;
}
