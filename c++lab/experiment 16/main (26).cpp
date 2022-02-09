/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>  
using namespace std;

class Complex_num  
{   
    int x, y;  
    public:  
        void read()  
        {  
            cout << " Input two complex number: " << endl;  
            cin >> x >> y;  
        }         
        Complex_num operator + (Complex_num obj)  
        {  
            Complex_num A;  
            // assign values to object  
            A.x = x + obj.x;  
            A.y = y + obj.y;  
            return (A);  
        }         
        Complex_num operator - (Complex_num obj)  
        {  
            Complex_num A;  
            // assign values to object  
            A.x = x - obj.x;  
            A.y = y - obj.y;  
            return (A);  
        }         
        void print()  
        {  
            cout << x << " + " << y << "i" << "\n";  
        }  
          
        void print2()  
        {  
            cout << x << " - " << y << "i" << "\n";  
        }  
};  
int main ()  
{  
Complex_num x1, y1, sum, sub; 
    x1.read();  
    y1.read();     
    // add the objects  
    sum = x1 + y1;  
    sub = x1 - y1; 
    cout << "\n Entered values are: \n";  
    cout << " \t";  
    x1.print();  
    cout << " \t";  
    y1.print();   
    cout << "\n The addition of two complex (real and imaginary) numbers: ";  
    sum.print(); 
    cout << "\n The subtraction of two complex (real and imaginary) numbers: ";  
    sub.print2(); 
    return 0; 
}
 
