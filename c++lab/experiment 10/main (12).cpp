/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <iostream>
using namespace std;
int main() {
int *ptr;
ptr = new int;  // Dynamic memory allocation
cout<< "Number of bytes allocated to ptr is " << sizeof(ptr) << endl;
*ptr = 100;
cout << "Value at ptr is " << *ptr << endl;
return 0;
}
