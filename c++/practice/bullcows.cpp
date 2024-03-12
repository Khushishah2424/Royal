#include<iostream>
using namespace std;

void seperate(int no,int &i , int &j , int &k){
   k = no % 10;
   j = (no%100) / 10;
   i = no/100;
}

int main(){

    int snum = 123 ,gnum ,bulls = 0 , cows = 0;
    int si,sj,sk ,gi,gj,gk;
        cout<<"\nEnter num :";
        cin>>gnum;
        seperate(snum,si,sj,sk);
        seperate(gnum,gi,gj,gk);

    if(si == gi){
        bulls++;
    }
    if(sj == gj){
        bulls++;
    }
    if(sk == gk){
        bulls++;
    }
    if((si == gj || si == gk) && si!=gi){
        cows++;
    }
    if((sj == gi || sj == gk) && sj!=gj){
        cows++;
    }
    if((sk == gi || sk == gj) && sk!=gk){
        cows++;
    }
    cout<<"\ncows = "<<cows;
    //cows = diff position and same num
    cout<<"\nbulls = "<<bulls;
    //bulls  = same num and same position



}
