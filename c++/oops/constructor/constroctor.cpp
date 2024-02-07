#include<iostream>
using namespace std;
class bank{
    public:
    int id;
    bank(){
         cout<<"\n Bank constructor called";
        cout<<"\n default constructor called\n";
        id = 100;
        cout<<"id = "<<id;
    }
};
int main(){
    bank b1;
    return 0;
}




