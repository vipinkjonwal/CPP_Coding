/*
Program     : Evaluate Postfix expression.
Author      : © Vipin Kumar
Created on  : February 18, 2018 20:26 IST
*/

#include <iostream>
#include <string.h>
#include <stack>
#include <conio.h>

using namespace std;

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
     givenOperator == '/') {
       return true;
     }
  else {
    return false;
  }
}

int postfixEvaluation(string givenPostfixExpression) {
  /*
  Objective         : To evaluate the given postfix expression.
  Input Parameters  : givenPostfixExpression - string
  Return Value      : finalResult - result of postfix evaluation.
  Description       : postfixEvaluation function definition.
  Approach          : STL Stack is used to perform the evaluation.
  */

  stack <int> s;
  int length = givenPostfixExpression.length();

  for (int i = 0; i < length; i++) {
    if (givenPostfixExpression[i] >= '0' && givenPostfixExpression[i] <= '9') {
      int temp = (int)givenPostfixExpression[i] - 48;
      s.push(temp);
    }

    else if (!s.empty() && ifOperator(givenPostfixExpression[i])) {
      int operand2 = s.top();
      s.pop();
      int operand1 = s.top();
      s.pop();

      int result;

      switch (givenPostfixExpression[i]) {
        case '+': result = operand1 + operand2;
                  break;
        case '-': result = operand1 - operand2;
                  break;
        case '*': result = operand1 * operand2;
                  break;
        case '/': result = operand1 / operand2;
                  break;
        default : break;
      }

      s.push(result);

    }
  }

  int finalResult = s.top();
  return finalResult;
}

int main() {
  /*
  Objective         : The main function.
  Input Parameters  : None.
  Return Value      : 0 - successful termination of program.
  Description       : main function definition.
  Approach          : Invoke postfixEvaluation function.
  */

  string givenString;
  cout << "Enter an postfix expression ";
  cin >> givenString;
  cout << "The evaluation is " << postfixEvaluation(givenString);

  return 0;
}
