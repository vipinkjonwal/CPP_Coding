#include <iostream>
using namespace std;

int getOddOccurrence(int array[], int size)
{
     int i;
     int result = 0;
     for (i=0; i < size; ++i) {
        result = result ^ array[i];
    }
     return result;
}

int main(int argc, char const *argv[]) {
  int array[20];
  int size;
  int odd;

  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }

  odd = getOddOccurrence(array,size);
  cout << "Odd Occurence : " << odd;
  return 0;
}
