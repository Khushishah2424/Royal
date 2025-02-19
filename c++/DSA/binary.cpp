#include<iostream>
using namespace std;

int main(){
    int decnum = 5;
    int ans = 0;
    int power = 1;
    while(decnum > 0){
        int rem = decnum%2;
        decnum = decnum/2;
        ans += (rem * power);
        power = power * 10;

    }
    cout<<"ans = "<<ans;
}