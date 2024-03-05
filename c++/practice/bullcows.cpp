#include<iostream>
using namespace std;

void seperate(int no){
    for(int i = 0 ; i < 3 ;i++){
        int temp = 0;
        temp = no % 10;
        no/=10;
        cout<<temp;

    }
}

int main(){

    int snum = 123;
    int u;
        cout<<"Enter num :";
        cin>>u;
        seperate(u);
}