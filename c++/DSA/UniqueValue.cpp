//Vectors
#include<iostream>
#include <vector>
using namespace std;
int Unique(vector<int> a){
    int ans = 0;
    for(int val : a){
        ans = ans ^ val;
    }
    return ans;
}
int main(){
    vector<int> v1 = {1,2,1,2,3};
     cout<<Unique(v1);

}