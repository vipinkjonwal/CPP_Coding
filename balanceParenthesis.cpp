#include<iostream>
#include<string>
#include<conio.h>
#include<stack>

using namespace std;

int isBalanced(string givenString) {
    stack <char> s;
    int length = givenString.length();

    for (int i = 0;i < length;i++) {
        char currentCharacter = givenString[i];
        char temp;

        switch(currentCharacter) {
            case '(':
            case '{':
            case '[': s.push(temp);
                      cout << s.top();
                      break;

            case ')': temp = s.top();

                      if (temp == '(') {
                          s.pop();
                          }

                      else {
                          return -1;
                      }
                      break;

            case '}': temp = s.top();

                      if (temp == '{') {
                          s.pop();
                          }

                      else {
                          return -1;
                      }
                      break;

            case ']': temp = s.top();

                      if (temp == '[') {
                          s.pop();
                          }

                      else {
                          return -1;
                      }
                      break;
            default: break;
        }

    }


    return (s.empty())?1:-1;
}

int main() {
    string givenParenthesis = "[)(";
    bool isBalancedAnswer = isBalanced(givenParenthesis);
    cout << "Result: " << isBalancedAnswer;
    getch();
    return 0;
}
