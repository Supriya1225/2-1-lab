/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
using namespace std;
class A{
	int x = 10;
	public:
	virtual void display(){
		cout<<x;
	}
};
class B:public A{
	int y = 20;
	public:
	void display(){
		cout<<"Value of y is:"<<y;
	}
};
int main(){
	A *a;
	B b;
	a = &b;
	a -> display();
	return 0;
}
