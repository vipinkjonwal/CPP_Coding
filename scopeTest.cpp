#include <iostream>
using namespace std;

void outerFunction() {
  int i = 10;
  //Scope of this i remains in this function outerFunction() only.
  int j = 1;

  if (j == 1) {
    int i = 20;
    //Scope of this i remains for this if block.
    cout << i << '\n';
  }

}

int main(int argc, char const *argv[]) {
  outerFunction();
  return 0;
}
