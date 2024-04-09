#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class bank{
    public:
    void openAccount();
};
void bank :: openAccount(){
    ofstream fout;
    fout.open("demo2.txt",ios::app);
    //check file is open or not
    if(!fout){
        cout<<"Erorr in creating file"<<endl;
        return;
    }
    else{
        cout<<"file created succesfully"<<endl;
        string name;
        int age,balance;
        cout<<"Name = "<<endl;
        cin>>name;
        cout<<"Age = "<<endl;
        cin>>age;
        cout<<"Balance = "<<endl;
        cin>>balance;
        fout<<"Name = "<<name<<endl;
        fout<<"Age = "<<age<<endl;
        fout<<"Balane = "<<balance<<endl;
        fout.close();

    }
}
int main(){
    bank b;
    b.openAccount();
}