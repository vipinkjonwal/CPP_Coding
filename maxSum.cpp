#include <iostream>
using namespace std;

int maximumSum(int array[],int size) {
  int evenSum = 0;
  int oddSum = 0;
  int maxSum = 0;
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      evenSum = evenSum + array[i];
    }
    else {
      oddSum = oddSum + array[i];
    }
  }

  if (evenSum > oddSum) {
    maxSum = evenSum;
  }
  else {
    maxSum = oddSum;
  }

  return maxSum;
}

int main(int argc, char const *argv[]) {
  int size;
  int array[20];
  int answer;
  cout << "Enter the size of array: ";
  cin >> size;

  cout << "Enter the elements: ";
  for (int i = 0; i < size; ++i) {
    cin >> array[i];
  }
  answer = maximumSum(array,size);
  cout << "Answer is " << answer;
  return 0;
}
