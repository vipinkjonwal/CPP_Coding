#include <iostream>
#include <stdlib.h>
using namespace std;

class Stack {

  public:
    int stackArray[20];
    int sizeOfStack;
    int top;

    void push(int);
    int pop();
    void display();
};

void Stack::push(int element) {
  cout << "Enter the size of Stack: ";
  cin >> sizeOfStack;

  top = 0;

  if (top != sizeOfStack) {
    stackArray[top] = element;
    top++;
  }

  if (top == sizeOfStack) {
    cout << "Stack is FULL. POP elements to enter new elements.";
  }
}

int Stack::pop() {
  int tempPop;
  if (top != -1) {
    tempPop = stackArray[top];
    top--;
  }

  if (top == -1) {
    cout << "Stack is EMPTY. PUSH elements to POP.";
  }

  return tempPop;
}

void Stack::display(){
  for (int i = 0; i < sizeOfStack; ++i) {
    cout << stackArray[i] << "  ";
  }
}

int main(int argc, char const *argv[]) {

  int choice;
  int element;
  Stack obj;

  do {
    system("cls");
    cout << "\t\t ***** STACK *****\n\n";
    cout << "1. PUSH\n2. POP\n3. EXIT\n";
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice) {
      case 1: cout << "Enter the element to PUSH: ";
              cin >> element;
              obj.push(element);
              break;
      case 2: obj.pop();
              break;
      case 3: exit(0);
      default : cerr << "ERROR: Input correct input." << '\n';
                break;
    }
  } while(choice != 3);

  return 0;
}
