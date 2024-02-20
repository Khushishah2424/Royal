#include<iostream>
using namespace std;
int *returnpointer(){
    int x = 10;
    cout<<"Address of x = "<<x;
    int *p = &x;
    return p;
}
int main(){
    int *p = returnpointer();
    cout<<"\nValue of p = "<<p;
}