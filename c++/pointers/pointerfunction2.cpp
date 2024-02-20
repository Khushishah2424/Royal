#include<iostream>
using namespace std;
void file(){
    cout<<"file is open";
}
void database(){
    cout<<"database is open";
}
int main(){
    string input = "file";
    if(input == "file"){
        void(*p)() = file;
        p();
    }
    else{
        void (*p)()= database;
        p();
    }
}