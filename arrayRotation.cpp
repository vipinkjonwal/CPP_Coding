#include <iostream>
using namespace std;

int * rotateByOne(int array[]) {
  int temp;
  temp = array[0];
  int i = 0;

  while (array[i] != '\0') {
    array[i] = array[i+1];
    i++;
  }
  array[i-1] = temp;

  return array;
}

void display(int array[]){
  int i = 0;
  while (array[i] != '\0') {
    cout << array[i] << '\t';
    i++;
  }
}

int main(int argc, char const *argv[]) {
  int array[20];
  int *rotated;
  int size;
  int numberOfRotations;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }
  array[size] = '\0';

  cout << "How many rotations you want: ";
  cin >> numberOfRotations;
  for (int i = 0; i < numberOfRotations; ++i) {
      rotated = rotateByOne(array);
      cout << "Array after rotation " << i << endl;
      display(rotated);
      cout << '\n';
  }


  return 0;
}
