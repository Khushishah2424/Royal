#include<iostream>
using namespace std;
void change(int x){
    cout<<"\n Value of x "<<x;
    x = 1000;
}
int main(){
    int x = 10;
    change(x);
    cout<<"\n after change function call....";
    cout<<"\n value of x = "<<x;
    
}