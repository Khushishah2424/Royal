#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int,string> m1;
    m1[1] = "Khushi";
    m1[22] = "Krisha";
    m1[3] = "Riya";


    for(auto i = m1.begin();i!=m1.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }

}