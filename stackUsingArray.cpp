/*
Program     : Stack using Arrays
Author      : © Vipin Kumar
Created on  : February 2, 2018 15:20 IST
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

// MAXSIZE is macro definition for maximum size of array.
#define MAXSIZE 50

using namespace std;

// Class Stack
class Stack {
  /*
  Objective         : Creating a class Stack to implement Stack methods.
  Input Parameters  : None
  Return Value      : None
  Description       : CLass definition.
  Approach          : Class defines the data member and functions of stack class.
  */

  public:
    // Stack Array which is dynamic.
    int* stackArray;

    int sizeOfStack;
    int top;

    Stack() {
      /*
      Objective         : Creating a constructor of Stack class.
      Input Parameters  : None
      Return Value      : None
      Description       : Constructor definition.
      Approach          : Initialize and declare the variables.
      */

      sizeOfStack = 0;
      top = 0;
      stackArray = new int[MAXSIZE];
    }

    ~Stack() {
      /*
      Objective         : Creating a destructor of Stack class.
      Input Parameters  : None
      Return Value      : None
      Description       : Destructor definition.
      Approach          : Delete the variables.
      */

      delete stackArray;
    }

    // Member functions declarations of Stack class.
    void push(int);
    int pop();
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
    void display(int[]);
};
//endClassDefinition

bool Stack::isEmpty() {
  /*
  Objective         : To check if stack is empty.
  Input Parameters  : None
  Return Value      : Bool value true or false.
  Description       : isEmpty function definition.
  Approach          : Check the value of top.
  */

  if (top == -1) {
    return true;
  }
  else {
    return false;
  }
}

bool Stack::isFull() {
  /*
  Objective         : To check if stack is full.
  Input Parameters  : None
  Return Value      : Bool value true or false.
  Description       : isFull function definition.
  Approach          : Compare the values of top and sizeOfStack.
  */

  if (top == sizeOfStack) {
    return true;
  }
  else {
    return false;
  }
}

int Stack::size() {
  /*
  Objective         : To check the current size of stack.
  Input Parameters  : None
  Return Value      : Value of current size of stack.
  Description       : size function definition.
  Approach          : return index of top element.
  */

  return top;
}

void Stack::push(int element) {
  /*
  Objective         : To push the elelments onto the stack.
  Input Parameters  : element - int type - element to be pushed.
  Return Value      : None
  Description       : push function definition.
  Approach          : Checking the status of stack and adding elements
                      at top of stack and incrementing the top.
  */

  if (isFull()) {
    cout << "Stack is FULL. POP elements to enter new elements.\n";
  }

  else {
    stackArray[top] = element;
    top++;
  }
}

int Stack::pop() {
  /*
  Objective         : To pop the elelment from the stack.
  Input Parameters  : None
  Return Value      : Popped element.
  Description       : pop function definition.
  Approach          : Checking the status of stack and popping elements
                      from top of stack and deccrementing the top.
  */

  int tempPop;
  if (!isEmpty()) {
    tempPop = stackArray[top];
    top--;
  }

  if (isEmpty()) {
    cout << "Stack is EMPTY. PUSH elements to POP.\n";
  }

  return tempPop;
}

int Stack::peek() {
  /*
  Objective         : To get the peek element of stack.
  Input Parameters  : None
  Return Value      : Peek element.
  Description       : peek function definition.
  Approach          : Returning top element.
  */

  if (isEmpty()) {
    cout << "ERROR: Stack is Empty.";
    return 0;
  }
  else {
      return stackArray[top-1];
  }
}

void Stack::display(int stackArray[]){
  /*
  Objective         : To display the content of the stack.
  Input Parameters  : stackArray - array type.
  Return Value      : None
  Description       : display function definition.
  Approach          : Using a for loop to iterate through the stackArray
                      and displaying it.
  */

  if (isEmpty()) {
    cout << "Current Stack: EMPTY";
  }
  else {
    cout << "Current Stack: \n";
    for (int i = top-1; i >= 0; i--) {
      cout << "| " << stackArray[i] << " |" << endl;
      cout << "-----\n";
    }
  }
}

int main() {
  /*
  Objective         : The run main function of the program.
  Input Parameters  : None.
  Return Value      : Return value 0 for successful termination.
  Description       : main function definition.
  Approach          : Creating an object of Stack class and calling the
                      functions.
  */

  int choice;
  int element;
  int currentSize;
  Stack obj;
  obj.top = 0;
  system("cls");
  cout << "\t\t ***** STACK *****\n\n";

  cout << "Enter size of Stack: ";
  cin >> obj.sizeOfStack;

  // do while loop for menu based implementation.
  do {
    system("cls");
    cout << "\t\t ***** STACK *****\n\n";
    cout << "1. PUSH\n2. POP\n3. CURRENT SIZE\n4. PEEK ELEMENT\n";
    cout << "5. DISPLAY\n6. EXIT\n";
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice) {
      case 1: cout << "Enter the element to PUSH: ";
              cin >> element;
              obj.push(element);
              obj.display(obj.stackArray);
              getch();
              break;
      case 2: obj.pop();
              obj.display(obj.stackArray);
              getch();
              break;
      case 3: currentSize = obj.size();
              cout << "Current size of Stack is "<< currentSize;
              getch();
              break;
      case 4: cout << "Peek element is "<< obj.peek();
              getch();
              break;
      case 5: obj.display(obj.stackArray);
              getch();
              break;
      case 6: exit(0);
      default : cerr << "ERROR: Input correct input." << '\n';
                getch();
                break;
    }
  } while(choice != 6);

  return 0;
  // successful termination.
}
