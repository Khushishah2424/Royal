#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int f = -1;//Front
int r = -1;//Rare

void insert(int num){
    if(r == SIZE - 1 && f == 0 ){
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

void display(){
    int i;
    if(r>=f){
        for( i = f ; i <= r ; i++){
            printf(" %d",queue[i]);
        }   
    }
    else{
        for( i = f ; i < SIZE ; i++){
            printf(" %d",queue[i]);
        }
        for(i = 0 ; i <= r ; i++){
            printf(" %d",queue[i]);
        }
    }
} 

void removeq(){
    if(f == -1){
        printf("Q is empty");
    }
    else{
        printf("%d is removed",queue[f]);
        if(f == r){
            f = -1;
            r = -1;
        }
        else if(f == SIZE - 1){
            f = 0;
        }
        else{
            f++;
        }
    }
    
}

int main(){
    int num,choice;
    while(1){
        printf("\n 1 For insert\n 2 For Display\n 3 For remove");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the num :");
        scanf("%d",&num);
        insert(num);
        break;
    case 2:
        display();
        break;
    case 3:
        removeq();
        break;
    case 4:
        exit(1);
    default:
        break;
    }

    }
    return 0;
}