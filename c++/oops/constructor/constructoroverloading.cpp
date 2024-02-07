#include<iostream>
using namespace std;
class lang{
    public:
    lang(){
        cout<<"constructor called"<<endl;
    }
    lang(char name[20]){
        cout<<"Constructor called with name"<<endl;
    }
    lang(char name[20],int age){
         cout<<"Constructor called with name and age"<<endl;
    }
};
int main(){
    lang l;
    lang l1("raj");
    lang l2("raj",10);
}
