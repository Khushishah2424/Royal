#include<iostream>
using namespace std;
class test{
    public:
    void tableint(int a = 10){
        for(int i = 1 ; i <= 10 ;i++){
            cout<<a<<"*"<<i<<"="<<i*a<<endl;
        }
    }

    void f(int num);
};
void test::f(int num){
    int fact = 1;
    for(int i = 1; i <= num ; i++){
          fact = fact * i;
    }
    cout<<"fact="<<fact<<endl;

}
int main(){
    int a;
    test t1;
    t1.tableint();
    t1.f(a);
}


