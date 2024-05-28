#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;
int main(){
    map<string,list<string>> m1;
    m1["India"].push_back("Delhi");
    m1["India"].push_back("Mumbai");
    m1["India"].push_back("Jaipur");

    m1["AUSTRALIA"].push_back("sydney");
    m1["AUSTRALIA"].push_back("melbourne");
    m1["AUSTRALIA"].push_back("perth");


    list<string> usaCity;
    usaCity.push_back("New-york");
    usaCity.push_back("New-york");
    usaCity.push_back("New-york");

    m1["USA"] = usaCity;

    for(auto i:m1){
        cout<<"Country-name ="<<i.first<<"---";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}