#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    

    // while(s.size()>0){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    cout<<"is empty..."<<s.empty()<<endl;
    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}

   cout<<"is empty..."<<s.empty()<<endl;

  

}