#include<iostream>
#include<conio.h>
#include<stack>
#include<string>

using namespace std;

string reverseString(string givenString) {
    string reversed = "";
    int stringLength = givenString.length();
    stack <char> s;

    for (int i = 0; i < stringLength; i++) {
        s.push(givenString[i]);
    }

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    return reversed;
}

int main() {
    stack <char> s;
    string givenString;
    string reversed;

    cout << "Enter a string: ";
    cin >> givenString;

    reversed = reverseString(givenString);

    cout << "Reversed string is: " << reversed;
    getch();
    return 0;
}
