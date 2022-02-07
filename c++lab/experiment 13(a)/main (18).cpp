/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/




#include<iostream>
using namespace std;

int main(){
   int x, y;
   cout << "numberator is " ;
   cin >> x;
   try {
      cout << "Denominator is ";
      cin >> y;
      if(y <= 0){
         throw y;
      }
      cout << "Answer is " << x/y <<endl;
   }
   
   catch(int a){
      cout << "Exception caught!!"<<endl;
      cout << "Denominator cannot be 0 or -ve number!";
   }
   
   return 0;
}
