#include<iostream>
#include<string.h>
using namespace std;

template <class T> class myClass{
    public:
    void test(int a){
        cout<<"Test 1 is = "<<a<<endl;
    }

    void test2(T a){
        cout<<"Test 2 is = "<<a<<endl;
    }

};

int main(){
    myClass<int>m1;
    m1.test(10);
    m1.test2(20);

    myClass<string>m2;
    m2.test2("raj");
}