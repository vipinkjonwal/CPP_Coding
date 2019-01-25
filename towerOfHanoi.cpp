#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char aux, char dest) {
    
    if (n == 1) {
        cout << "Move disk from "<< src <<" to "<< dest << endl;
    }
    else {
        towerOfHanoi(n-1,src,dest,aux);
        cout << "Move disk from "<< src <<" to "<< dest << endl;
        towerOfHanoi(n-1,aux,src,dest);
    }
}


int main(int argc, char const *argv[])
{
    towerOfHanoi(3,'a','b','c');
    return 0;
}
