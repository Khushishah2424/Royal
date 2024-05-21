#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> v = {12,32,45,6,7};
    cout<<*min_element(v.begin(),v.end());
    cout<<*max_element(v.begin(),v.end());
}