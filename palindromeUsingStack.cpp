/*
# Program               : To check whether the string is a palindrome or not using Stack.
# Auhtor                : Vipin Kumar
# Created on            : 09-03-2018 21:56 IST
*/

#include<iostream>
#include<string>
#include<stack>
#include<conio.h>
#include<math.h>
using namespace std;

bool isPalindrome(string givenString) {
    /*
    Objective           : To check whether the string is a palindrome or not.
    Input Variables     : givenString - string - given string to be checked.
    Description         : isPalindrome function definiton.
    Return Value        : true/false
    Approach            : STL Stack is used to do the needful.
    */

    int length = givenString.length();

    if (length == 1) {
        return true;
    }

    else {
        stack <char> s;
        int iteratorLength = length/2;


        for (int i = 0; i < iteratorLength; i++) {
            s.push(givenString[i]);
        }

        char temp;

        if (length % 2 != 0) {
            iteratorLength++;
        }

        for (int i = iteratorLength; i < length; i++) {

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
}

int main() {
    /*
    Objective           : To check whether the string is a palindrome or not.
    Input Variables     : None
    Description         : main function definiton.
    Return Value        : 0 - succesful termination of program.
    Approach            : Invoke isPalindrome Function.
    */

    string givenString;
    bool answer;

    cout << "Enter a string: ";
    cin >> givenString;

    answer = isPalindrome(givenString);

    if (answer == true) {
        cout << givenString << " is Palindrome.";
    }

    else {
        cout << givenString << " is NOT Palindrome.";
    }

    return 0;
}
