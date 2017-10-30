#include <iostream>
using namespace std;

void outerFunction(){
  int i = 10;
  int j = 1;

  if (j == 1) {
    int i = 20;
    cout << i << '\n';
  }

}

int main(int argc, char const *argv[]) {
  outerFunction();
  return 0;
}
