#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    ifstream fin;
    fin.open("demo1.txt");
    if(!fin){
        cout<<"Error in file opening"<<endl;
    }
    else{
        cout<<"file opend successfully"<<endl;
        string line;
        while(getline(fin,line)){
            cout<<line<<endl;
        }
    }

}