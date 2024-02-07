#include<iostream>
using namespace std;
class bank{
    int netbalance=0;
    public:
    void depoiste(int amt){
        netbalance = netbalance + amt;
        cout<<"\ndeposite function";
    }
    void withdraw(int amt);
    int checkbalance();
};

void bank :: withdraw(int amt){
    if(amt>netbalance){
        cout<<"\ninsu balance";
    }
    else{
        netbalance = netbalance - amt;
        cout<<"\nwithdraw function";
    }
}

int bank :: checkbalance(){
    cout<<"\ncheck balance";
    return netbalance;
}

int main(){
    bank b1;
    b1.depoiste(1100);
    b1.withdraw(500);
    int bal = b1.checkbalance();
    cout<<"\n balnce is "<<bal;
}