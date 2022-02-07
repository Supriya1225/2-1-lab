/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
#include<exception>
using namespace std;
int main(){
	int a,b;
	float c;
	cout<<"Enter the numerator and denominator: ";
	cin >>a >> b;
	try{
	   
		if(b == 0){
		   throw(b);
			
		}
		
		c = a/b;
   	cout<<"Result is: "<<c<<endl;
		
	}
	catch(int i){
		cout<<"exception is catch"<<endl;
	}
	
	catch(...){
		cout<<"denominator cannot be zero!! "<<endl;
	}
	return 0;
}

