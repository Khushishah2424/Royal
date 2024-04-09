#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ofstream fout;
    // fout.open("demo1.txt");
    // fout<<"Hello World"<<endl;
    // fout.close();

    fout.open("demo1.txt",ios::app);
    fout<<"hello World";
    fout.close();

}