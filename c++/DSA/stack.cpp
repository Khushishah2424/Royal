#include<iostream>
#define MAX 100
using namespace std;
class Stack{
    public:
    int a[MAX];
    int top;
    Stack(){
        top = -1;
    }
    bool push(int num);
    int pop();
    int peek();
    bool IsEmpty();
    void display();


};
bool Stack::push(int num){
    if(top == MAX-1){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
        a[++top] = num;
        cout<<num<<"Pushed"<<endl;
        return true;
    }
}
int Stack::pop(){
     if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1; 
    } else {
        return a[top--]; 
    }
}
int Stack::peek(){
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return -1; 
    } else {
        return a[top];
    }
}
bool Stack::IsEmpty(){
    return(top == -1);
}
void Stack::display(){
    if(top == -1){
         cout<<"\nStack Empty\n"<<endl;
    }
    else{
        for(int i = top;i >= 0;i--){
            cout<<a[i]<<endl;
        }
    }
}



int main(){
    int num,choice;
    class Stack s;
    while(1){
         cout<<"1 For Push"<<endl<<"2 For pop"<<endl<<"3 For Peek"<<endl<<"4 For Display"<<endl<<"5 For Exit"<<endl;
         cout<<"Enter Your choice : ";
         cin>>choice;
         switch (choice)
         {
         case 1:
            cout<<"Enter the num : "<<endl;
            cin>>num;
            s.push(num);
            break;
        case 2:
            num = s.pop();
            if (num != -1) {
                cout << num << " Popped from stack\n";
            }
            break;
        case 3:
            num = s.peek();
            if (num != -1) {
                cout << "Top element is: " << num << endl;
            }
            break;
        case 4:
            s.display();
            break;
        case 6:
            exit(0);
            break;
         default:
            cout<<"Invalid Choice"<<endl;
            break;
         }
    }




}