#include<iostream>
using namespace std;

class RBI{
    public:
    virtual void UPI() = 0;
};

class SBI:public RBI{
    public:
    void UPI(){
        cout<<"SBI"<<endl;
    }
};
 

int main(){
    SBI s;
    s.UPI();
}