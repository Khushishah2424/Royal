#include<iostream>
using namespace std;
class amazon{
    public:
    void order(int id){
         cout<<"Order id = "<<id<<endl;
    }
    void order(float id){
        cout<<"Order id with float value= "<<id<<endl;
    }
};
int main(){
    amazon a;
    a.order(12);
    a.order(12.56f);
}