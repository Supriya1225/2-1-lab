/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class A
{

int x;
public:
A(){}
A(int i)
{
   x=i;
}
   void operator+(A);
   void display();
};

void A :: operator+(A a)
{
   int m = x+a.x;
   cout << "The result of the addition of two objects is: " << m;
}

int main()
{
   A a1(5);
   A a2(4);
   a1 + a2;
      
   return 0;
}




