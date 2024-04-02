#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    int age;
    float salary;
    string gender;

    public:
    Employee(int i , string n , int a , float s , string g){
        id = i;
        name = n;
        age = a;
        salary = s;
        gender = g;
    }

    Employee(){}

    void display(){
        cout<<"ID = "<<id<<endl;
        cout<<"NAME = "<<name<<endl;
        cout<<"AGE = "<<age<<endl;
        cout<<"SALARY = "<<salary<<endl;
        cout<<"GENDER = "<<gender<<endl;
    }
};

int main(){

    int empcount;
    cout<<"\nEnter the number of Employee : ";
    cin>>empcount;

    if(empcount <= 0){
        cout<<"Invalid choice";
        exit(0);
    }



    Employee *emp = new Employee[empcount];
    for(int i = 0 ; i < empcount ; i++){
        int id;
        string name;
        int age;
        float salary;
        string gender;
        fflush(NULL);

        cout<<"ID = ";
        cin>>id;

         fflush(NULL);

        cout<<"NAME = ";
        getline(cin,name);
        fflush(NULL);

        cout<<"AGE = ";
        cin>>age;

        cout<<"SALARY = ";
        cin>>salary;
        
        cout<<"GENDER = ";
        cin>>gender;

        Employee e(id,name,age,salary,gender);
        emp[i] = e;

    }



    cout<<"Employee Informatio :";
    for(int i = 0 ; i < empcount ; i++){
        cout<<"\nEmployee "<<i+1<<endl;
        emp[i].display();
    }
}