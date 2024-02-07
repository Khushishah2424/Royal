#include<iostream>
using namespace std;
class employee{
    public:
    employee(){
        cout<<"Constructor Invoked"<<endl;
    }
    ~employee(){
        cout<<"Destructor Invoked"<<endl;
    }
};
int main(){
    employee s1;
    employee e1;
}