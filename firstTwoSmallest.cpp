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


  int temp = firstSmallest;
  firstSmallest = array[0];
  array[0] = temp;


  tempMin = array[1];
  for (int i = 1; i < size; ++i) {
    if (tempMin > array[i]) {
      tempMin = array[i];
    }
  }
  secondSmallest = tempMin;
  
  cout << firstSmallest << '\t' << secondSmallest;
  return 0;
}
