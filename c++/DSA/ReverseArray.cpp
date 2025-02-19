#include<iostream>
using namespace std;

void ReverseArray(int a[]){
    for(int i = 0 ; i < 5/2 ;i++){
        int temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

}

int main(){
    int a[] = {1,2,3,4,5};
    ReverseArray(a);
    for(int i = 0 ; i < 5;i++){
        cout<<a[i];
    }

}