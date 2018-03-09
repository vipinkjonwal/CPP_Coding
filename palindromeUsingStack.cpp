#include<iostream>
#include<string>
#include<stack>
#include<conio.h>
using namespace std;

bool isPalindrome(string givenString) {
    int length = givenString.length();
    stack <char> s;

    for (int i = 0; i < length/2; i++) {
        s.push(givenString[i]);
    }

    char temp;

    for (int i = length/2; i < length; i++) {
        temp = s.top();

        if (temp == givenString[i]) {
            s.pop();
            continue;
        }

        else {
            return false;
        }
    }

    return true;
}

int main() {
    string givenString;

    cout << "Enter a string: ";
    cin >> givenString;
    cout << isPalindrome(givenString);
    return 0;
}
