#include <iostream>
using namespace std;

void swap(int *num1, int *num2);

int main(int argc, char const *argv[]){
   
   int num1 = 20;
   int num2 = 30;
   
   cout << "Before Swapping\n";
   cout << "Value of num1 :" << num1 << endl;
   cout << "Value of num2 :" << num2 << endl;

   /* 
   &a indicates pointer to a ie. address of variable a  
   &b indicates pointer to b ie. address of variable b.
   */

   swap(&num1, &num2);

   cout << "After Swapping\n";
   cout << "Value of num1 :" << num1 << endl;
   cout << "Value of num2 :" << num2 << endl;
 
   return 0;
}