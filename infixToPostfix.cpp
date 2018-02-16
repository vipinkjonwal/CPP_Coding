/*
Program     : Convert Infix expression into Postfix expression.
Author      : © Vipin Kumar
Created on  : February 16, 2018 14:15 IST
*/

#include <iostream>
#include <conio.h>
#include <stack>
#include <string.h>
using namespace std;

int precedenceOperator(char givenOperator) {
  /*
  Objective         : To check the precedence of operators.
  Input Parameters  : givenOperator - char
  Return Value      : Precedence value as 1,2,3 where 3 is largest.
  Description       : precedenceOperator function definition.
  Approach          : Predefined as per arithmetic rule.
  */

  switch (givenOperator) {
    case '+':
    case '-': return 1;
              break;
    case '*':
    case '/': return 2;
              break;
    case '^': return 3;
              break;
    case '(':
    case ')': return 0;
              break;
    default: return -1;
             break;
  }
}

bool ifOperator(char givenOperator) {
  /*
  Objective         : To check if encountered character is operator of not.
  Input Parameters  : givenOperator - char
  Return Value      : Bool value true or false as per if it's operator of not.
  Description       : ifOperator function definition.
  Approach          : Predefined as per arithmetic rule.
  */

  if (givenOperator == '+' ||
     givenOperator == '-' ||
     givenOperator == '*' ||
     givenOperator == '/' ||
     givenOperator == '^') {
       return true;
     }
  else {
    return false;
  }
}

void convertInfixToPostfix(string givenString) {
  /*
  Objective         : To convert given infix expression into postfix expression.
  Input Parameters  : givenString - string.
  Return Value      : None.
  Description       : convertInfixToPostfix function definition.
  Approach          : Used STL Stack to implement the algorithm of conversion.
  */

  stack <int> s;
  string postfixString = "";

  for (int i = 0; i < givenString.length(); i++) {
      // When operand is encountered.
      if (givenString[i] >= 'a' && givenString[i] <= 'z') {
        postfixString += givenString[i];
      }

      // '(' encountered.
      else if (givenString[i] == '(') {
        s.push(givenString[i]);
      }

      // ')' encountered.
      else if (givenString[i] == ')') {
        while (s.top() != '(') {
          char temp = s.top();
          postfixString += temp;
          s.pop();
        }
        s.pop();
      }

      // Operator encountered.
      else if  (ifOperator(givenString[i])) {
        if (s.empty() || precedenceOperator(givenString[i]) > precedenceOperator(s.top())) {
          s.push(givenString[i]);
        }

        else {
          while (!s.empty() && precedenceOperator(givenString[i]) <= precedenceOperator(s.top())) {
            char temp = s.top();
            postfixString += temp;
            s.pop();
          }
          s.push(givenString[i]);
        }
      }
  }

  // After iterating the whole expression.
  while (!s.empty()) {
    char temp = s.top();
    postfixString += temp;
    s.pop();
  }

  // Printing the postfixExpression.
  cout << postfixString;
}

int main() {
  /*
  Objective         : The main function.
  Input Parameters  : None.
  Return Value      : 0 - successful termination of program.
  Description       : main function definition.
  Approach          : Invoke convertInfixToPostfix function.
  */

  string givenString;
  cout << "Enter an infix expression ";
  cin >> givenString;
  cout << "The corresponding postfix expression is ";
  convertInfixToPostfix(givenString);
  return 0;
}
