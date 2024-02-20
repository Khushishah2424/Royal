#include<iostream>
using namespace std;
void change(int *x){
    cout<<"\n value of x = "<<*x;
    *x = 1000;

}
int main(){
    int x = 10;
    change(&x);
    cout<<"\nafter change function call ";
    cout<<"\n value of x = "<<x;
}