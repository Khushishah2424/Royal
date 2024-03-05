#include<iostream>
#include<cstdlib>
using namespace std;

char getcomputer(){
    int move;
    srand(time(NULL));
    move = rand()%3;

   if(move  == 0){
    return 'p';
   }
   else if(move == 1){
    return 's';
   }
   else{
    return 'r';
   }

}
int main(){
    char user;
    int scroe = 0;
    while(1)
    {
        
        char c1 = getcomputer();
        cout<<c1<<endl;
        cout << "enter you choice p s r: " << endl;
        cin >> user;

        if(user==c1)
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "draw" << endl;
        }
        else if ((user == 'r' && c1 == 'p') || (user == 'p' && c1 == 's'))
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "break" << endl;
            scroe++;
            exit(0);
        }
        else
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "continue" << endl;
            continue;
        }
    }
}
