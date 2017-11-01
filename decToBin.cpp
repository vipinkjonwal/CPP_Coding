#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//This is a class.
class Converter {
public:
	float number;
	int binaryArrayDecimal[32];
	int binaryArrayFraction[8];
	int counter;
	void convertDecimalToBinary(float);
};

//Definitions of functions of class Converter.
void Converter::convertDecimalToBinary(float inputNumber) {

		counter = 0;
		float numberImage = inputNumber;
		float fractionImage = inputNumber;
		int inputNumberInteger = (int)inputNumber;
		int index = 0;

		while (inputNumberInteger!=0){
			binaryArrayDecimal[index] = inputNumberInteger%2;
			inputNumberInteger = inputNumberInteger/2;
			index++;
			counter++;
		}

		while (fractionImage>=1){
			fractionImage-=1;
		}

		float fractionBinary = fractionImage;

		int decimalPlaces = 8;
		int fractionIndex=0;
		int fractionCounter=0;

		while (decimalPlaces>0){
			fractionBinary*=2;
			if (fractionBinary<1){
				binaryArrayFraction[fractionIndex] = 0;
				fractionIndex++;
				fractionCounter++;
			}
			else if (fractionBinary>1){
				binaryArrayFraction[fractionIndex] = 1;
				fractionBinary-=1;
				fractionIndex++;
				fractionCounter++;
			}
			else if (fractionBinary==1){
				binaryArrayFraction[fractionIndex] = 1;
				decimalPlaces = 1;
				fractionCounter++;
			}
		decimalPlaces--;
		}

		cout << "\tBinary Number for " << numberImage << " is: ";
		for (int i = counter-1; i >= 0; i--){
			cout << binaryArrayDecimal[i];
		}
		cout << ".";
		for (int i = 0; i < fractionCounter; i++){
			cout << binaryArrayFraction[i];
		}
}

int main(int argc, char const *argv[]) {
	system("cls");
	//Clear Screen with system("cls")
	Converter object;
	float number;
	cout << "\t\t******* CONVERTER ********\n\n";

	cout << "\tEnter the number: ";
	cin >> number;
	while (number < 0) {
		cerr << "\tERROR: Please enter a positive number. Enter again.\n";
		cout<< "\tEnter the number: ";
		cin >> number;
	}

	cout<<"\tYou have entered "<<number<<"\n\n";
	object.convertDecimalToBinary(number);
	return 0;
}
