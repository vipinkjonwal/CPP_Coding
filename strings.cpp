#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[]) {
  char message[12] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
  cout << message << '\n';

  char newMessage[12];
  strcpy(newMessage,message);
  cout << "New Message: " << newMessage << endl;

  char testMessage1[10] = "Welcome";
  char testMessage2[10] = "Vipin";
  char newString[20];

  strcat(newMessage,testMessage1);
  cout << "newMessage: " << newMessage << endl;

  int length;
  length = strlen(newMessage);
  cout << "Length of newMessage is: " << length << endl;

  int tempValue;
  tempValue = strcmp(testMessage1,testMessage2);
  cout << "tempValue: " <<tempValue << endl;


  return 0;
}
