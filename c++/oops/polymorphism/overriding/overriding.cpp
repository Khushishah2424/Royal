#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"Display parent";
    }
};

class child : public parent{
    public:
    void display(){
        cout<<"Display Child";
    }
};

int main(){
    child c;
    c.display();
    // parent p;
    // p.display();
}
