#include<iostream>
using namespace std;
class student{
    public:
    void aboutstd(){
        cout<<"Details of Student"<<endl;
    }
    void aboutstd(int id){
        cout<<"Student id num = "<<id;
    }
    void aboutstd(int id,char name[30]){
        cout<<"Student id num = "<<id<<endl;
        cout<<"Student Name = "<<name<<endl;
    }
    void aboutstd(int id,char name[30],float marks){
        cout<<"Student id num = "<<id<<endl;
        cout<<"Student Name = "<<name<<endl;
        cout<<"Studnet marks = "<<marks<<endl;
    }
};
int main(){
    student s1;
    // s1.aboutstd();
    // s1.aboutstd(1,"Kiran");
    s1.aboutstd(1,"kiran",89.30f);
}