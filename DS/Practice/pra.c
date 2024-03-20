#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int f = -1;
int r = -1;

void insert(int num){
    if(r == SIZE - 1 && f == 0){
        printf("Q is full");
    }
    else if(r == f-1){
        printf("Q is full");
    }
    else{
        if(r == SIZE - 1){
            r = 0;
            queue[r] = num;
        }
        else{
            r++;
            queue[r] = num;
            if(f == -1){
                f = 0;
            }
        }
    }
}

int main(){
    int num,choice;
    while(1){
        printf("\n1For insert\n2For Display\n3For Remove\n4For Exit");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter Num :");
            scanf("%d",&num);
            break;
        
        default:
            break;
        }
    }
}