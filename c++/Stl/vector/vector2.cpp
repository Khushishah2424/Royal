#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    int no;

    while(true){
        cout<<"\n Enter no to add in vector : ";
        cin>>no;

        v1.push_back(no);

        cout<<"\n do you want to add more no in vector press 0 to exit or any other no to continue : ";
        cin>>no;
        if(no == 0){
            break;
        }

    }
    for(int i:v1){
        cout<<i<<endl;
    }
}