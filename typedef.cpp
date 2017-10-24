#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int meter;
//typedef is used to create a new name for exisiting type.
//Here type 'int' is renamed as 'meter'.

int main(int argc, char const *argv[]){
	meter kiloMeter=1;
	cout << kiloMeter << " Kilometer = 1000 metres. ";
	return 0;
}
