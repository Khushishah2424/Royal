#include<iostream>
using namespace std;
class test{
    public:
    int no1 = 100;
    void getobject(test t1){
         cout<<"Object is created"<<endl;
         cout<<"Value of no1 is using t1 object "<<t1.no1<<endl;
    }
};
int main(){
    test t;
    t.no1 = 1000;
    test t2;
    t2.no1 = 2000;
    t.getobject(t2);
}