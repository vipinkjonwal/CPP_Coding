#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int meter;
//typedef is used to create a new name for exisiting type.
//Here type 'int' is renamed as 'meter'.
// If it is desirable to cause a defined name to become undefined, it can br accomplished by means of #undef directive.

int main(int argc, char const *argv[]){
	meter kiloMeter=1;
	cout << "There are 1000 meters in " << kiloMeter << " Kilometer.";
	return 0;
}
