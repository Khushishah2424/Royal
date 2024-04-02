#include<iostream>
using namespace std;

template <typename T, typename S> void print(T a,S b){

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}

int main(){
    print(10,"raj");
}