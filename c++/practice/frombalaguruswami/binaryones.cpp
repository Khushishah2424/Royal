#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read(void){
        cout<<"Enter a binary num :"<<endl;
        cin>>s;
    }

    void check_bin(){
        for(int i = 0 ; i < s.length() ; i++){
            if(s.at(i)!= '0' && s.at(i) != '1'){
                cout<<"\nIncorrect binary number format..the program will qiut";
                 exit(0);
            }
        }
    }

    void ones(void){
        check_bin();
        for(int i = 0 ; i < s.length() ; i++){
            if(s.at(i) == '0'){
                s.at(i) = '1';
            }
            else{
                s.at(i) = '0';
            }
        }
    }

    void display(){
        ones();
        cout<<"\nThe one's compliment of the above binary number is :"<<s;
    }

};

int main(){
    binary b;
    b.read();
    b.display();
    return 0;
}