#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
    void getdata(int a,float b);
    void putdata(void){
        cout<<"int  = "<<number<<endl;
        cout<<"float = "<<cost<<endl;

    }
    void item::getdata(int a,int b){
        number = a;
        cost = b;
    }

};
int main(){
    item s;
    s.getdata(32,2.4);
    s.putdata();
}