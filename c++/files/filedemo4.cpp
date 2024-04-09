#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ifstream fin;
    fin.open("demo2.txt");
    string data;
    fin.seekg(0);
    while(getline(fin,data)){
        cout<<data<<endl;
    }
}
