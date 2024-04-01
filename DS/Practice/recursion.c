#include<stdio.h>
void print(int count){
        if(count != 0){
            printf("\nWelcome...");
            print(count-1);
        }
}
int main(){
    print(3);
}