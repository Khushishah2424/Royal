#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<string,string> m1;
    m1["Gujarat"] = "Ghandhinagar";
    m1["Maharastra"] = "Mumbai";
    m1["Rajasthan"] = "Jaipur";

    for(auto i:m1){
        cout<<i.first<<" "<<i.second<<endl;
    }
}