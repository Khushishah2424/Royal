#include<iostream>
using namespace std;
class cla{
    public:
    int add(int a, int b);
    int sub(int a,int b);
    int mul(int a,int b);
    int div(int a,int b);

};

int cla :: add(int a,int b){
   return a+b;
};
int cla :: sub(int a,int b){
    return a-b;
};
int cla :: mul(int a,int b){
    return a*b;
};
int cla :: div(int a,int b){
    return a/b;
};



int main(){
    cla c;
    int add = c.add(10,20);
    cout<<"\nadd = "<<add;
    int sub = c.sub(20,10);
    cout<<"\nsub = "<<sub;
    int mul = c.mul(4,5);
    cout<<"\nmul = "<<mul;
    int div = c.div(40,2);
    cout<<"\ndiv = "<<div; 

}