#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    char name[30];
    float salary;
    public:
    void getemployeedatails();
    void displayemployeedatails();
};
void employee :: getemployeedatails(){
    cout<<"\nEnter the id :";
    cin>>id;
    cout<<"\nEnter the name :";
    cin>>name;
    cout<<"\nEnter the salary :";
    cin>>salary;
}
void employee :: displayemployeedatails(){
    cout<<"\nEmployee Id = "<<id;
    cout<<"\nEmployee Name = "<<name;
    cout<<"\nEmployee Salary = "<<salary;
}
int main(){
    employee e[3];
    for(int i = 0 ; i < 3 ;i++){
        cout<<"\nEnter the details of"<<i+1 <<" employee";
        e[i].getemployeedatails();
    }
    for(int i = 0 ; i < 3 ;i++){
         cout<<"\n Details of "<<i+1<<" employee";
         e[i].displayemployeedatails();
    }

}