#include<iostream>
using namespace std;
int test(int a, int b){
    cout<<"\na = "<<a;
}
int test2(int a, int b){
    cout<<"\nb = "<<b;
}

int main(){
    int (*p)(int , int ) = test;
    int (*p2)(int , int ) = test2;
    p(10,20);
    p2(10,20);


}


