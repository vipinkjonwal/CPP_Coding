#include <iostream>
using namespace std;

int maxTwo(int num1,int num2) {
  if (num1 > num2) {
    return num1;
  }
  else {
    return num2;
  }
}

int maxThree(int num1,int num2,int num3) {
  return maxTwo(maxTwo(num1,num2),num3);
}

int main(int argc, char const *argv[]) {
  int num1 = 1;
  int num2 = 3;
  int num3 = 2;
  int answer = maxThree(num1,num2,num3);
  cout << answer << '\n';

  return 0;
}
