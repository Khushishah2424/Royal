#include<iostream>
using namespace std;
int main(){ 
    int binnum = 101,ans = 0;
    int pow = 1;
    while(binnum > 0){
        int rem = binnum%10;
        ans += rem * pow;
        binnum/=10;
        pow*=2;
    }
    cout<<"ans = "<<ans;
}  