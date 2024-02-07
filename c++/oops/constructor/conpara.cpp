#include<iostream>
using namespace std;
class student{
    public:
    // student(int id){
    //      cout<<"\n Student constructor called";
    //      cout<<"\n parameterized constructor called";
    //      cout<<"\nid = "<<id;
    // }
    // student(char name[20]){
    //      cout<<"\n Student constructor called";
    //      cout<<"\n parameterized constructor called";
    //      cout<<"\n Name = "<<name;
    // }
    student(int id , char name[20]){
         cout<<"\n Student constructor called";
         cout<<"\n parameterized constructor called";
         cout<<"\nid = "<<id;
         cout<<"\nName = "<<name;
    }

};
int main(){
    // student s1(100);
    // student s1("Khushi");
    student s1(100,"Meet");
}