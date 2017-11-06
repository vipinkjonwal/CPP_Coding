#include <iostream>
using namespace std;

int sumOfNaturals(int number) {
  if (number == 0) {
    return 0;
  }
  else {
    return number + sumOfNaturals(number-1);
  }
}

int main(int argc, char const *argv[]) {
  int number;
  int answer;
  cout << "Enter a natural number: ";
  cin >> number;
  answer = sumOfNaturals(number);
  cout << "Sum of " << number << " natural numbers is " << answer;
  return 0;
}
