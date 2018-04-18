/*
Program     : Files in C++
Author      : © Vipin Kumar
Created on  : April 17, 2018 14:43 IST
*/

#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main () {
	char name[30];
	char course[4];
	int year;
	string line;

	fstream file ("data.txt",ios::app | ios::in);
	
	if (!file) {
		cout << "ERROR: File not found.";
		return 0;
	}

	cout << "File created successfully.\n";

	cout << "Enter name: ";
	cin.getline (name, 30);

	cout << "Enter course: ";
	cin.getline (course, 4);

	cout << "Enter year: ";
	cin >> year;

	file << name << " " << course << " " << year;


	file.close ();
	getch ();
	return 0;
}