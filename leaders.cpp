#include <iostream>
using namespace std;

void printLeaders(int array[],int size) {
  int tempMax = array[size-1];
  cout << "Leaders are: " << tempMax << "  ";

  for (int i = size-2; i >= 0; i--) {
    if (array[i] > tempMax) {
      tempMax = array[i];
      cout << tempMax << "  ";
    }
  }
}

int main(int argc, char const *argv[]) {
  int size;
  int array[20];
  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  printLeaders(array,size);

  return 0;
}
