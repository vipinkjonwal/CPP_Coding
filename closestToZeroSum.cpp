#include <iostream>
#include <stdlib.h>
using namespace std;

int zeroSum(int array[],int size) {
  int tempSum;
  int returnSum = array[0]+array[1];
  for (int i = 0; i < size; ++i) {
    for (int j = i+1; j < size; ++j) {
      tempSum = array[i] + array[j];
      tempSum = abs(tempSum);
      if (tempSum < returnSum) {
        returnSum = tempSum;
        if (tempSum == 0) {
          break;
        }
      }
    }
  }
  return returnSum;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int sum;
  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  sum = zeroSum(array,size);
  cout << "Minimum sum is " << sum;

  return 0;
}
