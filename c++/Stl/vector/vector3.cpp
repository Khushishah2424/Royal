#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> v1;
    v1.push_back("hello");
    v1.push_back("World");

    for(string i:v1){
        cout<<i<<endl;
    }

    //remove element
    v1.pop_back();
    cout<<"After removing element from vector";
    for(string i:v1){
        cout<<i<<endl;
    }

    v1.insert(v1.begin()+2,"java");
    cout<<"\n After inserting element at specific position"<<endl;
    for(string i:v1){
        cout<<i<<endl;
    }

     cout<<"Size of vector is "<<v1.size()<<endl;

}