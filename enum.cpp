#include <iostream>
#include <stdlib.h>
using namespace std;
//enumeration is a userdefined datatype used to create integral constant.
enum Company{
	Google = 1, Facebook, Twitter, Snapdeal, Microsoft					//Google is initialized with value 1. First value, unless stated, takes value as 0.
};

int main(int argc, char const *argv[]){

	int choice;
	do {
		cout << "Please enter a choice : ";
		cin >> choice;
		switch(choice){
			case Google:
					cout << "You have chosen Google.";
					break;
			case Facebook:
					cout << "You have chosen Facebook.";
					break;
			case Twitter:
					cout << "You have chosen Twitter.";
					break;
			case Snapdeal:
					cout << "You have chosen Snapdeal.";
					break;
			case Microsoft:
					cout << "You have chosen Microsoft.";
					break;
			default:														//default is used when none of cases mentioned above is hitted.
					cerr << "ERROR: Please enter a valid choice. Enter again.\n";		//cerr is used to output an error message only. It works same as cout.
					break;
		}
	}while (choice < 0 || choice > 5);

	return 0;
}
