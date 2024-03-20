#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
    void dataget(int a,float b);
    void putdata(void){
        cout<<"int  = "<<number<<endl;
        cout<<"float = "<<cost<<endl;

    }
};
void item::dataget(int a,float b){
        number = a;
        cost = b;
    }
int main(){
    item s;
    s.dataget(32,2.4);
    s.putdata();
}