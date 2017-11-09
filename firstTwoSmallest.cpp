#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int size;
  int array[20];
  int firstSmallest;
  int secondSmallest;
  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  int tempMin;
  tempMin = array[0];
  for (int i = 0; i < size; ++i) {
    if (tempMin > array[i]) {
      tempMin = array[i];
    }
  }
  firstSmallest = tempMin;

  for (int i = 0; i < size; ++i) {
    cout << array[i] << "  ";
  }

  cout << "First smallest: " << firstSmallest;
  secondSmallest = array[0];
  for (int i = 0; i < size; ++i) {
    if ((secondSmallest > array[i]) && (secondSmallest != firstSmallest)) {
      secondSmallest = array[i];
    }
  }

  cout << "\nFirst two smallest: ";
  cout << firstSmallest << '\t' << secondSmallest;
  return 0;
}
