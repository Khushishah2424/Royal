#include<iostream>
using namespace std;
class subject{
    public:
    int num_of_sub;
    subject(){
        cout<<"\nDefualt Constructor";
        num_of_sub = 7;
        cout<<"Subject = "<<num_of_sub;
    }
};
int main(){
    subject s1;
}