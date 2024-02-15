#include<iostream>
using namespace std;
 
int find1(string name , char c){
    for(int i = 0 ; i < name.length() ; i++){
        if(name[i] == c){
            return i;
        }
    }
}
int main(){
    // string name = "Java";
    // char c = 'a';
     int ans = find1("java",'a');
     cout<<ans;
}
