#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    int a[5] = {12,35,56,7,8};
    sort(a,a+5);
    for(int i = 0 ; i < 5 ;i++){
        cout<<a[i]<<" ";
    }

    // vector<int> v1 ={12,35,56,7,8};
    // sort(v1.begin(),v1.end());
    // for(int x:v1){
    //     cout<<x<<" ";
    // }


}
