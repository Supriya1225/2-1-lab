/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class student_info{
    int roll_number,grade;
    char student_name[50];
    public:
    void read_data(int count){
        cout<<"enter student"<<count+1<<"information";
        cout<<"Name of the Student";
        cin>>student_name;
        cout<<"Roll Number";
        cin>>roll_number;
        cout<<"Grade";
        cin>>grade;
        
        
    }
    void display_data(int count){
        cout<<"student"<<count+1;
        cout<<"\nName of the student"<<student_name;
        cout<<"\nRoll Number:"<<roll_number;
        cout<<"\nGrade Secured"<<grade;
        
    }
};
int main(){
student_info stud[3];
int i;
for(i=0;i<3;i++)
stud[i].read_data(i);
for(i=0;i<i++;)
stud[i].display_data(i);
return 0;
}
