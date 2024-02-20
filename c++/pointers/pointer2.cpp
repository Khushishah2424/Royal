#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p;
    p = &a;

    cout<<"\n value of a = "<<a;
    cout<<"\n Address of a = "<<&a;
    cout<<"\n value of p = "<<*p;
    cout<<"\n Address of p = "<<p;
    p++;
     cout<<"\n value of p = "<<*p;
    cout<<"\n Address of p = "<<p;


}
