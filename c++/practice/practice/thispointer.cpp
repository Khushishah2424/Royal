#include<iostream>
using namespace std;

class employee{
    public:
    int id = 101;
    string name = "Raj";
    employee(int id, string){
             cout<<"This pointer"<<this->id<<this->name<<endl;
             cout<<"Without"<<id << name;
    }
    
};
int main(){
    employee e1 = employee(1,"Ajay");

}

