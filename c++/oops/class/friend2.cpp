#include<iostream>
using namespace std;
class B;
class C;
class A{
    public:
    int x = 100;
    void friend imfriend(A a,B b,C c);

};
class B{
    public:
    int y = 100;
    void friend imfriend(A a,B b,C c);

};
class C{
    public:
    int z = 100;
    void friend imfriend(A a,B b,C c);

};
void imfriend(A a,B b ,C c){
    cout<<"\n friend fucntions";
    cout<<"\n "<<a.x;
    cout<<"\n "<<b.y;
    cout<<"\n "<<c.z;

    int ans = a.x + b.y + c.z;
    cout<<"\n Ans = "<<ans;


}
int main(){
    A a1;
    B b1;
    C c1;
    imfriend(a1,b1,c1);
}