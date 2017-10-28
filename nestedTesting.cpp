#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	
	for (int i = 0; i < 5; ++i){
		for (int i = 0; i < 5; ++i){
			for (int i = 0; i < 5; ++i){
				cout << i << '\t';
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}