/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;
	
class Base
{
public:
	virtual void show() { 
	   cout<<" In Base \n"; 
	   
	}
};
	
class Derived: public Base
{
public:
	void show() {
	   cout<<"In Derived \n";
	}
};
	
int main(void)
{
	Base *bp = new Derived;
	bp->show(); // RUN-TIME POLYMORPHISM
	
return 0;
}
