#include <iostream>
#include <stdlib.h>
using namespace std;

enum Company{
	Google = 1, Facebook, Twitter, Snapdeal, Microsoft
};

int main(int argc, char const *argv[]){
	
	int choice;
	repeat:
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
		default:
				cerr << "ERROR: Please enter a valid choice.\n";
				goto repeat;
			break;	
	}

	return 0;
}