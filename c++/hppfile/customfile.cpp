#include<iostream>
#include "customfile.hpp"
using namespace std;

void DerivedClass ::printmessage(){
    cout<<"HELLO..."<<endl;
}   
int main(){
    DerivedClass obj;
    obj.printmessage();
}