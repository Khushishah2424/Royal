#include<iostream>
using namespace std;

//time Complexity = 0(n)

int LinearSearch(int arr[],int target){
    for(int i = 0 ; i < 7 ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[6] = {4,5,6,2,34,5};
    int target;
    cout<<"Enter which number you want to check : ";
    cin>>target;

    cout<<LinearSearch(arr,target)<<endl;

}