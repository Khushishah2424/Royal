#include<iostream>
#include<string>
using namespace std;
class user{
    string name;
    int age;
    public:
    void setname(string name){
        this->name = name;
    }
    string getname(){
        return this->name;
    }


    void setage(int age){
        this->age = age;
    }
    int getage(){
        return this->age;
    }


};
int main(){
    user u1;
    u1.setname("ram");
    cout<<"Name = "<<u1.getname()<<endl;

    u1.setage(20);
    cout<<"Age = "<<u1.getage()<<endl;

}