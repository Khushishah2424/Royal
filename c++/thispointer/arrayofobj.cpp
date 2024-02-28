#include<iostream>
#include<string>
using namespace std;
class student{
    int id;
    string name;
    int marks;

    public:
    void getstddata(int id,string name, int marks);
    void printstddta();

};

void student :: getstddata(int id,string name, int marks){
   this->id = id;
   this->name = name;
   this->marks = marks;
}

void student :: printstddta(){
    cout<<"Id is = "<<this->id<<endl;
    cout<<"Name is ="<<this->name<<endl;
    cout<<"Marks is = "<<this->marks<<endl;
}
int main(){
    student s[3];
    int id;
    string name;
    int marks;
    for(int i = 0 ; i < 3 ; i++){
        cout<<"Id = ";
        cin>>id;
        cout<<"Name = ";
        cin>>name;
        cout<<"Marks = ";
        cin>>marks;
        s[i].getstddata(id,name,marks);
    }
    for(int i = 0 ; i < 3; i++){
        s[i].printstddta();
    }

}