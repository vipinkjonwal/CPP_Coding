#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int p[3] = {1,2,3};
  for (int i = 0; i < 3; i++) {
    cout << *(p+i) << '\t';
  }
  return 0;
}
