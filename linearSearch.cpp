#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int element){
  for (int i = 0; i < size; ++i) {
    if (element == array[i]) {
      return i;
      break;
    }
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int element;
  int index;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  cout << "Enter the element to be found: ";
  cin >> element;

  index = linearSearch(array,size, element);

  if (index != -1) {
    cout << "Element " << element << " found at location " << index;
  }

  if (index == -1) {
    cout << "Element " << element << " NOT found.";
  }
  return 0;
}
