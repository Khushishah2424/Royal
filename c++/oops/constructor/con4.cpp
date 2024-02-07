#include<iostream>
using namespace std;
class student{
    public:
    student(int id , char name[20], int salary){
         cout<<"\n parameterized constructor called";
        //  cout<<"\nid = "<<id;
        //  cout<<"\nName = "<<name;
        //  cout<<"\nSalary = "<<salary;
    }
};
int main(){
    // student s1(1,"Raj",20000);
    student s1 = student(1,"Raj",20000);
 
}





