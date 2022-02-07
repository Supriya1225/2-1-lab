/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
using namespace std;

class base
{
   int a;
   public:
	virtual void function() = 0;
	int getX(){
		return a;
	}
};

class derived: public base
{
	int b;
	public:
	void function(){ 
	   cout << "function is called"; 
	}
};

int main()
{
	derived d1;
	d1.function();
	return 0;
}

