#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int myRandom;
  myRandom = rand()%10;
  cout << "Random Number generated is: " << myRandom;
  return 0;
}
