#include<iostream>
#include<string.h>
using namespace std;
string reverse(string name){
        string rev = " ";
        for(int i = name.length(); i >= 0;i--){
              rev = rev + name[i];
        }
        return rev;
    
    }
int main(){
    string name = "Khushi";
    string ans =  reverse(name);
    cout<<ans;
} 
