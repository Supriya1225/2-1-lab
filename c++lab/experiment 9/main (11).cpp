/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
class test {
public:
int y, z;
test(){
y = 7;
z = 13;
}
~test(){ }
};
int main(){
test a;
cout <<"The sum is: "<< a.y + a.z;
return 0;
}

