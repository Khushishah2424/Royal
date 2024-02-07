#include<iostream>
using namespace std;
class clac{
    public:
    int balance  = 1000;
    void deposit(int amount){
        int balance = 200;
        cout<<"Local balance = "<<balance<<endl;
        cout<<"instance balance = "<<this->balance<<endl;
        this->balance = this->balance + amount;
    }
    void checkbalance(){
        cout<<"Balance = "<<balance<<endl;
    }
};
int main(){
     clac c;
     c.checkbalance();
     c.deposit(1000);
}





