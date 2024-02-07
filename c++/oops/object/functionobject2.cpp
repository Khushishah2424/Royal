#include<iostream>
using namespace std;
class collage{
    public:
    int stdcount;
    void sciencestudent(collage c1){
        cout<<"science std count = " << c1.stdcount<<endl;
    }
    void commercestd(collage c1){
        cout<<"commerce std count = " << c1.stdcount<<endl;
    }
};
int main(){
    collage s;
    s.stdcount = 100;
    s.sciencestudent(s);
    collage c;
    c.stdcount = 50;
    c.commercestd(c);
}