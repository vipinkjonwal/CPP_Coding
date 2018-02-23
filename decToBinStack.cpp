#include<iostream>
#include<conio.h>
#include<string>
#include<stack>

using namespace std;

string decimalToBinary(int decimalNumber) {
    string binaryNumber = "";
    int temp = decimalNumber;
    stack <int> s;

    while (temp !=0) {
        s.push(temp%2);
        temp /= 2;
    }

    while (!s.empty()) {
        binaryNumber += (char)s.top()+48;
        s.pop();
    }

    return binaryNumber;
}

int main() {
    string binaryNumber;
    int decimalNumber;
    char choice = 'y';

    cout << "\t\t***** Decimal To Binary*****\n";

    do {
        cout << "Enter a positive number: ";
        cin >> decimalNumber;

        binaryNumber = decimalToBinary(decimalNumber);
        cout << "The corresponding binary equivalent of " << decimalNumber << " is " << binaryNumber;

        cout << "\n\nWant to enter a new number: ";
        cin >> choice;
    }while(choice == 'y');
    getch();
    return 0;
}

