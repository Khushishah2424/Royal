#include<iostream>
using namespace std;

class TRAI{
    public:
    virtual void call() {
        
    };
};

class JIO:public TRAI{
    public:
    void call(){
        cout<<"Calling from JIO"<<endl;
    }
    void call1(int y){
        cout<<"Calling from JIO...."<<endl;
    }
};

int main(){
     JIO j;
     j.call();

} 