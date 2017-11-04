#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int * returnArray(){
  static int random[5];
  srand(time(NULL));

  for (int i = 0; i < 5; ++i) {
    random[i] = rand()%5;
  }
  return random;
}

int main(int argc, char const *argv[]) {
  int *pointerArray;
  pointerArray = returnArray();

  for (int i = 0; i < 5; ++i) {
    cout << pointerArray[i]<< '\t';
  }
  return 0;
}
