#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p;
    p = &a;
    cout<<"value of a = "<<a;
    *p = *p + 1;
    cout<<"\nvalue of a = "<<*p;

}

 