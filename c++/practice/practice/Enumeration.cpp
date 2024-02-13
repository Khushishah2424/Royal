#include<iostream>
using namespace std;

enum week{Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Monday };
int main(){
    week day;
    day = Monday;
    cout << "Day: " << day+1<<endl;  
}