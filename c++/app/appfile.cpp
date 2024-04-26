#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student{
    private:
    string name;
    int age;
    public:
    Student(string n , int a){
        name = n;
        age = a;
    }

    Student(){}

    void display(){
        ofstream fout;
        fout.open("app.txt");
        fout<<"Name : "<<name<<endl;
        fout<<"Age : "<<age<<endl;
        fout.close();
    } 



};


int main(){
    int stucount;  
    cout<<"\n Enter the NUMBER of Student : ";
    cin>>stucount;


    Student *stu = new Student[stucount];
    for(int i = 0 ; i < stucount ; i++){
        string name;
        int age;
        fflush(NULL);
        cout<<"Enter name : ";
        getline(cin,name);

        fflush(NULL);
        cout<<"Enter age :";  
        cin>>age;

        stu[i] = Student(name,age);

    }

    cout<<"Student Information"<<endl;
    for(int i = 0 ; i < stucount ; i++){
        cout<<"\n Student "<<i+1<<endl;
        stu[i].display();
    }
   
    
}