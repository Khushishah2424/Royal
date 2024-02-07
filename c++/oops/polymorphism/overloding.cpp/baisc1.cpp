#include<iostream>
using namespace std;
class shape{
    public:
    void area(){
         cout<<"Area of Shape"<<endl;
    }
    void area(char name[20]){
         cout<<"Area of Shape with string.."<<endl;
    }
    void area(int r){
         cout<<"Area of Circle = "<<3.14*r*r<<endl;
    }
    void area(int l,int b){
         cout<<"Area of Rectangle = "<<l*b<<endl;
    }
    void area(int l,int b,int h){
         cout<<"Area of Cuboid = "<<l*b*h<<endl;
    }
};
int main(){
    shape s1;
    s1.area();
    s1.area("kiran");
    s1.area(10);
    s1.area(10,20);
    s1.area(10,6,5);
}