#include<iostream>
using namespace std;
class telephone{
    public:
    int number  = 123456;
    void notfriendfunction(){
        cout<<"im not a friend function\n";
        cout<<number;
    }
    void notfriend2();
    void friend imfriend();
};
void telephone :: notfriend2(){
     cout<<"\n im not a friend function\n";
     cout<<number;
}
void imfriend(telephone t){
    cout<<"\nim friend function\n";
    cout<<t.number;
}
int main(){
    telephone t;
    t.notfriendfunction();
    t.notfriend2();
    imfriend(t);

}
