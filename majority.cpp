#include <iostream>
using namespace std;

int majorityElement(int array[], int size){
  
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int majority;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  majority = majorityElement(array,size);

  return 0;
}
