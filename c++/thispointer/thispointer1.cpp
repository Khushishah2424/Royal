#include<iostream>
using namespace std;
class employee{
    public:
    int salary = 1000;
    int a = 10;

    void empdata(int salary){
        cout<<"Salary is = "<<salary<<endl;
        cout<<"this pointer salary = "<<this->salary<<endl;
        cout<<"a = "<<this->a<<endl;
    }
};
int main(){
    employee e1;
    e1.empdata(2000);
}