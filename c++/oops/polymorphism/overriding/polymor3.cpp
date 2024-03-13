#include<iostream>
using namespace std;
class Facebook{
    public:
    virtual void smile() = 0;
    virtual int choc()= 0;
};


class A:public Facebook{
    public:
    void smile(){
        cout<<"A"<<endl;
    }
};

class B:public Facebook{
    public:
    void smile(){
        cout<<"B"<<endl;
    }
};

int main(){
    Facebook *f;
    A a;
    f = &a;
    f->smile();

    B b;
    f = &b;
    f->smile();

}