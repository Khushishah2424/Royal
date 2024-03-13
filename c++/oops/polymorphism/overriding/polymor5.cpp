#include<iostream>
using namespace std;
class Netflix{
    public:
    virtual void subscription()=  0;
};

class package1:public Netflix{
    public:
    void  subscription(){
        cout<<"100";
    }
};

class package2:public Netflix{
    public:
    void  subscription(){
        cout<<"200";
    }
};

int main(){
    Netflix *n;
    package1 p;
    n = &p;
    n->subscription();
    
}


