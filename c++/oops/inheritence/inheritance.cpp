#include<iostream>
using namespace std;
class grandfather{
    public:
    char gname[30] = "Panubhai";

};

class father:public grandfather{
    public:
    char fname[30] = "Alpeshbhai";
};

class daughter : public father{
    public:
    char dname[30] = "Khushi";
    void printdata(){
         cout<<"\nGrandfather = "<<gname;
         cout<<"\nFather = "<<fname;
         cout<<"\nMine = "<<dname;
    } 
};
int main(){
    daughter d1;
    d1.printdata();
    d1.printdata();
    d1.printdata();

}