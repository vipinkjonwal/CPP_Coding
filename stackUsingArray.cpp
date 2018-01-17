#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class Stack {

  public:
    int stackArray[20];
    int sizeOfStack;
    int top;

    void push(int);
    int pop();
    void display(int[]);
};

void Stack::push(int element) {

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

void Stack::display(int stackArray[]){
  for (int i = 0; i < sizeOfStack; ++i) {
    cout << stackArray[i] << "  ";
  }
}

int main(int argc, char const *argv[]) {

  int choice;
  int element;
  Stack obj;
  obj.top = 0;
  cout << "Enter size of Stack: ";
  cin >> obj.sizeOfStack;

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
              obj.display(obj.stackArray);
              getch();
              break;
      case 2: obj.pop();
              obj.display(obj.stackArray);
              getch();
              break;
      case 3: exit(0);
      default : cerr << "ERROR: Input correct input." << '\n';
                break;
    }
  } while(choice != 3);

  return 0;
}
