#include<iostream>
using namespace std;
class amazon{
    public:
    void orderitem(int item = 0 , int price = 0){
            cout<<"\n Order item function";
           cout<<"\n Item no "<<item;
           cout<<"\n Quantity "<<price;
    };
};
int main(){
    amazon a1;
    a1.orderitem();
}