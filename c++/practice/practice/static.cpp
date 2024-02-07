#include<iostream>
using namespace std;

// class Account{
//     public:
//     int accno;
//     string name;
//     static float rateofint;
//     Account(int accno,string name){
//         cout<<accno<<" "<<name<<" "<< rateofint;
//     }
// };
// float Account::rateofint = 6.5;
// int main(){
//     Account a1 = Account(101,"Raj");
// }

class Account{
    public:
    int accno;
    string name;
    static int count;
    Account(int accno , string name){
         cout<<accno<<" "<<name<<endl;
         count++;
    }
};
int Account::count = 0;
int main(){
    Account a1 = Account(101,"Raj");
    Account a2 = Account(291,"MIke");
    Account a3 = Account(101,"Raj");
    cout<<"Total Objects are: "<<Account::count;
    
}