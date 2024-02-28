#include<iostream>
using namespace std;
int main(){
    int p,a[10],pos,num;
    cout<<"Enter howmany Element you want:";
    cin>>p;
    for(int i = 0 ; i < p ; i++){
       cin>>a[i];
    }
    cout<<"num";
    cin>>num;
    cout<<"pos";
    cin>>pos;
    if(pos<0 || pos>p){
        cout<<"Invalid choice";
    }
    else{
        for(int i = p ; i >=pos ; i--){
            a[i] = a[i-1]; 
        }
        a[pos - 1] = num;
        p++;
    }

   for(int i = 0 ; i < p ; i++){
        cout<<a[i];
   }

}