#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  //Initialisation of arrays : 1-D array.
  int firstArray[5] = {1,2,3,4,5};

  cout << "Output of firstArray: \n";
  for (int i = 0; i < 5; ++i) {
    cout << firstArray[i] << '\t';
  }

  //Initialisation of 2-D array as row major.
  int secondArray[5][2] = {1,2,3,4,5,6,7,8,9,0};

  cout << "\n\nOutput of secondArray: \n";
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      cout << secondArray[i][j] << '\t';
    }
    cout << endl;
  }

  //Initialisation of 2-D array (Another method)
  int thirdArray[2][5] = {{1,2,3,4,5},{6,7,8,9,0}};

  cout << "\n\nOutput of thirdArray: \n";
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << thirdArray[i][j] << '\t';
    }
    cout << endl;
  }




  return 0;
}
