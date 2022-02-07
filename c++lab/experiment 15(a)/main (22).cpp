/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class sample{
   
     int num;
     public:
     sample() {
     	cout << "Previous count: ";
     	cin >> num;
     }
     void operator ++() {
     	num = num + 2;
     }
     void Print() {
     	cout<<"Count is: "<<num;
     }
};

int main()
{
sample s1;
 	++s1; //calling of a function "void operator ++()"
s1.Print();
  	return 0;
}



