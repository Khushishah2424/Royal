#include<iostream>
using namespace std;
class area{
    public:
    int length;
    int breadth;
    void getsquarearea(area a1){
        cout<<"area of circle is " <<a1.length * a1.breadth <<endl;
    }
    void getrectanglearea(area a1){
         cout<<"area of rectangle is " <<a1.length * a1.breadth <<endl;
    }

};
int main(){
    area sq;
    sq.length = 10;
    sq.breadth = 20;
    sq.getsquarearea(sq);
    area rec;
    rec.length = 2;
    rec.breadth = 4;
    rec.getrectanglearea(rec);

}