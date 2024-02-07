#include<iostream>
using namespace std;

class GOV{

    public:
    char partyName[10]="BJP";
    char pmName[20]="Narendra Modi";

};
class StateGov : public GOV{

    public:
    char cmName[20]="Yogi Adityanath";
    char stateName[20]="Uttar Pradesh";

    void getMyStateData(){

        cout<<"Party name: "<<partyName<<endl;
        cout<<"PM name: "<<pmName<<endl;
        cout<<"CM name: "<<cmName<<endl;
        cout<<"State name: "<<stateName<<endl;

    }
};

class AMC : public StateGov{

    public:
    void getMyCityData(){

        cout<<"Party name: "<<partyName<<endl;
        cout<<"PM name: "<<pmName<<endl;
        cout<<"CM name: "<<cmName<<endl;
        cout<<"State name: "<<stateName<<endl;

    }

};

int main(){

    AMC a1;
    a1.getMyCityData();
    a1.getMyStateData();

    StateGov s1;
    s1.getMyStateData();
    return 0;

}