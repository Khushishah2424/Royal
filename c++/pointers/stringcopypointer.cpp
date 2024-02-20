#include<iostream>
using namespace std;
int main(){
    string name = "ram";
    string *p;
    p = &name;
    cout<<*p;

}