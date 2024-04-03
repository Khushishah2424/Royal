#include<stdio.h>

void print(int num){
    if(num != 0){
        print(num - 1);
        printf(" %d",num);
    }
   
}


void printreverse(int num){
    if(num != 0){
        printf(" \n%d",num);
         print(num - 1);
    }
   
}


int main(){
    int num;
    printf("Enter the num :");
    scanf("%d",&num);
    print(num);
    printreverse(num);

}