#include<iostream>
using namespace std;

class India{
    public:
    void test(){
        cout<<"India";
    }
};

class Gujarat:public India{
    public:
    void test(){
        cout<<"Gujarat";
    }
};

int main(){
    Gujarat g;
    g.test();
}