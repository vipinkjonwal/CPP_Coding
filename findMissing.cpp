#include <iostream>
using namespace std;

int findMissing(int array[], int size) {
  long long int total = ((size+1)*(size+2))/2;
  for (int i = 0; i < size; ++i) {
    total -= array[i];
  }
  return total;
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
