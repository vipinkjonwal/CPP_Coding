#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int factorial(int number) {
  if (number == 0) {
    return 1;
  }
  else{
    return number*factorial(number-1);
  }
}

int permutations(int n,int r) {
  return factorial(n)/factorial(n-r);
}

int combinations(int n,int r) {
  return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(int argc, char const *argv[]) {
  system("cls");
  int choice;
  int n;
  int r;
  int answer;

  do {
    system("cls");
    cout << "\t***** PERMUTATIONS AND COMBINATIONS *****\n\n";
    cout << "1. PERMUTATIONS\n2. COMBINATIONS\n";
    cout << "3. EXIT\n\n";
    cout << "Enter the choice: ";
    cin >> choice;

    switch (choice) {
      case 1: cout << "Enter n: ";
              cin >> n;
              cout << "Enter r: ";
              cin >> r;
              answer  = permutations(n,r);
              cout << n << "P" << r << " is " << answer;
              getch();
              break;
      case 2: cout << "Enter n: ";
              cin >> n;
              cout << "Enter r: ";
              cin >> r;
              answer  = combinations(n,r);
              cout << n << "C" << r << " is " << answer;
              getch();
              break;
      case 3: exit(0);
      default: cerr << "ERROR: Not a valid input. Try again.";
               break;
    }
  } while(choice != 3);

  getch();
  return 0;
}
