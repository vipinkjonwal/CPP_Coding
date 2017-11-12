#include <iostream>
using namespace std;

int sumArray(int array[],int size) {
  int tempSum = 0;
  for (int i = 0; i < size; ++i) {
    tempSum = tempSum + array[i];
  }
  return tempSum;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int finalSum = 0;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  finalSum = sumArray(array,size);
  cout << "Sum of elements of given array is " << finalSum;

  return 0;
}
