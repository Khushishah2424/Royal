#include<iostream>
using namespace std;
class netflix{
    public:
    int id;
    char name[20]= "kiran";
    void useracc(){
        cout<<"User Account"<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"name = "<<name<<endl;
    }  
};
class movies:public netflix{
   char movieName[20]= "Avengers";
    void movieList(){
        cout<<"User Name ="<<name<<endl;
        cout<<"Movie List"<<endl;
        cout<<"Movie Name = "<<movieName<<endl;
    }

};