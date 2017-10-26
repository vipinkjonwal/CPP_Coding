#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	
	int sum = 0;
	for (int i = 0; i < 10; ++i){
		sum = sum + i;
	}
	cout << "Sum is" << sum;
	return 0;
}