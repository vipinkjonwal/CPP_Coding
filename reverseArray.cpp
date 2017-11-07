#include <iostream>
using namespace std;

int * reverse(int array[], int size){
  for (int i = 0; i <= size/2; ++i) {
    int temp = array[i];
    array[i] = array[size-1];
    array[size-1] = temp;
    size--;
  }
  return array;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int *reversedArray;
  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  reversedArray = reverse(array,size);

  cout << "Reversed Array is ";
  for (int i = 0; i < size; ++i) {
    cout << reversedArray[i] << "  ";
  }
  return 0;
}
