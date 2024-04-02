#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T> void getAge(T age){
    cout<<"Age is "<<age<<endl;
}

template <typename T> T sum(T a,T b){
    return a+b;
}

int main(){
    int a = sum(10,20);
    // int a = sum(10,"raj");
    cout<<"Sum is  = "<<a;
}