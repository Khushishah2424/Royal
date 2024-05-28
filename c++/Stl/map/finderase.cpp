#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,string> m1;
    m1["Class1"] = "A";
    m1["Class2"] = "B";
    m1["Class3"] = "C";
    m1["Class4"] = "D";

    // auto f = m1.find("Class1");
    // cout<<f->first<<" "<<f->second<<endl;
    m1.erase("Class1");
    for(auto it = m1.begin();it!=m1.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }


}