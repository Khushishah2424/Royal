#include<iostream>
using namespace std;
class cal{
    public:
    int add(int a,int b){
        return a+b;
    }
     int add(int a,int b,int c){
        return a+b;
    }

};
int main(){
    cal c;
    cout<<c.add(1,2)<<endl;
    cout<<c.add(1,2);


}