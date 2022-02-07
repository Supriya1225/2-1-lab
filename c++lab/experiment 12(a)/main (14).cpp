/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Add
{
	public:	
	int add(int a,int b){
		return a + b;
	}
	int add(int a,int b,int c){
		return a + b + c;
	}
};
int main()
{
	Add a;
	cout<<"Sum of 50,40 is: "<<a.add(50,40)<<endl;
	cout<<"Sum of 50, 40, 10 is: "<<a.add(50,40,10)<<endl;
	
return 0;
}



