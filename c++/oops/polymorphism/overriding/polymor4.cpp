#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
};

class circle:public shape{
    public:
     void draw(){
        cout<<"circle";
     }

};

int main(){
    shape *s;
    circle c;
    s = &c;
    this->draw();

}