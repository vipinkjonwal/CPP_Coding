#include <iostream>
using namespace std;

int maximum(int array[]) {
  int tempMaximum = 0;
  int index = 0;

  while (array[index] != '\0') {
    tempMaximum = tempMaximum + index*array[index];
    index++;
  }
  return tempMaximum;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size = 0;
  int answer = 0;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  array[size] = '\0';

  answer = maximum(array);
  cout << "Maximum sum is " << answer;

  return 0;
}
