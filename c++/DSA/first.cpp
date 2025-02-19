#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,4,54,20,6};
    int smallest = a[1];
    int largest = a[1]; 
    int largestIndex = 1;
    int smallestIndex = 1;
    for(int i = 0 ; i < 5 ;i++){
        if(smallest > a[i]){
            smallest = a[i];
            smallestIndex = i;
        }
        if(largest<a[i]){
            largest = a[i];
            largestIndex = i;
        }
    
    }
    cout<<"min = "<<smallest << "at "<<smallestIndex;
    cout<<"max = "<<largest << "at "<<largestIndex;

}
// int main(){

// }
