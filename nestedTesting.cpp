#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

	for (int i = 0; i < 2; ++i){
		for (int i = 0; i < 3; ++i){
			for (int i = 0; i < 4; ++i){
				cout << i << '\t';
			}
			//cout << "2nd " << i << "\t";
 			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

/*
When we execute line 11, we get an error:

nestedTesting.cpp: In function 'int main(int, const char**)':
nestedTesting.cpp:11:22: warning: name lookup of 'i' changed [enabled by default]
    cout << "2nd " << i << "\t";
                      ^
nestedTesting.cpp:7:12: warning:   matches this 'i' under ISO standard rules [enabled by default]
   for (int i = 0; i < 3; ++i){
            ^
nestedTesting.cpp:8:13: warning:   matches this 'i' under old rules [enabled by default]
    for (int i = 0; i < 4; ++i){
*/
