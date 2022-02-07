/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include <iostream>
using namespace std;
class Box{
   private:
        int length;
   public:
         Box (): length (0) {}
   friend int Len (Box); //friend function
};
int Len (Box b)
{
    b. length +=10;
    return b. length;
}
int main ()
{
   Box b;
   cout <<"Length of box:"<<Len (b)<<endl;
   return 0;
}
