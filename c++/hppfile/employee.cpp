#include<iostream>
#include "Employee.hpp"
using namespace std;
class EmployeeDetail : public Employee{

    public:
    virtual void printMessage()override;
};

class Employeedetail2: EmployeeDetail{
    public:
     void printMessage(){
        cout<<"Hello from EmployeeDetail"<<endl;
    }
};

int main(){
        Employeedetail2 obj;
        obj.printMessage();

}