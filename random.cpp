#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]) {

  srand(time(NULL));
  int myRandom;

  //Generate 10 random numbers.
  for (int i = 0; i < 10; ++i) {
    myRandom = rand()%10;
    cout << "Random Number generated is: " << myRandom << endl;
  }
  return 0;
}

/*
stdlib.h is used for rand() function.
time.h is used for time() cuntion to fetch system time.
srand() is used to seed the random number.
rand()%10 will return random numbers between 0-9 (Inclusive).
In general, rand()%k will return random numbers between 0-k.
*/
