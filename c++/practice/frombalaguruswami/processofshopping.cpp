#include<iostream>
using namespace std;

const int m = 50;
class ITEMS{
    int itemcode[m];
    float itemPrice[m];
    int count;

    public:
    void CNT(void){count = 0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);

};

void ITEMS:: getitem(void){
    cout<<"Enter items code :";
    cin>>itemcode[count];
    cout<<"Enter items price :";
    cin>>itemPrice[count];
    count++;
}

void ITEMS::displaySum(void){
    float sum = 0;
    for(int i = 0 ; i < count ; i++){
        sum = sum  + itemPrice[i];
        cout<<"\nTotal value :"<<sum<<"\n";
    }
}

void ITEMS::remove(void){
    int a;
    cout<<"Enter item code :";
    cin>>a;

    for(int i = 0 ; i < count ; i++){
        if(itemcode[i] == a){
            itemPrice[i] = 0;
        }
    }
}

void ITEMS :: displayItems(void){
    cout<<"\nCode price\n";
    for(int i = 0 ; i < count ; i++){
        cout<<itemcode[i]<<" "<<itemPrice[i]<<"\n";
    }
    cout<<"\n";
}

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<"\nYou can do the follwing;"
            <<"Enter appropriate number \n";
        cout<<"\n1 : Add an items";
        cout<<"\n2 : Display total value";
        cout<<"\n3 : Delete an items";
        cout<<"\n4 : Display all items";
        cout<<"\n5Quit";
        cout<<"\nWhat is your options ?";
        cin>>x;

        switch(x){
        case 1 : order.getitem();break;
        case 2 : order.displaySum();break;
        case 3 : order.remove();break;
        case 4 : order.displayItems();break;
        case 5 : break;
        default:
            cout<<"wrong";

       } 
    } 
    while(x!=5); 

}
