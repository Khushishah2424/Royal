#include<iostream>
using namespace std;
class printer{
    string _name;
    int _availablePaper;
    public:
    printer(string name,int paper){
        _name = name;
        _availablePaper = paper;
    } 
    void print(string textdox){
        cout<<"Printing...."<<textdox<<endl;
    }
};
int main(){
    printer myprint("Maxwell",10);
    myprint.print("\nHello my name is saldina,I am software Engineer.");

}

