#include <iostream>
using namespace std;

int findMissing(int array[], int size) {
  int xorAll = 0;
  int xorArray = 0;
  int finalElement;

  for (int i = 0; i < size; ++i) {
    xorArray = xorArray ^ array[i];
  }

  for (int i = 1; i <= size+1; ++i) {
    xorAll = xorAll ^ i;
  }

  finalElement = xorAll^xorArray;
  return finalElement;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int missing;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  missing = findMissing(array,size);
  cout << "Missing number is " << missing;
  return 0;
}
