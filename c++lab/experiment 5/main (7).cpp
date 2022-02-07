/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
class Rectangle{
	public:
		int length, breadth;
	void read(){
		cout<<"Length = ";
cin>> length;
cout<<"\n Breadth: ";
cin>> breadth;

	}
	void display(){
		int area = 2*length*breadth;
cout<<"Area: "<<area;
	}
};
int main (){
	Rectangle rect, *ptr;
ptr = & rect;
ptr -> read();
ptr -> display();
return 0;
}
